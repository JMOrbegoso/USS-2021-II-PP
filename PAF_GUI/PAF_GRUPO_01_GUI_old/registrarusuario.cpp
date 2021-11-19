#include "registrarusuario.h"
#include "ui_registrarusuario.h"

registrarUsuario::registrarUsuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarUsuario)
{
    ui->setupUi(this);
}

registrarUsuario::~registrarUsuario()
{
    delete ui;
}
