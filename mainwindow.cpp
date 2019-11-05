#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_addtaskdialog.h"
#include "addtaskdialog.h"
#include "dbmanager.h"


#include <QtSql>
#include <QDate>
#include <QDir>
#include <QFileInfo>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{

    DbManager db;
    db.createTable();

    ui->setupUi(this);

    /*
    *  @brief  currentDate is the day instance for the system current date.
    *
    */

    //QDate currentDate = QDate::fromString("2019-10-17","yyyy-MM-dd");
    QDate currentDate = QDate::currentDate();
    qDebug() <<"CurrentDate "<<currentDate;
    int dayofWeek = currentDate.dayOfWeek();
    int day = currentDate.day();
    monday = FindTheFirstDayOfWeekk(currentDate,dayofWeek,day);
    ui->spinWeekNumber->setValue(monday.weekNumber());

    /*
    *@brief labels is a list of QLabel
    *
    */
    labels.append(ui->firstDay);
    labels.append(ui->secondDay);
    labels.append(ui->thirdDay);
    labels.append(ui->fourthDay);
    labels.append(ui->fifthDay);
    labels.append(ui->sixthDay);
    labels.append(ui->seventhDay);
    changeTheLabels();

    qDebug() <<"after change labels week number" << monday.weekNumber();
    qDebug() << "monday "<<monday.toString();

}

    /*
    *@brief Destructor
    *
    */
MainWindow::~MainWindow()
{
    delete ui;
}


QDate MainWindow::FindTheFirstDayOfWeekk(QDate currentDate, int dayofWeek,int day)
{
    //if the day of week is bigger than 1 then it means it's not the Monday
    if(dayofWeek > 1){
        day = day-(dayofWeek-1);//to find the monday

        //if the day is negative then month decreased by one.
        if(day <= 0  ){
            int month = currentDate.month()-1;
            if(month > 0){
                QDate deneme;
                deneme.setDate(currentDate.year(),month,abs(day));
                int aa = deneme.daysInMonth();
                qDebug() << "month "<< month;
                QDate newDate;
                newDate.setDate(currentDate.year(),currentDate.month()-1,aa-(abs(day)));
                qDebug() << "iff"<<newDate;
                return newDate;
            }else{
                QDate deneme;
                monday = monday.addDays(-7);
                deneme.setDate(currentDate.year()-1,12,01);//day is does not matter.
                int aa = deneme.daysInMonth();
                QDate newDate;
                newDate.setDate(deneme.year(),12,aa);
                qDebug() << "year - mount +" <<newDate;

                return newDate;
            }

        }else{
            QDate newDate;
            newDate.setDate(currentDate.year(),currentDate.month(),day);
            qDebug() <<"newDate" << newDate;
            return newDate;

        }
    }else{
        QDate newDate;
        newDate.setDate(currentDate.year(),currentDate.month(),day);
        qDebug() << "newDate" << newDate;
        return newDate;
    }
}

void MainWindow::on_spinWeekNumber_valueChanged(int weekNumber)
{

    //determineMaxWeek();

    qDebug() << "weekNumber before if"<< monday.weekNumber();
    if(weekNumber < monday.weekNumber()){
        monday = monday.addDays(-7);
        changeTheLabels();
    }else if (weekNumber > monday.weekNumber()){
        monday = monday.addDays(7);
        changeTheLabels();
    }
    qDebug()<< "paramweek" << weekNumber;
    qDebug() << "weekNumber after if"<< monday.weekNumber();
    ui->spinWeekNumber->setValue(monday.weekNumber());
    QCoreApplication::processEvents();

}

void MainWindow::changeTheLabels()
{
    for(int i = 0 ; i < labels.size();i++ ){
         labels[i]->setText(monday.toString("dd-MM-yy"));
         monday = monday.addDays(1);
         QCoreApplication::processEvents();
    }
    monday = monday.addDays(-7);
}

void MainWindow::determineMaxWeek()
{
    //Configuring the max week number
     qDebug() << "--------------------------------------------------";
     if(monday.daysInYear()%7 == 1){
         ui->spinWeekNumber->setRange(0,53);
         qDebug() << "finding week number of year if";
     }else{

         ui->spinWeekNumber->setRange(0,54);
         qDebug() << "finding week number of year else";
     }
}

void MainWindow::on_BtAddTask_clicked()
{

    addTaskDialog addTask;
    addTask.setModal(true);
    addTask.exec();

}

void MainWindow::getTasks()
{
    //monday always keeps the monday...
    QDate tempDate = monday;

    QSqlQuery query;
    //query.prepare("Select ")
}

int MainWindow::getDayofWeek(QDate date)
{
    QDate d (date);
    return d.dayOfWeek();
}


