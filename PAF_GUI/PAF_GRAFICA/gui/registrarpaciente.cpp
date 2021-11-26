#include "registrarpaciente.h"
#include "ui_registrarpaciente.h"

registrarPaciente::registrarPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarPaciente)
{
    ui->setupUi(this);
}

registrarPaciente::~registrarPaciente()
{
    delete ui;
}

void registrarPaciente::on_regresarCmd_clicked()
{
    this->close();
}
