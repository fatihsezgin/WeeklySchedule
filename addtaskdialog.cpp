#include "addtaskdialog.h"
#include "dbmanager.h"
#include "mainwindow.h"
#include "ui_addtaskdialog.h"

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
    qDebug() <<"accepted";
}
