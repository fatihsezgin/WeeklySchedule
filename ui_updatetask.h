/********************************************************************************
** Form generated from reading UI file 'updatetask.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATETASK_H
#define UI_UPDATETASK_H

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

class Ui_updateTask
{
public:
    QLineEdit *LineTopic;
    QPlainTextEdit *PTDetails;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QCalendarWidget *calendarWidget;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *ComboStatus;
    QLineEdit *LineSelectedDate;

    void setupUi(QDialog *updateTask)
    {
        if (updateTask->objectName().isEmpty())
            updateTask->setObjectName(QString::fromUtf8("updateTask"));
        updateTask->resize(602, 617);
        LineTopic = new QLineEdit(updateTask);
        LineTopic->setObjectName(QString::fromUtf8("LineTopic"));
        LineTopic->setGeometry(QRect(220, 300, 221, 25));
        PTDetails = new QPlainTextEdit(updateTask);
        PTDetails->setObjectName(QString::fromUtf8("PTDetails"));
        PTDetails->setGeometry(QRect(220, 350, 221, 151));
        label = new QLabel(updateTask);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 260, 102, 25));
        buttonBox = new QDialogButtonBox(updateTask);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(210, 560, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        calendarWidget = new QCalendarWidget(updateTask);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(100, 50, 456, 171));
        label_2 = new QLabel(updateTask);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 300, 40, 25));
        label_3 = new QLabel(updateTask);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 390, 51, 51));
        label_4 = new QLabel(updateTask);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(160, 520, 51, 25));
        ComboStatus = new QComboBox(updateTask);
        ComboStatus->addItem(QString());
        ComboStatus->addItem(QString());
        ComboStatus->addItem(QString());
        ComboStatus->setObjectName(QString::fromUtf8("ComboStatus"));
        ComboStatus->setGeometry(QRect(220, 520, 221, 25));
        LineSelectedDate = new QLineEdit(updateTask);
        LineSelectedDate->setObjectName(QString::fromUtf8("LineSelectedDate"));
        LineSelectedDate->setGeometry(QRect(220, 260, 221, 25));

        retranslateUi(updateTask);

        QMetaObject::connectSlotsByName(updateTask);
    } // setupUi

    void retranslateUi(QDialog *updateTask)
    {
        updateTask->setWindowTitle(QCoreApplication::translate("updateTask", "Update Task", nullptr));
        label->setText(QCoreApplication::translate("updateTask", "Selected Date :", nullptr));
        label_2->setText(QCoreApplication::translate("updateTask", "Topic:", nullptr));
        label_3->setText(QCoreApplication::translate("updateTask", "Details:", nullptr));
        label_4->setText(QCoreApplication::translate("updateTask", "Status:", nullptr));
        ComboStatus->setItemText(0, QCoreApplication::translate("updateTask", "On Progress", nullptr));
        ComboStatus->setItemText(1, QCoreApplication::translate("updateTask", "Success", nullptr));
        ComboStatus->setItemText(2, QCoreApplication::translate("updateTask", "Delayed", nullptr));

    } // retranslateUi

};

namespace Ui {
    class updateTask: public Ui_updateTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATETASK_H
