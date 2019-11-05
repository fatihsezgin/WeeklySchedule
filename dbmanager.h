#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>

class DbManager
{
public:

    DbManager();

    ~DbManager();

    bool isOpen() const;
    bool createTable() const;

private:
    QSqlDatabase db;
    QString databasePath;
};

#endif // DBMANAGER_H
