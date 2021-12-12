#include "gestionaralmacenes.h"
#include "ui_gestionaralmacenes.h"

gestionarAlmacenes::gestionarAlmacenes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarAlmacenes)
{
    ui->setupUi(this);
}

gestionarAlmacenes::~gestionarAlmacenes()
{
    delete ui;
}

void gestionarAlmacenes::on_regresarButton_clicked()
{
    this->close();
}

/*void gestionarAlmacenes::on_editarAlmacenButton_clicked()
{
    editarAlmacen *edit = new editarAlmacen();
    edit->show();
}*/

