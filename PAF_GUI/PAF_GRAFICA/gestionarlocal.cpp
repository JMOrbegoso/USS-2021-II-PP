#include "gestionarlocal.h"
#include "ui_gestionarlocal.h"

gestionarLocal::gestionarLocal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarLocal)
{
    ui->setupUi(this);
}

gestionarLocal::~gestionarLocal()
{
    delete ui;
}
