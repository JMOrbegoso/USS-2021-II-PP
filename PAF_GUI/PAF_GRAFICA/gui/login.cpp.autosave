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
    if ( ui->txtUser->text() == "MarioGomez" &&  ui->txtPass->text() == "654321" || ui->txtUser->text() == "Ariana" && ui->txtPass->text() == "123456"){
        this->close();
        vacunatonContraDengueClass *vacunaton = new vacunatonContraDengueClass();
        datosSemillaClass::sembrar(vacunaton);
        MainWindow *w = new MainWindow();
        w->setVacunaDengue(vacunaton);
        w->showMaximized();
    }
    else{
        QMessageBox *msje = new QMessageBox;
        msje->setText("Usuario o contraseña incorrecta");
        msje->exec();
    }
}

void login::on_cmdClose_clicked()
{
    this->close();
}
