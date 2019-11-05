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
    if (db.isOpen())
    {
        db.close();
    }
}

bool DbManager::isOpen() const{
    return db.isOpen();
}

bool DbManager::createTable() const
{
    bool success = false;

    QSqlQuery query;
    query.prepare("CREATE TABLE tasks  (taskID	INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT, SelectedDate	TEXT,Topic	TEXT, Details	TEXT,Status	TEXT );");
    if(!query.exec()){
        qDebug() << "Couldn't create table 'tasks': one might already exists.";
        success = true;
    }

    return success;


}
