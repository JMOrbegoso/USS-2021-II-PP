#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_cmdGetInto_clicked()
{
    MainWindow *w = new MainWindow();
    w->show();
}

void login::on_cmdClose_clicked()
{
    this->close();
}
