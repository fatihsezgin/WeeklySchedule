/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *aaWidget;
    QHBoxLayout *weekNumberHori;
    QLabel *label_8;
    QSpinBox *spinWeekNumber;
    QPushButton *BtAddTask;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *firstGroup;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea1;
    QWidget *scrollContents1;
    QGridLayout *gridLayout_2;
    QVBoxLayout *firstVbox;
    QLabel *firstDay;
    QGroupBox *secondGroup;
    QGridLayout *gridLayout_15;
    QScrollArea *scrollArea2;
    QWidget *scrollContents2;
    QGridLayout *gridLayout_16;
    QVBoxLayout *secondVbox;
    QLabel *secondDay;
    QGroupBox *thirdGroup;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea3;
    QWidget *scrollContents3;
    QGridLayout *gridLayout_4;
    QVBoxLayout *thirdVbox;
    QLabel *thirdDay;
    QGroupBox *fourthGroup;
    QGridLayout *gridLayout_5;
    QLabel *fourthDay;
    QScrollArea *scrollArea4;
    QWidget *scrollContents4;
    QGridLayout *gridLayout_6;
    QVBoxLayout *fourthVbox;
    QGroupBox *fifthGroup;
    QGridLayout *gridLayout_13;
    QScrollArea *scrollArea5;
    QWidget *scrollContents5;
    QGridLayout *gridLayout_14;
    QVBoxLayout *fifthVbox;
    QLabel *fifthDay;
    QGroupBox *sixthGroup;
    QGridLayout *gridLayout_9;
    QScrollArea *scrollArea6;
    QWidget *scrollContents6;
    QGridLayout *gridLayout_10;
    QVBoxLayout *sixthVbox;
    QLabel *sixthDay;
    QGroupBox *seventhGroup;
    QGridLayout *gridLayout_7;
    QScrollArea *scrollArea7;
    QWidget *scrollContents7;
    QGridLayout *gridLayout_8;
    QVBoxLayout *seventhVbox;
    QLabel *seventhDay;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1086, 712);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        aaWidget = new QWidget(centralwidget);
        aaWidget->setObjectName(QString::fromUtf8("aaWidget"));
        aaWidget->setGeometry(QRect(440, 20, 156, 28));
        weekNumberHori = new QHBoxLayout(aaWidget);
        weekNumberHori->setObjectName(QString::fromUtf8("weekNumberHori"));
        weekNumberHori->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(aaWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        weekNumberHori->addWidget(label_8);

        spinWeekNumber = new QSpinBox(aaWidget);
        spinWeekNumber->setObjectName(QString::fromUtf8("spinWeekNumber"));
        spinWeekNumber->setMinimum(0);
        spinWeekNumber->setMaximum(54);

        weekNumberHori->addWidget(spinWeekNumber);

        BtAddTask = new QPushButton(centralwidget);
        BtAddTask->setObjectName(QString::fromUtf8("BtAddTask"));
        BtAddTask->setGeometry(QRect(960, 420, 89, 25));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 70, 1031, 333));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        firstGroup = new QGroupBox(layoutWidget);
        firstGroup->setObjectName(QString::fromUtf8("firstGroup"));
        gridLayout = new QGridLayout(firstGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea1 = new QScrollArea(firstGroup);
        scrollArea1->setObjectName(QString::fromUtf8("scrollArea1"));
        scrollArea1->setWidgetResizable(true);
        scrollContents1 = new QWidget();
        scrollContents1->setObjectName(QString::fromUtf8("scrollContents1"));
        scrollContents1->setGeometry(QRect(0, 0, 116, 262));
        gridLayout_2 = new QGridLayout(scrollContents1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        firstVbox = new QVBoxLayout();
        firstVbox->setSpacing(1);
        firstVbox->setObjectName(QString::fromUtf8("firstVbox"));

        gridLayout_2->addLayout(firstVbox, 0, 1, 1, 1);

        scrollArea1->setWidget(scrollContents1);

        gridLayout->addWidget(scrollArea1, 2, 0, 1, 1);

        firstDay = new QLabel(firstGroup);
        firstDay->setObjectName(QString::fromUtf8("firstDay"));

        gridLayout->addWidget(firstDay, 1, 0, 1, 1);


        horizontalLayout->addWidget(firstGroup);

        secondGroup = new QGroupBox(layoutWidget);
        secondGroup->setObjectName(QString::fromUtf8("secondGroup"));
        gridLayout_15 = new QGridLayout(secondGroup);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        scrollArea2 = new QScrollArea(secondGroup);
        scrollArea2->setObjectName(QString::fromUtf8("scrollArea2"));
        scrollArea2->setWidgetResizable(true);
        scrollContents2 = new QWidget();
        scrollContents2->setObjectName(QString::fromUtf8("scrollContents2"));
        scrollContents2->setGeometry(QRect(0, 0, 116, 262));
        gridLayout_16 = new QGridLayout(scrollContents2);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        secondVbox = new QVBoxLayout();
        secondVbox->setSpacing(1);
        secondVbox->setObjectName(QString::fromUtf8("secondVbox"));

        gridLayout_16->addLayout(secondVbox, 0, 0, 1, 1);

        scrollArea2->setWidget(scrollContents2);

        gridLayout_15->addWidget(scrollArea2, 1, 0, 1, 1);

        secondDay = new QLabel(secondGroup);
        secondDay->setObjectName(QString::fromUtf8("secondDay"));

        gridLayout_15->addWidget(secondDay, 0, 0, 1, 1);


        horizontalLayout->addWidget(secondGroup);

        thirdGroup = new QGroupBox(layoutWidget);
        thirdGroup->setObjectName(QString::fromUtf8("thirdGroup"));
        gridLayout_3 = new QGridLayout(thirdGroup);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        scrollArea3 = new QScrollArea(thirdGroup);
        scrollArea3->setObjectName(QString::fromUtf8("scrollArea3"));
        scrollArea3->setWidgetResizable(true);
        scrollContents3 = new QWidget();
        scrollContents3->setObjectName(QString::fromUtf8("scrollContents3"));
        scrollContents3->setGeometry(QRect(0, 0, 116, 262));
        gridLayout_4 = new QGridLayout(scrollContents3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        thirdVbox = new QVBoxLayout();
        thirdVbox->setSpacing(1);
        thirdVbox->setObjectName(QString::fromUtf8("thirdVbox"));

        gridLayout_4->addLayout(thirdVbox, 0, 0, 1, 1);

        scrollArea3->setWidget(scrollContents3);

        gridLayout_3->addWidget(scrollArea3, 1, 0, 1, 1);

        thirdDay = new QLabel(thirdGroup);
        thirdDay->setObjectName(QString::fromUtf8("thirdDay"));

        gridLayout_3->addWidget(thirdDay, 0, 0, 1, 1);


        horizontalLayout->addWidget(thirdGroup);

        fourthGroup = new QGroupBox(layoutWidget);
        fourthGroup->setObjectName(QString::fromUtf8("fourthGroup"));
        gridLayout_5 = new QGridLayout(fourthGroup);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        fourthDay = new QLabel(fourthGroup);
        fourthDay->setObjectName(QString::fromUtf8("fourthDay"));

        gridLayout_5->addWidget(fourthDay, 1, 0, 1, 1);

        scrollArea4 = new QScrollArea(fourthGroup);
        scrollArea4->setObjectName(QString::fromUtf8("scrollArea4"));
        scrollArea4->setWidgetResizable(true);
        scrollContents4 = new QWidget();
        scrollContents4->setObjectName(QString::fromUtf8("scrollContents4"));
        scrollContents4->setGeometry(QRect(0, 0, 115, 262));
        gridLayout_6 = new QGridLayout(scrollContents4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        fourthVbox = new QVBoxLayout();
        fourthVbox->setSpacing(1);
        fourthVbox->setObjectName(QString::fromUtf8("fourthVbox"));

        gridLayout_6->addLayout(fourthVbox, 0, 0, 1, 1);

        scrollArea4->setWidget(scrollContents4);

        gridLayout_5->addWidget(scrollArea4, 2, 0, 1, 1);


        horizontalLayout->addWidget(fourthGroup);

        fifthGroup = new QGroupBox(layoutWidget);
        fifthGroup->setObjectName(QString::fromUtf8("fifthGroup"));
        gridLayout_13 = new QGridLayout(fifthGroup);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        scrollArea5 = new QScrollArea(fifthGroup);
        scrollArea5->setObjectName(QString::fromUtf8("scrollArea5"));
        scrollArea5->setWidgetResizable(true);
        scrollContents5 = new QWidget();
        scrollContents5->setObjectName(QString::fromUtf8("scrollContents5"));
        scrollContents5->setGeometry(QRect(0, 0, 116, 262));
        gridLayout_14 = new QGridLayout(scrollContents5);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        fifthVbox = new QVBoxLayout();
        fifthVbox->setSpacing(1);
        fifthVbox->setObjectName(QString::fromUtf8("fifthVbox"));

        gridLayout_14->addLayout(fifthVbox, 0, 0, 1, 1);

        scrollArea5->setWidget(scrollContents5);

        gridLayout_13->addWidget(scrollArea5, 1, 0, 1, 1);

        fifthDay = new QLabel(fifthGroup);
        fifthDay->setObjectName(QString::fromUtf8("fifthDay"));

        gridLayout_13->addWidget(fifthDay, 0, 0, 1, 1);


        horizontalLayout->addWidget(fifthGroup);

        sixthGroup = new QGroupBox(layoutWidget);
        sixthGroup->setObjectName(QString::fromUtf8("sixthGroup"));
        gridLayout_9 = new QGridLayout(sixthGroup);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        scrollArea6 = new QScrollArea(sixthGroup);
        scrollArea6->setObjectName(QString::fromUtf8("scrollArea6"));
        scrollArea6->setWidgetResizable(true);
        scrollContents6 = new QWidget();
        scrollContents6->setObjectName(QString::fromUtf8("scrollContents6"));
        scrollContents6->setGeometry(QRect(0, 0, 116, 262));
        gridLayout_10 = new QGridLayout(scrollContents6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        sixthVbox = new QVBoxLayout();
        sixthVbox->setSpacing(1);
        sixthVbox->setObjectName(QString::fromUtf8("sixthVbox"));

        gridLayout_10->addLayout(sixthVbox, 0, 1, 1, 1);

        scrollArea6->setWidget(scrollContents6);

        gridLayout_9->addWidget(scrollArea6, 1, 0, 1, 1);

        sixthDay = new QLabel(sixthGroup);
        sixthDay->setObjectName(QString::fromUtf8("sixthDay"));

        gridLayout_9->addWidget(sixthDay, 0, 0, 1, 1);


        horizontalLayout->addWidget(sixthGroup);

        seventhGroup = new QGroupBox(layoutWidget);
        seventhGroup->setObjectName(QString::fromUtf8("seventhGroup"));
        gridLayout_7 = new QGridLayout(seventhGroup);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        scrollArea7 = new QScrollArea(seventhGroup);
        scrollArea7->setObjectName(QString::fromUtf8("scrollArea7"));
        scrollArea7->setWidgetResizable(true);
        scrollContents7 = new QWidget();
        scrollContents7->setObjectName(QString::fromUtf8("scrollContents7"));
        scrollContents7->setGeometry(QRect(0, 0, 116, 262));
        gridLayout_8 = new QGridLayout(scrollContents7);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        seventhVbox = new QVBoxLayout();
        seventhVbox->setSpacing(1);
        seventhVbox->setObjectName(QString::fromUtf8("seventhVbox"));

        gridLayout_8->addLayout(seventhVbox, 0, 0, 1, 1);

        scrollArea7->setWidget(scrollContents7);

        gridLayout_7->addWidget(scrollArea7, 2, 0, 1, 1);

        seventhDay = new QLabel(seventhGroup);
        seventhDay->setObjectName(QString::fromUtf8("seventhDay"));

        gridLayout_7->addWidget(seventhDay, 1, 0, 1, 1);


        horizontalLayout->addWidget(seventhGroup);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1086, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Hafta Numaras\304\261", nullptr));
        BtAddTask->setText(QCoreApplication::translate("MainWindow", "Add Task", nullptr));
        firstGroup->setTitle(QString());
        firstDay->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        secondGroup->setTitle(QString());
        secondDay->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        thirdGroup->setTitle(QString());
        thirdDay->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        fourthGroup->setTitle(QString());
        fourthDay->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        fifthGroup->setTitle(QString());
        fifthDay->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        sixthGroup->setTitle(QString());
        sixthDay->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        seventhGroup->setTitle(QString());
        seventhDay->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
