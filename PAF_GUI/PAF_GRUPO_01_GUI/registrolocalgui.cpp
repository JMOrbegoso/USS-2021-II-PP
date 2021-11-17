#include "registrolocalgui.h"
#include "ui_registrolocalgui.h"

registroLocalGUI::registroLocalGUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registroLocalGUI)
{
    ui->setupUi(this);
}

registroLocalGUI::~registroLocalGUI()
{
    delete ui;
}

void registroLocalGUI::on_cmdCancelarLocal_clicked()
{
    this->close();
}
