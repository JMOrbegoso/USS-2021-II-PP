#include "loginsystem.h"
#include "ui_loginsystem.h"
#include <mainwindow.h>

loginSystem::loginSystem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginSystem)
{
    ui->setupUi(this);
}

loginSystem::~loginSystem()
{
    delete ui;
}

void loginSystem::on_cmdIngresar_clicked()
{
    mainWindow *mainW = new mainWindow();
    mainW->show();
}

void loginSystem::on_cmdCerrar_clicked()
{
    this->close();
}
