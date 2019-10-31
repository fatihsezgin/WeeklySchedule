#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCalendarWidget>
#include <QDebug>
#include <QLabel>
#include <QSpinBox>
#include <QDate>
#include <QDateEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    /*
            Amacımız databasePath i static yapıp aynı path i addtaskbar.cpp de de
            kullanmak fakat olmuyor bunu furkan abiye sor
            static olan databasePath i non-static ve private slota yazınca çalışıyor.
    */
    //static QString databasePath;

private slots:

    void on_spinWeekNumber_valueChanged(int weekNumber);
    void changeTheLabels();
    void determineMaxWeek();
    void on_BtAddTask_clicked();


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
    QString databasePath;

    int Week;

    QDate FindTheFirstDayOfWeekk(QDate date, int dayOfWeek,int day);
    /*bool createConnection();
    bool createDatabase();*/




};
#endif // MAINWINDOW_H
