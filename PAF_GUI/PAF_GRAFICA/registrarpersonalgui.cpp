#include "registrarpersonalgui.h"
#include "ui_registrarpersonalgui.h"
#include "personalclass.h"

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

void registrarPersonalGui::on_cmdRegMed_clicked()
{
    personalClass *pers = new personalClass();
    //pers->setNombre(ui->txtNomPers);
}
