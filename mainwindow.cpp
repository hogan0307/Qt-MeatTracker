#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSettings>
#include <QSqlQuery>
#include <QDebug>
#include <QDir>
#include <QTimer>
#include <QSound>
#include <downloadmanager.h>
#include <QDebug>
#include <QFileDialog>

QString mediadir = "./Resource/";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap oPixmap(32,32);
    oPixmap.load ( mediadir + "meatTracker.png");

    QIcon oIcon( oPixmap );

    trayIcon = new QSystemTrayIcon(oIcon);

    QAction *quit_action = new QAction( "Exit", trayIcon );
    connect( quit_action, SIGNAL(triggered()), this, SLOT(on_exit()) );

    trayIconMenu = new QMenu(this);
    trayIconMenu->addAction( quit_action );

    trayIcon->setContextMenu( trayIconMenu);
    trayIcon->setVisible(true);

    createNewsTable();
    //trayIcon->showMessage("Test Message", "Text", QSystemTrayIcon::Information, 1000);
    //trayIcon->show();


//    connect(trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(iconActivated(QSystemTrayIcon::ActivationReason)));

 //   ui->timeCountProgress->setRange(0, int(timerPeriod.toFloat() * 60));
 //   ui->timeCountProgress->setValue(0);

    //QTimer *timer = new QTimer(this);
    //connect(timer, SIGNAL(timeout()), this, SLOT(updateCheck()));
    //timer->start(int(timerPeriod.toFloat() * 60) * 1000); // int(timerPeriod) * 60 * 1000

//    QTimer *timerClock = new QTimer(this);
 //   connect(timerClock,SIGNAL(timeout()), this, SLOT(showTime()));
 //   timerClock->start(1000);


    //Apply style
    QFile stylesheet("./Resource/themes/qdarkstyle/qdarkstyle.qss");
    stylesheet.open(QFile::ReadOnly);
    this->setStyleSheet(stylesheet.readAll());
    stylesheet.close();

    ui->tbl_story->verticalHeader()->setVisible(false);
    ui->txt_storyidea->setReadOnly(true);
    ui->tbl_story->setColumnWidth(0, 150);
    ui->tbl_story->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    initStoryTable();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::iconActivated(QSystemTrayIcon::ActivationReason reason)
{
    switch (reason)
    {
     case QSystemTrayIcon::Trigger:
         this->show();
         break;
     case QSystemTrayIcon::DoubleClick:
         this->show();
         break;
     case QSystemTrayIcon::MiddleClick:
      //  showMessage();
        break;

     default:
         ;
    }
}

void MainWindow::on_actionExit_triggered()
{
    this->close();
    QApplication::quit();
}


void MainWindow::on_exit()
{
    this->close();
    QApplication::quit();
}


void MainWindow::SaveSettings(){

        QSettings settings(QDir::currentPath() + "/ftp.ini", QSettings::IniFormat);
      //  ui->lineEditPort->setText(settings.value("settings/port", defaultPort).toString());

}

void MainWindow::loadSettings(){

    QSettings settings(QDir::currentPath() + "/ftp.ini", QSettings::IniFormat);
  //  settings.setValue("settings/port", ui->lineEditPort->text());
}


void MainWindow::createNewsTable(){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(QApplication::applicationDirPath() + "/news.sqlite");

    if(db.open()){
        qDebug()<<"Successful database connection";
    }else{
        qDebug()<<"Error: failed database connection";
        return;
    }

    QString query;
    query.append("CREATE TABLE IF NOT EXISTS tbl_idea(people TEXT, animal TEXT, datetime TEXT, title TEXT, idea TEXT, vote TEXT, picture TEXT)");

    QSqlQuery create(db);
    create.prepare(query);

    if (create.exec())
    {
        qDebug()<<"Table exists or has been created";
    }
    else
    {
        qDebug()<<"Table not exists or has not been created";
    }
    query.clear();
}

void MainWindow::on_save_clicked()
{
    QString strQuery = "INSERT INTO tbl_idea(people, animal, datetime, title, idea) VALUES('";
            strQuery += ui->txt_people->text() + "','";
            strQuery += ui->txt_animal->text() + "','";
            strQuery += QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + "','";
            strQuery += ui->txt_title->text() + "','";
            strQuery += ui->txt_idea->toPlainText() + "')";

    qDebug()<<strQuery;

    QSqlQuery query(db);
    query.exec(strQuery);
    initStoryTable();
}

void MainWindow::initStoryTable()
{
    ui->tbl_story->setRowCount(0);
    QString strQuery = "SELECT * FROM tbl_idea";
    QSqlQuery query(db);
    if(query.exec(strQuery)){
        int row = 0;
        while(query.next()){
            ui->tbl_story->insertRow(row);
            ui->tbl_story->setItem(row, 0, new QTableWidgetItem(query.value(2).toString()));
            ui->tbl_story->setItem(row, 1, new QTableWidgetItem(query.value(3).toString()));
            ui->tbl_story->setItem(row, 2, new QTableWidgetItem(query.value(5).toString()));
            row++;
        }
    }
}

void MainWindow::on_tbl_story_cellClicked(int row, int column)
{
    QString strQuery = "SELECT * FROM tbl_idea WHERE datetime = '" + ui->tbl_story->item(row, 0)->text() + "'";
    QSqlQuery query(db);
    if(query.exec(strQuery)){
        while(query.next()){
            ui->txt_storyidea->setPlainText(query.value(4).toString());
            ui->txt_people->setText(query.value(0).toString());
            ui->txt_animal->setText(query.value(1).toString());
            ui->txt_title->setText(query.value(3).toString());
            ui->txt_idea->setPlainText(query.value(4).toString());
        }
    }
}

void MainWindow::on_edit_clicked()
{
    QString strQuery = "UPDATE tbl_idea SET people = '" + ui->txt_people->text() + "',";
            strQuery += "animal = '" + ui->txt_animal->text() + "',";
            strQuery += "title = '" + ui->txt_title->text() + "',";
            strQuery += "idea = '" + ui->txt_idea->toPlainText() + "' WHERE datetime = '";
            strQuery += ui->tbl_story->item(ui->tbl_story->currentRow(), 0)->text() + "'";
    QSqlQuery query(db);
    query.exec(strQuery);
    initStoryTable();
    ui->txt_storyidea->setPlainText(ui->txt_idea->toPlainText());
}

void MainWindow::on_webvotedown_clicked()
{
    QString strQuery = "UPDATE tbl_idea SET vote = 'down' WHERE datetime = '";
            strQuery += ui->tbl_story->item(ui->tbl_story->currentRow(), 0)->text() + "'";
    qDebug()<<strQuery;
    QSqlQuery query(db);
    query.exec(strQuery);
    initStoryTable();
}

void MainWindow::on_webvoteup_clicked()
{
    QString strQuery = "UPDATE tbl_idea SET vote = 'up' WHERE datetime = '";
            strQuery += ui->tbl_story->item(ui->tbl_story->currentRow(), 0)->text() + "'";
    QSqlQuery query(db);
    query.exec(strQuery);
    initStoryTable();
}

void MainWindow::on_pictureUpload_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    QApplication::applicationDirPath(),
                                                    tr("Sounds (*.jpg *.png *.bmp)"));
    QPixmap pixmap(fileName);
    ui->lbl_pic->setPixmap(pixmap.scaled(ui->lbl_pic->width(), ui->lbl_pic->height(), Qt::KeepAspectRatio));

    QString strQuery = "UPDATE tbl_idea SET picture = '" + fileName + "' WHERE datetime = '";
            strQuery += ui->tbl_story->item(ui->tbl_story->currentRow(), 0)->text() + "'";
    qDebug()<<strQuery;
    QSqlQuery query(db);
    query.exec(strQuery);
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    if(index == 1)
        initStoryTable();
    else if(index == 2)
    {
        QString filename;
        QString strQuery = "SELECT picture FROM tbl_idea WHERE datetime = '" + ui->tbl_story->item(ui->tbl_story->currentRow(), 0)->text() + "'";
        QSqlQuery query(db);
        if(query.exec(strQuery)){
            while(query.next()){
                filename = query.value(0).toString();
            }
        }
        QPixmap pixmap(filename);
        ui->lbl_pic->setPixmap(pixmap.scaled(ui->lbl_pic->width(), ui->lbl_pic->height(), Qt::KeepAspectRatio));
    }
}
