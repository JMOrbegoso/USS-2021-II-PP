#include "gestionaratendidos.h"
#include "ui_gestionaratendidos.h"

gestionarAtendidos::gestionarAtendidos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarAtendidos)
{
    ui->setupUi(this);
}

gestionarAtendidos::~gestionarAtendidos()
{
    delete ui;
}

void gestionarAtendidos::on_regresarCmd_clicked()
{
    this->close();
}
