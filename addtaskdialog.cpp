#include "addtaskdialog.h"
#include "dbmanager.h"
#include "mainwindow.h"
#include "ui_addtaskdialog.h"

#include <QMessageBox>

addTaskDialog::addTaskDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addTaskDialog)
{
    ui->setupUi(this);

}

addTaskDialog::~addTaskDialog()
{
    delete ui;
}

void addTaskDialog::on_calendarWidget_clicked(const QDate &date)
{
    ui->LineSelectedDate->setText(date.toString("dd-MM-yy"));
    QCoreApplication::processEvents();

}

void addTaskDialog::on_buttonBox_accepted()
{

    bool control = false;
    control = db.addTask(ui->LineSelectedDate->text(),
               ui->LineTopic->text(),ui->PTDetails->toPlainText(),
               ui->ComboStatus->currentText());

    if(control)
        QMessageBox::information(this,tr("Saved to Database"),
                                        tr("The task is successfuly saved"));
    else
        QMessageBox::information(this,tr("Something wrong!!"),
                                        tr("Something went wrong while saving the task."));


    qDebug() <<"accepted";
}
