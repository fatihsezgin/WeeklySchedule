#include "updatetask.h"
#include "ui_updatetask.h"

#include <QMessageBox>

updateTask::updateTask(QWidget *parent,int taskID) :
    QDialog(parent),
    ui(new Ui::updateTask)
{
    taskid= taskID;
    ui->setupUi(this);
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
