#include "habilitarinhabilitarlocalgui.h"
#include "ui_habilitarinhabilitarlocalgui.h"

habilitarInhabilitarLocalGUI::habilitarInhabilitarLocalGUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::habilitarInhabilitarLocalGUI)
{
    ui->setupUi(this);
}

habilitarInhabilitarLocalGUI::~habilitarInhabilitarLocalGUI()
{
    delete ui;
}

void habilitarInhabilitarLocalGUI::on_cmdCancelar_clicked()
{
    this->close();
}
