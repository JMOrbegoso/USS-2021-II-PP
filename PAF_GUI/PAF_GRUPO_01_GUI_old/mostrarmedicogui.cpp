#include "mostrarmedicogui.h"
#include "ui_mostrarmedicogui.h"

mostrarMedicoGui::mostrarMedicoGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mostrarMedicoGui)
{
    ui->setupUi(this);
}

mostrarMedicoGui::~mostrarMedicoGui()
{
    delete ui;
}
