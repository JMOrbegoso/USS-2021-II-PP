#include "mostrarfilapacientesgui.h"
#include "ui_mostrarfilapacientesgui.h"

mostrarFilaPacientesGUI::mostrarFilaPacientesGUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mostrarFilaPacientesGUI)
{
    ui->setupUi(this);
}

mostrarFilaPacientesGUI::~mostrarFilaPacientesGUI()
{
    delete ui;
}
