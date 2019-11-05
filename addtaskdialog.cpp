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


    //DbManager db;

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
    QSqlQuery query;
    if(db.isOpen()){
        query.prepare("Insert into tasks(SELECTEDDATE,TOPIC,DETAILS,STATUS) values (:selectedDate,:topic,:details,:status)");
        query.bindValue(":selectedDate",ui->LineSelectedDate->text());
        query.bindValue(":topic", ui->LineTopic->text());
        query.bindValue(":details",ui->PTDetails->toPlainText());
        query.bindValue(":status",ui->ComboStatus->currentText());

        qDebug() <<ui->LineSelectedDate->text();
        qDebug() <<ui->LineTopic->text();
        qDebug() <<ui->PTDetails->toPlainText();
        qDebug() <<ui->ComboStatus->currentText();
        qDebug()<< query.exec();
        QMessageBox::information(this,tr("Saved to Database"),
                                        tr("The task is successfuly saved"));




    }else{
        qDebug() << "db is not open";
    }

    qDebug() <<"accepted";
}
