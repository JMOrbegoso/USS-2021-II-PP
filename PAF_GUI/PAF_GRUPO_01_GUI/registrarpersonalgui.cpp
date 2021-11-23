#include "registrarpersonalgui.h"
#include "ui_registrarpersonalgui.h"

registrarPersonalGui::registrarPersonalGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarPersonalGui)
{
    ui->setupUi(this);
}

registrarPersonalGui::~registrarPersonalGui()
{
    delete ui;
}

void registrarPersonalGui::on_cmdCanMed_clicked()
{
    this->close();
}
