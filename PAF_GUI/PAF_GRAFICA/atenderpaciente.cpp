#include "atenderpaciente.h"
#include "ui_atenderpaciente.h"

atenderPaciente::atenderPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::atenderPaciente)
{
    ui->setupUi(this);
}

atenderPaciente::~atenderPaciente()
{
    delete ui;
}
