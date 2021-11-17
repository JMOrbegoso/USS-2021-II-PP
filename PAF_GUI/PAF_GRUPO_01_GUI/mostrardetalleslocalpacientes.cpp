#include "mostrardetalleslocalpacientes.h"
#include "ui_mostrardetalleslocalpacientes.h"

mostrarDetallesLocalPacientes::mostrarDetallesLocalPacientes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mostrarDetallesLocalPacientes)
{
    ui->setupUi(this);
}

mostrarDetallesLocalPacientes::~mostrarDetallesLocalPacientes()
{
    delete ui;
}
