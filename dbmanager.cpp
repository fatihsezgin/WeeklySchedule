#include <dbmanager.h>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QDebug>
#include <QDir>


DbManager::DbManager()
{
    databasePath= QDir::currentPath()+"/myDb.db";
    qDebug() << " mypath" << databasePath ;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(databasePath);
    if(!db.open()){
        qDebug() << "Error: connection with database fail";
     }
     else
     {
        qDebug() << "Database: connection ok";
    }
}

DbManager::~DbManager()
{

}

bool DbManager::isOpen() const{
    return db.isOpen();
}

bool DbManager::createTable() const
{
    bool success = false;

    QSqlQuery query(db);
    query.prepare("CREATE TABLE tasks  (taskID	INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT, SelectedDate	TEXT,Topic	TEXT, Details	TEXT,Status	TEXT );");
    if(!query.exec()){
        qDebug() << "Couldn't create table 'tasks': one might already exists.";
        success = true;
    }

    return success;


}

bool DbManager::open()
{
    if(!db.isOpen()){
        db.open();
    }
    return db.open();
}

bool DbManager::addTask(QString selectedDate, QString topic, QString details, QString status)
{
    QSqlQuery query(db);
    if(db.isOpen()){
        query.prepare("Insert into tasks(SELECTEDDATE,TOPIC,DETAILS,STATUS) values (:selectedDate,:topic,:details,:status)");
        query.bindValue(":selectedDate",selectedDate);
        query.bindValue(":topic", topic);
        query.bindValue(":details",details);
        query.bindValue(":status",status);
        return query.exec();
    }else{
        return false;
    }

}

bool DbManager::updateTask(QString selectedDate, QString topic, QString details, QString status,int taskID)
{
    QSqlQuery query(db);

    if(db.isOpen()){
        query.prepare("Update tasks  set SelectedDate=:selectedDate,Topic=:topic,Details=:details,Status=:status where taskID=:taskID");
        query.bindValue(":selectedDate",selectedDate);
        query.bindValue(":topic", topic);
        query.bindValue(":details",details);
        query.bindValue(":status",status);
        query.bindValue(":taskID",taskID);
        return query.exec();
    }else{
        return false;
    }
}

QList<QString> DbManager::getTasks(int taskID)
{
    QList<QString> list;
    QSqlQuery query(db);
    qDebug()<< db.open() << "db status";
    if(db.isOpen()){
        query.prepare("Select SelectedDate, Topic, Details, Status from tasks where taskID=:taskID");
        query.bindValue(":taskID",taskID);
        qDebug() << query.exec();
        while(query.next()){
            list.append(query.value(0).toString());
            list.append(query.value(1).toString());
            list.append(query.value(2).toString());
            list.append(query.value(3).toString());
        }
    }
    return list;
}




