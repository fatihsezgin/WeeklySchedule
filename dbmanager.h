#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <QDate>
class DbManager
{
public:

    DbManager();

    ~DbManager();

    bool isOpen() const;
    bool createTable() const;
    bool open();
    bool addTask(QString selectedDate,QString topic,QString details, QString status );
    bool updateTask(QString selectedDate,QString topic,QString details, QString status,int taskID);
    QList<QString> getTasks(int taskID);
    QString getTaskTopic(QDate currentDay);
    QSqlDatabase db;

private:

    QString databasePath;
};

#endif // DBMANAGER_H
