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
