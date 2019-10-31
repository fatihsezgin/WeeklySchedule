/********************************************************************************
** Form generated from reading UI file 'addtaskdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASKDIALOG_H
#define UI_ADDTASKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addTaskDialog
{
public:
    QDialogButtonBox *buttonBox;
    QCalendarWidget *calendarWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *LineSelectedDate;
    QLineEdit *LineTopic;
    QPlainTextEdit *PTDetails;
    QComboBox *ComboStatus;
    QLabel *label_4;

    void setupUi(QDialog *addTaskDialog)
    {
        if (addTaskDialog->objectName().isEmpty())
            addTaskDialog->setObjectName(QString::fromUtf8("addTaskDialog"));
        addTaskDialog->resize(515, 599);
        buttonBox = new QDialogButtonBox(addTaskDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(150, 540, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        calendarWidget = new QCalendarWidget(addTaskDialog);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(40, 30, 456, 171));
        label = new QLabel(addTaskDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 240, 102, 25));
        label_2 = new QLabel(addTaskDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 280, 40, 25));
        label_3 = new QLabel(addTaskDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 370, 51, 51));
        LineSelectedDate = new QLineEdit(addTaskDialog);
        LineSelectedDate->setObjectName(QString::fromUtf8("LineSelectedDate"));
        LineSelectedDate->setGeometry(QRect(160, 240, 221, 25));
        LineTopic = new QLineEdit(addTaskDialog);
        LineTopic->setObjectName(QString::fromUtf8("LineTopic"));
        LineTopic->setGeometry(QRect(160, 280, 221, 25));
        PTDetails = new QPlainTextEdit(addTaskDialog);
        PTDetails->setObjectName(QString::fromUtf8("PTDetails"));
        PTDetails->setGeometry(QRect(160, 330, 221, 151));
        ComboStatus = new QComboBox(addTaskDialog);
        ComboStatus->addItem(QString());
        ComboStatus->addItem(QString());
        ComboStatus->addItem(QString());
        ComboStatus->setObjectName(QString::fromUtf8("ComboStatus"));
        ComboStatus->setGeometry(QRect(160, 500, 221, 25));
        label_4 = new QLabel(addTaskDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 500, 51, 25));

        retranslateUi(addTaskDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), addTaskDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addTaskDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(addTaskDialog);
    } // setupUi

    void retranslateUi(QDialog *addTaskDialog)
    {
        addTaskDialog->setWindowTitle(QCoreApplication::translate("addTaskDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addTaskDialog", "Selected Date :", nullptr));
        label_2->setText(QCoreApplication::translate("addTaskDialog", "Topic:", nullptr));
        label_3->setText(QCoreApplication::translate("addTaskDialog", "Details:", nullptr));
        ComboStatus->setItemText(0, QCoreApplication::translate("addTaskDialog", "On Progress", nullptr));
        ComboStatus->setItemText(1, QCoreApplication::translate("addTaskDialog", "Success", nullptr));
        ComboStatus->setItemText(2, QCoreApplication::translate("addTaskDialog", "Delayed", nullptr));

        label_4->setText(QCoreApplication::translate("addTaskDialog", "Status:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addTaskDialog: public Ui_addTaskDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASKDIALOG_H
