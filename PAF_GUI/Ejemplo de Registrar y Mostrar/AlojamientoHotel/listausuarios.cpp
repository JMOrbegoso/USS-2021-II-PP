#include "listausuarios.h"
#include "ui_listausuarios.h"

listaUsuarios::listaUsuarios(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listaUsuarios)
{
    ui->setupUi(this);
    this->ui->twClientes->setColumnWidth( 0, 50 );
    this->ui->twClientes->setColumnWidth( 1, 200 );
    this->ui->twClientes->setColumnWidth( 2, 200 );
    this->ui->twClientes->setColumnWidth( 3, 100 );
    this->ui->twClientes->setColumnWidth( 4, 100 );
}

listaUsuarios::~listaUsuarios()
{
    delete ui;
}

void listaUsuarios::on_pushButton_2_clicked()
{
    this->close();
}

void listaUsuarios::on_btnCerrar_clicked()
{
    this->close();
}
clsListaClientes *listaUsuarios::getLC() const
{
    return lC;
}

void listaUsuarios::setLC(clsListaClientes *value)
{
    lC = value;
}

void listaUsuarios::mostrarLista( clsListaClientes *lista ){
    clsNodoCliente *aux = new clsNodoCliente();
    aux = lista->getCab();
    int x = 0;
    while ( aux != NULL ){
        this->ui->twClientes->insertRow(x);
        this->ui->twClientes->setItem( x, 0, new QTableWidgetItem(QString::number((aux->getInfo()->getCodigo()))));
        this->ui->twClientes->setItem( x, 1, new QTableWidgetItem( QString::fromUtf8( aux->getInfo()->getNombres().c_str())));
        this->ui->twClientes->setItem( x, 2, new QTableWidgetItem( QString::fromUtf8( aux->getInfo()->getApellidos().c_str())));
        this->ui->twClientes->setItem( x, 3, new QTableWidgetItem( QString::fromUtf8( aux->getInfo()->getFechaNacimiento().c_str())));
        this->ui->twClientes->setItem( x, 4, new QTableWidgetItem( QString::fromUtf8( aux->getInfo()->getDni().c_str())));
        x++;
        aux = aux->getSgte();
    }
}










