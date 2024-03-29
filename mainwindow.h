#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "dbmanager.h"

#include <QMainWindow>
#include <QCalendarWidget>
#include <QDebug>
#include <QLabel>
#include <QSpinBox>
#include <QDate>
#include <QDateEdit>
#include <QVBoxLayout>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    DbManager db;

private slots:

    void on_spinWeekNumber_valueChanged(int weekNumber);
    void changeTheLabels();
    void on_BtAddTask_clicked();
    void getTasks();
    int getDayofWeek(QDate date);
    void createButton(int taskID, QDate tempDate,QString topic,QString status);
    void clearLayout(QList<QVBoxLayout *>);
    void taskButtonPressed();
    void remainderScreen();


private:
    Ui::MainWindow *ui;
    QSpinBox spinWeekNumber;
    QLabel *firstDay;
    QLabel *secondDay;
    QLabel *thirdDay;
    QLabel *fourthDay;
    QLabel *fifthDay;
    QLabel *sixthDay;
    QLabel *seventhDay;
    QDate date;
    QDateEdit dateEdit;
    QList<QLabel *> labels;
    QDate monday;
    QStringList statusItems;
    QDate today;


    QVBoxLayout *mondaybox;
    QVBoxLayout *tuesdaybox;
    QVBoxLayout *wednesdaybox;
    QVBoxLayout *thursdaybox;
    QVBoxLayout *fridaybox;
    QVBoxLayout *saturdaybox;
    QVBoxLayout *sundaybox;

    QList<QVBoxLayout *> layouts;

    int Week;

    QDate FindTheFirstDayOfWeekk(QDate date, int dayOfWeek,int day);




};
#endif // MAINWINDOW_H
