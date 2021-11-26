#include "gestionarlocal.h"
#include "ui_gestionarlocal.h"

gestionarLocal::gestionarLocal(listaLocalesClass* locales, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarLocal)
{
    ui->setupUi(this);

    for (int x = 0; x < locales->getCant(); x++) {
        string direccion = (*(locales->getLocal() + x)).getDireccionLocal();
        QString qDireccion = QString::fromStdString(direccion);

        QListWidgetItem *item = new QListWidgetItem;
        item->setText(qDireccion);
        ui->listaLocalesCv->addItem(item);
    }
}

gestionarLocal::~gestionarLocal()
{
    delete ui;
}
