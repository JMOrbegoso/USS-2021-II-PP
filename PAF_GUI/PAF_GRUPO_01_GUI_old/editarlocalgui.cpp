#include "editarlocalgui.h"
#include "ui_editarlocalgui.h"

editarLocalGUI::editarLocalGUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editarLocalGUI)
{
    ui->setupUi(this);
}

editarLocalGUI::~editarLocalGUI()
{
    delete ui;
}

void editarLocalGUI::on_cmdCancelarLocal_clicked()
{
    this->close();
}
