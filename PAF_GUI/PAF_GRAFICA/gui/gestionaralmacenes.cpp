#include "gestionaralmacenes.h"
#include "ui_gestionaralmacenes.h"

gestionarAlmacenes::gestionarAlmacenes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarAlmacenes)
{
    ui->setupUi(this);
<<<<<<< Updated upstream
    //ui->mostrarLotesQwidget->setColumnWidth();
=======

>>>>>>> Stashed changes
}

gestionarAlmacenes::~gestionarAlmacenes()
{
    delete ui;
}

void gestionarAlmacenes::on_regresarButton_clicked()
{
    this->close();
}


