#include "mostrardetalleslocallotes.h"
#include "ui_mostrardetalleslocallotes.h"

mostrarDetallesLocalLotes::mostrarDetallesLocalLotes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mostrarDetallesLocalLotes)
{
    ui->setupUi(this);
}

mostrarDetallesLocalLotes::~mostrarDetallesLocalLotes()
{
    delete ui;
}
