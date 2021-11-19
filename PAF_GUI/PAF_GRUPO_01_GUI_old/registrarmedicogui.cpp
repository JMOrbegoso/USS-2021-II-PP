#include "registrarmedicogui.h"
#include "ui_registrarmedicogui.h"

registrarMedicoGui::registrarMedicoGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarMedicoGui)
{
    ui->setupUi(this);
}

registrarMedicoGui::~registrarMedicoGui()
{
    delete ui;
}

void registrarMedicoGui::on_canMedCmd_clicked()
{
    this->close();
}
