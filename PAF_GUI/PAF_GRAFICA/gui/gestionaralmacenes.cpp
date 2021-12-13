#include "gestionaralmacenes.h"
#include "ui_gestionaralmacenes.h"
#include <QMessageBox>

gestionarAlmacenes::gestionarAlmacenes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarAlmacenes)
{
    ui->setupUi(this);
    this->
    //ui->mostrarLotesQwidget->setColumnWidth();
    ui->mostrarLotesTwidget->setColumnWidth(0,80);
    ui->mostrarLotesTwidget->setColumnWidth(1,100);
    ui->mostrarLotesTwidget->setColumnWidth(2,80);
    ui->mostrarLotesTwidget->setColumnWidth(3,90);
    ui->mostrarLotesTwidget->setColumnWidth(4,90);

    ui->localesTwidget->setColumnWidth(0,80);
    ui->localesTwidget->setColumnWidth(1,100);
    ui->localesTwidget->setColumnWidth(2,80);
    ui->localesTwidget->setColumnWidth(3,90);
    ui->localesTwidget->setColumnWidth(4,90);
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
    this->mostrarLotesLocal(0);
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
    for(int x = 0; x < this->locales->getCant();x++){
        ui->localesCbox->addItem(QString::fromStdString((this->locales->getCab()+x)->getNombreLocal()));
    }
}

void gestionarAlmacenes::mostrarLotesLocal( int index){
    listaLotesVacunaClass *list = (locales->getCab()+index)->getLotes();
    this->ui->localesTwidget->setRowCount(0);
    //locales->getCab()->getLotes()->getCab();
    for (int x = 0; x < list->getCant(); x++){
        auto codigo = (list->getCab()+x)->getCodigo();
        auto nombre = (list->getCab()+x)->getNombre();
        auto cantidad = (list->getCab()+x)->getCantidad();
        auto caducidad = (list->getCab()+x)->getCaducidad();
        auto estado = (list->getCab()+x)->getEstado();
        auto estadoTexto = estado ? "Usado" : "No Usado";

        this->ui->localesTwidget->insertRow(x);

        this->ui->localesTwidget->setItem(x, 0, new QTableWidgetItem(QString::fromStdString(codigo)));
        this->ui->localesTwidget->setItem(x, 1, new QTableWidgetItem(QString::fromStdString(nombre)));
        this->ui->localesTwidget->setItem(x, 2, new QTableWidgetItem(QString::fromStdString(to_string(cantidad))));
        this->ui->localesTwidget->setItem(x, 3, new QTableWidgetItem(QString::fromStdString(caducidad)));
        this->ui->localesTwidget->setItem(x, 4, new QTableWidgetItem(QString::fromStdString((estadoTexto))));
    }
}

loteVacunaClass *gestionarAlmacenes::extraer(int x){
    loteVacunaClass *lote = new loteVacunaClass();
    lote = this->lotes->getCab() + x;
    for(int i = x; i< this->lotes->getCant()-1;i++){
        (this->lotes->getCab()+i)->setNombre((this->lotes->getCab()+i+1)->getNombre());
        (this->lotes->getCab()+i)->setCantidad((this->lotes->getCab()+i+1)->getCantidad());
        (this->lotes->getCab()+i)->setCaducidad((this->lotes->getCab()+i+1)->getCaducidad());
    }
    this->lotes->setCant(this->lotes->getCant()-1);
    return lote;
}
loteVacunaClass *gestionarAlmacenes::extraer(int x, listaLotesVacunaClass *lLot){
    loteVacunaClass *lote = new loteVacunaClass();
    lote = lLot->getCab() + x;
    for(int i = x; i< lLot->getCant()-1;i++){
        (lLot->getCab()+i)->setNombre((lLot->getCab()+i+1)->getNombre());
        (lLot->getCab()+i)->setCantidad((lLot->getCab()+i+1)->getCantidad());
        (lLot->getCab()+i)->setCaducidad((lLot->getCab()+i+1)->getCaducidad());
    }
    lLot->setCant(lLot->getCant()-1);
    return lote;
}

void gestionarAlmacenes::on_localesCbox_currentIndexChanged(int index){
    //(QString::fromStdString((this->locales->getCab()+index)->getNombreLocal()));
    this->mostrarLotes(this->lotes);
    this->mostrarLotesLocal(index);
}

void gestionarAlmacenes::on_agregarButton_clicked(){
    QMessageBox *msje =  new QMessageBox;
    loteVacunaClass *lote;
    lote = extraer((this->ui->mostrarLotesTwidget->currentRow()));
    (this->locales->getCab()+this->ui->localesCbox->currentIndex())->getLotes()->insertarLote(lote);// devuelve un numero
    this->mostrarLotes(this->lotes);
    this->mostrarLotesLocal(this->ui->localesCbox->currentIndex());
    msje->setText("Agregado...");
    msje->exec();
}
/*
void gestionarAlmacenes::on_quitarButton_clicked()
{
    //Nombre del boton quitarButton
    QMessageBox *msje =  new QMessageBox;
    loteVacunaClass *lote;
    int numLocal;
    int numLote;
    numLocal = this->ui->localesCbox->currentIndex();
    numLote = ui->localesTwidget->currentRow();
    if(((this->locales->getCab()+numLocal)->getLotes()->getCab()+numLocal)->getEstado()){
        msje->setText("Este lote ya esta utilizado");
        msje->exec();
        return;
    }
    lote = extraer(numLocal , (this->locales->getCab()+numLocal)->getLotes());
    this->lotes->insertarLote(lote);
    this->mostrarLotes(this->lotes);
    this->mostrarLotesLocal(numLocal);
    msje->setText("Devuelto");
    msje->exec();
}*/
