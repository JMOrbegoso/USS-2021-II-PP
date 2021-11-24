#include "registrarlotegui.h"
#include "ui_registrarlotegui.h"

registrarLoteGui::registrarLoteGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarLoteGui)
{
    ui->setupUi(this);
}

registrarLoteGui::~registrarLoteGui()
{
    delete ui;
}

void registrarLoteGui::on_cancelarButton_clicked()
{
    this->close();
}

void registrarLoteGui::on_registrarButton_clicked()
{
    this->close();
}
