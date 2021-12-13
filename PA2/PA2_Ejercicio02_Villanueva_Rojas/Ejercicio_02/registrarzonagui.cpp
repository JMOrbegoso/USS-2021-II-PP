#include "registrarzonagui.h"
#include "ui_registrarzonagui.h"

registrarZonaGui::registrarZonaGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarZonaGui)
{
    ui->setupUi(this);
}

registrarZonaGui::~registrarZonaGui()
{
    delete ui;
}


void registrarZonaGui::on_btnCancel_clicked()
{
    this->close();
}

void registrarZonaGui::on_btnRegis_clicked()
{
    //Registrar zona
}
