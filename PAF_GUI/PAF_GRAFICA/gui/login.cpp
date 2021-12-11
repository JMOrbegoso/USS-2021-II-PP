#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include <datossemillaclass.h>

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
    vacunatonContraDengueClass *vacunaton = new vacunatonContraDengueClass();
    datosSemillaClass::sembrar(vacunaton);
    MainWindow *w = new MainWindow();
    w->setVacunaDengue(vacunaton);
    w->showMaximized();
}

void login::on_cmdClose_clicked()
{
    this->close();
}
