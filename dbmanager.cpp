#include <dbmanager.h>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QDebug>


DbManager::DbManager(const QString &path)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(path);
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
