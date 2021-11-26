#include "loginsystem.h"
#include "ui_loginsystem.h"
#include <mainwindow.h>
#include "QMessageBox"

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
    if ( ui->txtUsuario->text() == "jaimebravo" &&  ui->txtClave->text() == "123456" ){
        this->close();
        MainWindow *w = new MainWindow();
        w->show();
    }
    else{
        QMessageBox msje;
        msje.setText("Usuario o contraseña incorrecta");
        msje.exec();
    }
}

void loginSystem::on_cmdCerrar_clicked()
{
    this->close();
}



