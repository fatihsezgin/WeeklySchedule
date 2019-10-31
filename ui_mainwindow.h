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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *firstHorizontal;
    QLabel *firstDay;
    QHBoxLayout *secondHorizontal;
    QLabel *secondDay;
    QHBoxLayout *thirdHorizontal;
    QLabel *thirdDay;
    QHBoxLayout *fourthHorizontal;
    QLabel *fourthDay;
    QHBoxLayout *fifthHorizontal;
    QLabel *fifthDay;
    QHBoxLayout *sixthHorizontal;
    QLabel *sixthDay;
    QHBoxLayout *seventhHorizontal;
    QLabel *seventhDay;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QSpinBox *spinWeekNumber;
    QPushButton *BtAddTask;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(839, 556);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 40, 651, 321));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        firstHorizontal = new QHBoxLayout();
        firstHorizontal->setObjectName(QString::fromUtf8("firstHorizontal"));
        firstDay = new QLabel(horizontalLayoutWidget);
        firstDay->setObjectName(QString::fromUtf8("firstDay"));

        firstHorizontal->addWidget(firstDay);


        horizontalLayout->addLayout(firstHorizontal);

        secondHorizontal = new QHBoxLayout();
        secondHorizontal->setObjectName(QString::fromUtf8("secondHorizontal"));
        secondDay = new QLabel(horizontalLayoutWidget);
        secondDay->setObjectName(QString::fromUtf8("secondDay"));

        secondHorizontal->addWidget(secondDay);


        horizontalLayout->addLayout(secondHorizontal);

        thirdHorizontal = new QHBoxLayout();
        thirdHorizontal->setObjectName(QString::fromUtf8("thirdHorizontal"));
        thirdDay = new QLabel(horizontalLayoutWidget);
        thirdDay->setObjectName(QString::fromUtf8("thirdDay"));

        thirdHorizontal->addWidget(thirdDay);


        horizontalLayout->addLayout(thirdHorizontal);

        fourthHorizontal = new QHBoxLayout();
        fourthHorizontal->setObjectName(QString::fromUtf8("fourthHorizontal"));
        fourthDay = new QLabel(horizontalLayoutWidget);
        fourthDay->setObjectName(QString::fromUtf8("fourthDay"));

        fourthHorizontal->addWidget(fourthDay);


        horizontalLayout->addLayout(fourthHorizontal);

        fifthHorizontal = new QHBoxLayout();
        fifthHorizontal->setObjectName(QString::fromUtf8("fifthHorizontal"));
        fifthDay = new QLabel(horizontalLayoutWidget);
        fifthDay->setObjectName(QString::fromUtf8("fifthDay"));

        fifthHorizontal->addWidget(fifthDay);


        horizontalLayout->addLayout(fifthHorizontal);

        sixthHorizontal = new QHBoxLayout();
        sixthHorizontal->setObjectName(QString::fromUtf8("sixthHorizontal"));
        sixthDay = new QLabel(horizontalLayoutWidget);
        sixthDay->setObjectName(QString::fromUtf8("sixthDay"));

        sixthHorizontal->addWidget(sixthDay);


        horizontalLayout->addLayout(sixthHorizontal);

        seventhHorizontal = new QHBoxLayout();
        seventhHorizontal->setObjectName(QString::fromUtf8("seventhHorizontal"));
        seventhDay = new QLabel(horizontalLayoutWidget);
        seventhDay->setObjectName(QString::fromUtf8("seventhDay"));

        seventhHorizontal->addWidget(seventhDay);


        horizontalLayout->addLayout(seventhHorizontal);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 10, 156, 28));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_9->addWidget(label_8);

        spinWeekNumber = new QSpinBox(layoutWidget);
        spinWeekNumber->setObjectName(QString::fromUtf8("spinWeekNumber"));
        spinWeekNumber->setMinimum(0);
        spinWeekNumber->setMaximum(54);

        horizontalLayout_9->addWidget(spinWeekNumber);

        BtAddTask = new QPushButton(centralwidget);
        BtAddTask->setObjectName(QString::fromUtf8("BtAddTask"));
        BtAddTask->setGeometry(QRect(720, 40, 89, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 839, 22));
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
        firstDay->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        secondDay->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        thirdDay->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        fourthDay->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        fifthDay->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        sixthDay->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        seventhDay->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Hafta Numaras\304\261", nullptr));
        BtAddTask->setText(QCoreApplication::translate("MainWindow", "Add Task", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
