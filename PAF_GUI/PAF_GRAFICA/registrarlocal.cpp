#include "registrarlocal.h"
#include "ui_registrarlocal.h"

registrarLocal::registrarLocal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarLocal)
{
    ui->setupUi(this);
}

registrarLocal::~registrarLocal()
{
    delete ui;
}

void registrarLocal::on_cancelarLocalPb_clicked()
{
    this->close();
}

void registrarLocal::on_registrarLocalPb_clicked()
{
    this->close();
}

