#include "registrarlotegui.h"
#include "ui_registrarlotegui.h"

registrarLoteGUI::registrarLoteGUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarLoteGUI)
{
    ui->setupUi(this);
}

registrarLoteGUI::~registrarLoteGUI()
{
    delete ui;
}

void registrarLoteGUI::on_cmdCancelarLote_clicked()
{
    this->close();
}
