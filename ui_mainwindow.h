/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QProgressBar *progressBar;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *hadsome;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QPushButton *edit;
    QTextEdit *txt_idea;
    QLabel *label_4;
    QLineEdit *txt_animal;
    QLineEdit *txt_people;
    QLineEdit *txt_title;
    QPushButton *save;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *publish;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_5;
    QTableWidget *tbl_meat;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tbl_story;
    QTextEdit *txt_storyidea;
    QPushButton *webvotedown;
    QPushButton *webvoteup;
    QWidget *tab_3;
    QGridLayout *gridLayout_7;
    QPushButton *pictureInspire;
    QPushButton *pictureRandom;
    QPushButton *pictureVoteUp;
    QPushButton *pictureUpload;
    QPushButton *pictureVoteDown;
    QLabel *lbl_pic;
    QWidget *tab_9;
    QGridLayout *gridLayout_10;
    QPushButton *pushButton;
    QTableWidget *tableWidget_5;
    QWidget *tab_7;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_10;
    QLineEdit *lineEdit_6;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *lineEdit_5;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1434, 867);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_4 = new QHBoxLayout(centralWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(450, 16777215));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lcdNumber = new QLCDNumber(widget_2);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        horizontalLayout->addWidget(lcdNumber);


        horizontalLayout_2->addLayout(horizontalLayout);

        progressBar = new QProgressBar(widget_2);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        horizontalLayout_2->addWidget(progressBar);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(310, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        hadsome = new QPushButton(widget_3);
        hadsome->setObjectName(QString::fromUtf8("hadsome"));

        horizontalLayout_3->addWidget(hadsome);


        verticalLayout->addWidget(widget_3);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        edit = new QPushButton(groupBox_2);
        edit->setObjectName(QString::fromUtf8("edit"));

        gridLayout_3->addWidget(edit, 5, 1, 1, 1);

        txt_idea = new QTextEdit(groupBox_2);
        txt_idea->setObjectName(QString::fromUtf8("txt_idea"));

        gridLayout_3->addWidget(txt_idea, 4, 0, 1, 4);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 1, 0, 1, 2);

        txt_animal = new QLineEdit(groupBox_2);
        txt_animal->setObjectName(QString::fromUtf8("txt_animal"));

        gridLayout_3->addWidget(txt_animal, 1, 3, 1, 1);

        txt_people = new QLineEdit(groupBox_2);
        txt_people->setObjectName(QString::fromUtf8("txt_people"));

        gridLayout_3->addWidget(txt_people, 0, 3, 1, 1);

        txt_title = new QLineEdit(groupBox_2);
        txt_title->setObjectName(QString::fromUtf8("txt_title"));

        gridLayout_3->addWidget(txt_title, 2, 1, 1, 3);

        save = new QPushButton(groupBox_2);
        save->setObjectName(QString::fromUtf8("save"));

        gridLayout_3->addWidget(save, 5, 0, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 2, 0, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 2);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 3, 0, 1, 2);

        publish = new QPushButton(groupBox_2);
        publish->setObjectName(QString::fromUtf8("publish"));

        gridLayout_3->addWidget(publish, 5, 3, 1, 1);


        verticalLayout->addWidget(groupBox_2);


        horizontalLayout_4->addWidget(widget);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_5 = new QHBoxLayout(groupBox);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        tbl_meat = new QTableWidget(groupBox);
        if (tbl_meat->columnCount() < 2)
            tbl_meat->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tbl_meat->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tbl_meat->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tbl_meat->setObjectName(QString::fromUtf8("tbl_meat"));

        horizontalLayout_5->addWidget(tbl_meat);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tbl_story = new QTableWidget(tab_2);
        if (tbl_story->columnCount() < 3)
            tbl_story->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tbl_story->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tbl_story->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tbl_story->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        tbl_story->setObjectName(QString::fromUtf8("tbl_story"));
        tbl_story->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tbl_story->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(tbl_story);

        txt_storyidea = new QTextEdit(tab_2);
        txt_storyidea->setObjectName(QString::fromUtf8("txt_storyidea"));

        verticalLayout_2->addWidget(txt_storyidea);

        webvotedown = new QPushButton(tab_2);
        webvotedown->setObjectName(QString::fromUtf8("webvotedown"));

        verticalLayout_2->addWidget(webvotedown);

        webvoteup = new QPushButton(tab_2);
        webvoteup->setObjectName(QString::fromUtf8("webvoteup"));

        verticalLayout_2->addWidget(webvoteup);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_7 = new QGridLayout(tab_3);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        pictureInspire = new QPushButton(tab_3);
        pictureInspire->setObjectName(QString::fromUtf8("pictureInspire"));

        gridLayout_7->addWidget(pictureInspire, 2, 0, 1, 1);

        pictureRandom = new QPushButton(tab_3);
        pictureRandom->setObjectName(QString::fromUtf8("pictureRandom"));

        gridLayout_7->addWidget(pictureRandom, 2, 1, 1, 1);

        pictureVoteUp = new QPushButton(tab_3);
        pictureVoteUp->setObjectName(QString::fromUtf8("pictureVoteUp"));

        gridLayout_7->addWidget(pictureVoteUp, 1, 0, 1, 2);

        pictureUpload = new QPushButton(tab_3);
        pictureUpload->setObjectName(QString::fromUtf8("pictureUpload"));

        gridLayout_7->addWidget(pictureUpload, 2, 2, 1, 1);

        pictureVoteDown = new QPushButton(tab_3);
        pictureVoteDown->setObjectName(QString::fromUtf8("pictureVoteDown"));

        gridLayout_7->addWidget(pictureVoteDown, 1, 2, 1, 1);

        lbl_pic = new QLabel(tab_3);
        lbl_pic->setObjectName(QString::fromUtf8("lbl_pic"));

        gridLayout_7->addWidget(lbl_pic, 0, 0, 1, 3);

        tabWidget->addTab(tab_3, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        gridLayout_10 = new QGridLayout(tab_9);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        pushButton = new QPushButton(tab_9);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_10->addWidget(pushButton, 2, 0, 1, 1);

        tableWidget_5 = new QTableWidget(tab_9);
        if (tableWidget_5->columnCount() < 3)
            tableWidget_5->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        tableWidget_5->setObjectName(QString::fromUtf8("tableWidget_5"));

        gridLayout_10->addWidget(tableWidget_5, 1, 0, 1, 1);

        tabWidget->addTab(tab_9, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        verticalLayout_3 = new QVBoxLayout(tab_7);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_6 = new QLabel(tab_7);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_6);

        tabWidget->addTab(tab_7, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_4 = new QVBoxLayout(tab_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        widget_4 = new QWidget(tab_4);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_6 = new QHBoxLayout(widget_4);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        label_7 = new QLabel(widget_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(41, -1, -1, -1);

        horizontalLayout_6->addLayout(horizontalLayout_10);

        label_8 = new QLabel(widget_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_6->addWidget(label_8);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_4->addWidget(widget_4);

        widget_5 = new QWidget(tab_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_7 = new QHBoxLayout(widget_5);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        label_10 = new QLabel(widget_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_7->addWidget(label_10);

        lineEdit_6 = new QLineEdit(widget_5);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_7->addWidget(lineEdit_6);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        verticalLayout_4->addWidget(widget_5);

        widget_6 = new QWidget(tab_4);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_8 = new QHBoxLayout(widget_6);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        label_9 = new QLabel(widget_6);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(4, -1, -1, -1);

        horizontalLayout_8->addLayout(horizontalLayout_11);

        lineEdit_5 = new QLineEdit(widget_6);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_8->addWidget(lineEdit_5);

        label_12 = new QLabel(widget_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_8->addWidget(label_12);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        verticalLayout_4->addWidget(widget_6);

        widget_7 = new QWidget(tab_4);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_9 = new QHBoxLayout(widget_7);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);

        pushButton_2 = new QPushButton(widget_7);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_9->addWidget(pushButton_2);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);


        verticalLayout_4->addWidget(widget_7);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_4, QString());

        horizontalLayout_4->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1434, 26));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionExit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Estimated Time for Meating", nullptr));
        hadsome->setText(QCoreApplication::translate("MainWindow", "HadSome Button", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Ideas", nullptr));
        edit->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Estimated Animals Saved", nullptr));
        save->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Title", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Estimated People Saved", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Notes On Idea", nullptr));
        publish->setText(QCoreApplication::translate("MainWindow", "Publish", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Your Entry's", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tbl_meat->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tbl_meat->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "meat used", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Your Log", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tbl_story->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Date Added", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tbl_story->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "author", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tbl_story->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "votes", nullptr));
        webvotedown->setText(QCoreApplication::translate("MainWindow", "VoteDown", nullptr));
        webvoteup->setText(QCoreApplication::translate("MainWindow", "VoteUp", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "WebStories", nullptr));
        pictureInspire->setText(QCoreApplication::translate("MainWindow", "Inspire", nullptr));
        pictureRandom->setText(QCoreApplication::translate("MainWindow", "Random", nullptr));
        pictureVoteUp->setText(QCoreApplication::translate("MainWindow", "VoteUp", nullptr));
        pictureUpload->setText(QCoreApplication::translate("MainWindow", "Upload", nullptr));
        pictureVoteDown->setText(QCoreApplication::translate("MainWindow", "VoteDown", nullptr));
        lbl_pic->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Pictures", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "update", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_5->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_5->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_5->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Entry", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QCoreApplication::translate("MainWindow", "News", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "i can do ths page later its an app about sharing ideas about curbing meat consumption using \n"
"recipes and pictures about other food ideas", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QCoreApplication::translate("MainWindow", "About", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "skipped", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "times\n"
"ammount", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "timer duration", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "serving size", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "lbs", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "save", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Settings / stats", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
