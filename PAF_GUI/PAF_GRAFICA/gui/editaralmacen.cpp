#include "editaralmacen.h"
#include "ui_editaralmacen.h"

editarAlmacen::editarAlmacen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editarAlmacen)
{
    ui->setupUi(this);
}

editarAlmacen::~editarAlmacen()
{
    delete ui;
}

void editarAlmacen::on_cancelarButton_clicked()
{
    this->close();
}

