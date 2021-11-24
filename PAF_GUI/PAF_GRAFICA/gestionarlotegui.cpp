#include "gestionarlotegui.h"
#include "ui_gestionarlotegui.h"

gestionarLoteGui::gestionarLoteGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarLoteGui)
{
    ui->setupUi(this);
}

gestionarLoteGui::~gestionarLoteGui()
{
    delete ui;
}
