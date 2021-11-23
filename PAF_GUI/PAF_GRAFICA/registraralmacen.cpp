#include "registraralmacen.h"
#include "ui_registraralmacen.h"

registrarAlmacen::registrarAlmacen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarAlmacen)
{
    ui->setupUi(this);
}

registrarAlmacen::~registrarAlmacen()
{
    delete ui;
}

void registrarAlmacen::on_cancelarButton_clicked()
{
    this->close();
}


void registrarAlmacen::on_registrarButton_clicked()
{
    this->close();
}

