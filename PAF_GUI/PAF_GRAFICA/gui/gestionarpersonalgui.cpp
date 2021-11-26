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

void gestionarPersonalGui::on_bntVolPers_clicked()
{
    this->close();
}

listaLocalesClass *gestionarPersonalGui::getLocales() const
{
    return locales;
}

void gestionarPersonalGui::setLocales(listaLocalesClass *value)
{
    locales = value;
}
