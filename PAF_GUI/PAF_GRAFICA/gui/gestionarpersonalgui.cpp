#include "gestionarpersonalgui.h"
#include "ui_gestionarpersonalgui.h"

gestionarPersonalGui::gestionarPersonalGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarPersonalGui)
{
    ui->setupUi(this);
}

gestionarPersonalGui::~gestionarPersonalGui()
{
    delete ui;
}
