#include "mostrardetalleslocalenfermeras.h"
#include "ui_mostrardetalleslocalenfermeras.h"

mostrarDetallesLocalEnfermeras::mostrarDetallesLocalEnfermeras(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mostrarDetallesLocalEnfermeras)
{
    ui->setupUi(this);
}

mostrarDetallesLocalEnfermeras::~mostrarDetallesLocalEnfermeras()
{
    delete ui;
}
