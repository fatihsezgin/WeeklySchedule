#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_addtaskdialog.h"
#include "addtaskdialog.h"
#include "dbmanager.h"
#include "updatetask.h"

#include <QtSql>
#include <QDate>
#include <QDir>
#include <QFileInfo>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{


    /*
        * @brief database connection and creating table
        * creatingTable creates the table if not exists,
        * if already exists makes no changes.
    */
    DbManager db;
    db.createTable();

    statusItems << "On Progress" << "Success" << "Delayed";
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

    //getTasks();

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

    layouts.append(ui->firstVbox);
    layouts.append(ui->secondVbox);
    layouts.append(ui->thirdVbox);
    layouts.append(ui->fourthVbox);
    layouts.append(ui->fifthVbox);
    layouts.append(ui->sixthVbox);
    layouts.append(ui->seventhVbox);
    changeTheLabels();

    qDebug() <<"after change labels week number" << monday.weekNumber();
    qDebug() << "monday "<<monday.toString("dd-MM-yy");

}

    /*
    *@brief Destructor
    *
    */
MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_spinWeekNumber_valueChanged(int weekNumber)
{
    clearLayout(layouts);
    if(weekNumber < monday.weekNumber()){
        monday = monday.addDays(-7);
        changeTheLabels();
        getTasks();
    }else if (weekNumber > monday.weekNumber()){
        monday = monday.addDays(7);
        changeTheLabels();
        getTasks();
    }else{
        getTasks();
    }
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



void MainWindow::on_BtAddTask_clicked()
{

    addTaskDialog addTask;
    addTask.setModal(true);
    addTask.exec();
    on_spinWeekNumber_valueChanged(monday.weekNumber());
}

void MainWindow::getTasks()
{
    //monday always keeps the monday...
    QDate tempDate;
    QString topic = " ";
    QString status = " ";
    tempDate.setDate(monday.year(),monday.month(),monday.day());
    qDebug()<<"tempDate format"+tempDate.toString("dd-MM-yy");

    QSqlQuery query(db.db);
    int i = 0;
    while(i < 7){
        query.prepare("Select taskID, topic, status from tasks where SelectedDate= :tempDate");
        query.bindValue(":tempDate",tempDate.toString("dd-MM-yy"));
        query.exec();
        while(query.next()){
            int taskID = query.value(0).toInt();
            topic = query.value(1).toString();
            status =query.value(2).toString();
            createButton(taskID,tempDate,topic,status);
            qDebug() << "taskID" <<taskID << "tempDate = " << tempDate.toString("dd-MM-yy");
        }
        tempDate = tempDate.addDays(1);
        i++;
    }

}

int MainWindow::getDayofWeek(QDate date)
{
    QDate d (date);
    return d.dayOfWeek();
}

void MainWindow::taskButtonPressed()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());

    qDebug()<< button->accessibleName();
     updateTask updateTask(this,button->accessibleName().toInt());
     updateTask.setModal(true);
     updateTask.exec();
     on_spinWeekNumber_valueChanged(monday.weekNumber());


}

void MainWindow::createButton(int taskID, QDate tempDate, QString topic,QString status)
{

    QPushButton *button = new QPushButton();
    button->setMaximumWidth(100);
    QDate buttonDate;
    buttonDate.setDate(tempDate.year(),tempDate.month(),tempDate.day());
    button->setAccessibleName(QString::number(taskID));
    button->setText(topic);

    connect(button,SIGNAL(clicked()),this,SLOT(taskButtonPressed()));
    QColor col;
    QString qss;
    qDebug()  <<"status"<< status << "topic" <<topic;


    switch (statusItems.indexOf(status)) {
     case 0:
            col = QColor(Qt::yellow);
            qss = QString("background-color : %1").arg(col.name());
            button->setStyleSheet(qss);
            break;
       case 1:
            col = QColor(Qt::green);
            qss = QString("background-color : %1").arg(col.name());
            button->setStyleSheet(qss);
        break;
        case 2:
             col = QColor(Qt::gray);
             qss = QString("background-color : %1").arg(col.name());
             button->setStyleSheet(qss);
            break;
    }

    switch (buttonDate.dayOfWeek()) {
    case 1:

        mondaybox = ui->firstVbox ;
        mondaybox->addWidget(button);
        qDebug()<<"Button Accesible Name :"<< button->accessibleName();
        break;
    case 2:

        tuesdaybox = ui->secondVbox;
        tuesdaybox->addWidget(button);
        qDebug()<<"Button Accesible Name :"<< button->accessibleName();
        break;
    case 3:

        wednesdaybox = ui->thirdVbox;
        wednesdaybox->addWidget(button);
        qDebug()<<"Button Accesible Name :"<< button->accessibleName();
        break;
    case 4:

        thursdaybox = ui->fourthVbox;
        thursdaybox->addWidget(button);
        qDebug()<<"Button Accesible Name :"<< button->accessibleName();
        break;
    case 5:

        fridaybox = ui->fifthVbox;
        fridaybox->addWidget(button);
        qDebug()<<"Button Accesible Name :"<< button->accessibleName();
        break;
    case 6:

        saturdaybox= ui->sixthVbox;
        saturdaybox->addWidget(button);
        qDebug()<<"Button Accesible Name :"<< button->accessibleName();
        break;
    case 7:

        sundaybox = ui->seventhVbox;
        sundaybox->addWidget(button);
        qDebug()<<"Button Accesible Name :"<< button->accessibleName();
        break;
    }
    QCoreApplication::processEvents();

}


void MainWindow::clearLayout(QList<QVBoxLayout *> layout)
{
    for(int i = 0; i< layout.size();i++){
        QLayoutItem *child;
        while((child=layout[i]->takeAt(0)) != nullptr){
            delete child->widget();
        }
    }
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
                //qDebug() << "month "<< month;
                QDate newDate;
                newDate.setDate(currentDate.year(),currentDate.month()-1,aa-(abs(day)));
                //qDebug() << "iff"<<newDate;
                return newDate;
            }else{
                QDate deneme;
                monday = monday.addDays(-7);
                deneme.setDate(currentDate.year()-1,12,01);//day is does not matter.
                int aa = deneme.daysInMonth();
                QDate newDate;
                newDate.setDate(deneme.year(),12,aa);
                //qDebug() << "year - mount +" <<newDate;

                return newDate;
            }

        }else{
            QDate newDate;
            newDate.setDate(currentDate.year(),currentDate.month(),day);
            //qDebug() <<"newDate" << newDate;
            return newDate;

        }
    }else{
        QDate newDate;
        newDate.setDate(currentDate.year(),currentDate.month(),day);
        //qDebug() << "newDate" << newDate;
        return newDate;
    }
}

