#include "popup.h"
#include "ui_popup.h"

popup::popup(QWidget *parent,QString topic) :
    QDialog(parent),
    ui(new Ui::popup)
{

    ui->setupUi(this);
    ui->label->setText(topic + " is on progress");
}

popup::~popup()
{
    delete ui;
}
