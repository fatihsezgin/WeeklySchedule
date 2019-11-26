#include "updatetask.h"
#include "ui_updatetask.h"

#include <QMessageBox>

updateTask::updateTask(QWidget *parent,int taskID) :
    QDialog(parent),
    ui(new Ui::updateTask)
{
    taskid= taskID;
    QList<QString> list;
    list = db.getTasks(taskID);

    ui->setupUi(this);
    ui->LineSelectedDate->setText(list[0]);
    ui->LineTopic->setText(list[1]);
    ui->PTDetails->setPlainText(list[2]);
    ui->ComboStatus->setCurrentText(list[3]);
    QCoreApplication::processEvents();
}


updateTask::~updateTask()
{
    delete ui;
}

void updateTask::on_calendarWidget_clicked(const QDate &date)
{
    ui->LineSelectedDate->setText(date.toString("dd-MM-yy"));
    QCoreApplication::processEvents();

}


void updateTask::on_buttonBox_accepted()
{

    bool control = false;
    control = db.updateTask(ui->LineSelectedDate->text(),
               ui->LineTopic->text(),ui->PTDetails->toPlainText(),
               ui->ComboStatus->currentText(),taskid);

    if(control)
        QMessageBox::information(this,tr("Saved to Database"),
                                        tr("The task is successfuly saved"));
    else
        QMessageBox::information(this,tr("Something wrong!!"),
                                        tr("Something went wrong while saving the task."));


    qDebug() <<"accepted";

    close();
}

void updateTask::on_buttonBox_rejected()
{
    close();
}
