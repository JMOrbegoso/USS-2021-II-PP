#include "buscarlotegui.h"
#include "ui_buscarlotegui.h"

buscarLoteGUI::buscarLoteGUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buscarLoteGUI)
{
    ui->setupUi(this);
}

buscarLoteGUI::~buscarLoteGUI()
{
    delete ui;
}

void buscarLoteGUI::on_cmdCancelarBusqueda_clicked()
{
    this->close();
}
