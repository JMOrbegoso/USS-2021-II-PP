#include "editarlotegui.h"
#include "ui_editarlotegui.h"

editarLoteGUI::editarLoteGUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editarLoteGUI)
{
    ui->setupUi(this);
}

editarLoteGUI::~editarLoteGUI()
{
    delete ui;
}

void editarLoteGUI::on_cmdCancelarLote_clicked()
{
    this->close();
}
