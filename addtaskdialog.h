#ifndef ADDTASKDIALOG_H
#define ADDTASKDIALOG_H

#include "mainwindow.h"

#include <QDialog>
#include <QDebug>
#include <QComboBox>
#include <QLineEdit>
#include <QPlainTextEdit>
#include <QCalendarWidget>
#include <QtSql>

namespace Ui {
class addTaskDialog;
}

class addTaskDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addTaskDialog(QWidget *parent = nullptr);
    ~addTaskDialog();

private slots:
    void on_calendarWidget_clicked(const QDate &date);

    void on_buttonBox_accepted();

private:
    Ui::addTaskDialog *ui;
    QComboBox ComboStatus;
    QLineEdit LineSelectedDate;
    QLineEdit LineTopic;
    QPlainTextEdit PlainDetails;
    QCalendarWidget calendarWidget;



};

#endif // ADDTASKDIALOG_H
