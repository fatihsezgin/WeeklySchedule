/********************************************************************************
** Form generated from reading UI file 'popup.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUP_H
#define UI_POPUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_popup
{
public:
    QLabel *label;

    void setupUi(QDialog *popup)
    {
        if (popup->objectName().isEmpty())
            popup->setObjectName(QString::fromUtf8("popup"));
        popup->resize(391, 77);
        label = new QLabel(popup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 341, 20));

        retranslateUi(popup);

        QMetaObject::connectSlotsByName(popup);
    } // setupUi

    void retranslateUi(QDialog *popup)
    {
        popup->setWindowTitle(QCoreApplication::translate("popup", "Remainder", nullptr));
        label->setText(QCoreApplication::translate("popup", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class popup: public Ui_popup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUP_H
