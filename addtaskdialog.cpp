#include "addtaskdialog.h"
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

/*void addTaskDialog::on_calendarWidget_clicked(const QDate &date)
{

}*/
