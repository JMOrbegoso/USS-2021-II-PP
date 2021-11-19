#include "mostrarestadoslocalesgui.h"
#include "ui_mostrarestadoslocalesgui.h"

mostrarEstadosLocalesGUI::mostrarEstadosLocalesGUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mostrarEstadosLocalesGUI)
{
    ui->setupUi(this);
}

mostrarEstadosLocalesGUI::~mostrarEstadosLocalesGUI()
{
    delete ui;
}
