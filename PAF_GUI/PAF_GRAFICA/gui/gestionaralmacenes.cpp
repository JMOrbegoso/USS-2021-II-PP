#include "gestionaralmacenes.h"
#include "ui_gestionaralmacenes.h"

gestionarAlmacenes::gestionarAlmacenes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarAlmacenes)
{
    ui->setupUi(this);
    //ui->mostrarLotesQwidget->setColumnWidth();
    ui->mostrarLotesTwidget->setColumnWidth(0,80);
    ui->mostrarLotesTwidget->setColumnWidth(1,100);
    ui->mostrarLotesTwidget->setColumnWidth(2,80);
    ui->mostrarLotesTwidget->setColumnWidth(3,90);
    ui->mostrarLotesTwidget->setColumnWidth(4,90);
}

gestionarAlmacenes::~gestionarAlmacenes()
{
    delete ui;
}

void gestionarAlmacenes::on_regresarButton_clicked()
{
    this->close();
}

listaLocalesClass *gestionarAlmacenes::getLocales() const
{
    return locales;
}

void gestionarAlmacenes::setLocales(listaLocalesClass *value)
{
    locales = value;
    //this->setLotes(this->getLotes());
}

listaLotesVacunaClass *gestionarAlmacenes::getLotes() const
{
    return lotes;
}

void gestionarAlmacenes::setLotes(listaLotesVacunaClass *value)
{
    lotes = value;
    this->mostrarLotes(this->getLotes());
}

/*void gestionarAlmacenes::on_editarAlmacenButton_clicked()
{
    editarAlmacen *edit = new editarAlmacen();
    edit->show();
}*/

void gestionarAlmacenes::mostrarLotes(listaLotesVacunaClass *lotes){
    lotes = lotes == NULL ? this->lotes : lotes;

    this->ui->mostrarLotesTwidget->setRowCount(0);

    //loteGeneralClass *aux = lotes->getLote();

    for (int x = 0; x < lotes->getCant(); x++){
        auto codigo = (lotes->getCab()+ x)->getCodigo();
        auto nombre = (lotes->getCab() + x)->getNombre();
        auto cantidad = (lotes->getCab() + x)->getCantidad();
        auto caducidad = (lotes->getCab()+x)->getCaducidad();
        auto estado = (lotes->getCab() + x)->getEstado();
        auto estadoTexto = estado ? "Usado" : "No Usado";

        this->ui->mostrarLotesTwidget->insertRow(x);

        this->ui->mostrarLotesTwidget->setItem(x, 0, new QTableWidgetItem(QString::fromStdString(codigo)));
        this->ui->mostrarLotesTwidget->setItem(x, 1, new QTableWidgetItem(QString::fromStdString(nombre)));
        this->ui->mostrarLotesTwidget->setItem(x, 2, new QTableWidgetItem(QString::fromStdString(to_string(cantidad))));
        this->ui->mostrarLotesTwidget->setItem(x, 3, new QTableWidgetItem(QString::fromStdString(caducidad)));
        this->ui->mostrarLotesTwidget->setItem(x, 4, new QTableWidgetItem(QString::fromStdString((estadoTexto))));
    }
}

void gestionarAlmacenes::listaLotesCombo(){
    for(int x = 0; this->getLocales()->getCant();x++){
        ui->localesCbox->addItem(QString::fromStdString((this->getLocales()->getCab()+x)->getNombreLocal()));
    }
}

void gestionarAlmacenes::on_localesCbox_currentIndexChanged(int index){
    ui->localesCbox->addItem(QString::fromStdString((this->getLocales()->getCab()+index)->getNombreLocal()));
    this->mostrarLotes(this->lotes);
}
