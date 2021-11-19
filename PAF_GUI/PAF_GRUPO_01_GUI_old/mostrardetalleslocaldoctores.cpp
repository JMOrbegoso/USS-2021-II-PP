#include "mostrardetalleslocaldoctores.h"
#include "ui_mostrardetalleslocaldoctores.h"

mostrarDetallesLocalDoctores::mostrarDetallesLocalDoctores(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mostrarDetallesLocalDoctores)
{
    ui->setupUi(this);
}

mostrarDetallesLocalDoctores::~mostrarDetallesLocalDoctores()
{
    delete ui;
}
