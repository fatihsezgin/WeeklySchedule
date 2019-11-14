#ifndef UPDATETASK_H
#define UPDATETASK_H

#include "mainwindow.h"
#include <QDialog>
#include <QDebug>
#include <QComboBox>
#include <QLineEdit>
#include <QPlainTextEdit>
#include <QCalendarWidget>
#include <QtSql>

namespace Ui {
class updateTask;
}

class updateTask : public QDialog
{
    Q_OBJECT

public:
    explicit updateTask(QWidget *parent = nullptr, int taskID=1);
    ~updateTask();

private slots:
    void on_calendarWidget_clicked(const QDate &date);
    void on_buttonBox_accepted();



private:
    Ui::updateTask *ui;

    QComboBox ComboStatus;
    QLineEdit LineSelectedDate;
    QLineEdit LineTopic;
    QPlainTextEdit PTDetails;
    QCalendarWidget calendarWidget;
    DbManager db;
    int taskid;
};

#endif // UPDATETASK_H
