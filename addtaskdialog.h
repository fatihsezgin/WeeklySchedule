#ifndef ADDTASKDIALOG_H
#define ADDTASKDIALOG_H

#include <QDialog>

namespace Ui {
class addTaskDialog;
}

class addTaskDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addTaskDialog(QWidget *parent = nullptr);
    ~addTaskDialog();

private slots:
    //void on_calendarWidget_clicked(const QDate &date);

private:
    Ui::addTaskDialog *ui;
};

#endif // ADDTASKDIALOG_H
