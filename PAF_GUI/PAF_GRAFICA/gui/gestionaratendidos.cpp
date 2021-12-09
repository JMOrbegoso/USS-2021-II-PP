#include "gestionaratendidos.h"
#include "ui_gestionaratendidos.h"
#include <gui/registrarpaciente.h>

gestionarAtendidos::gestionarAtendidos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarAtendidos)
{
    ui->setupUi(this);
    ui->listaAtendidosTwidget->setColumnWidth(0,50);
    ui->listaAtendidosTwidget->setColumnWidth(1,100);
    ui->listaAtendidosTwidget->setColumnWidth(2,100);
    ui->listaAtendidosTwidget->setColumnWidth(3,100);
}

gestionarAtendidos::~gestionarAtendidos()
{
    delete ui;
}

void gestionarAtendidos::on_regresarCmd_clicked()
{
    this->close();
}

void gestionarAtendidos::on_registrarOtroPacienteCmd_clicked()
{
    registrarPaciente *regiPaciente = new registrarPaciente();
    regiPaciente->showNormal();
    this->close();
}

void gestionarAtendidos::listaLocalesBox(){
    int i = 0;
    for(int i=0;i < this->locales->getCant();i++){
        ui->elegirLocalCbox->addItem(QString::fromStdString((this->locales->getCab()+i)->getNombreLocal()));
    }
    this->actualizarC((locales->getCab()+i)->getPacientes());
}

listaPacientesClass *gestionarAtendidos::getPacientes() const
{
    return pacientes;
}

void gestionarAtendidos::setPacientes(listaPacientesClass *value)
{
    pacientes = value;
}

void gestionarAtendidos::actualizarC(listaPacientesClass *pacientes){
    pacientes = pacientes == NULL ? this->pacientes : pacientes;
    this->ui->listaAtendidosTwidget->setRowCount(0);
    nodoPacienteClass *aux = pacientes->getCab();
    int x = 0;
    ui->listaAtendidosTwidget->clearContents();
    while(aux != NULL){
        auto codigo = aux->getInfo()->getCodigo();
        auto dni = aux->getInfo()->getDni();

        ui->listaAtendidosTwidget->insertRow(x);
        ui->listaAtendidosTwidget->setItem(x, 0, new QTableWidgetItem(QString::fromStdString(codigo)));
        ui->listaAtendidosTwidget->setItem(x, 1, new QTableWidgetItem(QString::fromStdString(dni)));
        aux = aux->getSgte();
    }
}

listaLocalesClass *gestionarAtendidos::getLocales() const
{
    return locales;
}

void gestionarAtendidos::setLocales(listaLocalesClass *value)
{
    locales = value;
}

void gestionarAtendidos::on_elegirLocalCbox_currentIndexChanged(int index)
{
    // Actualiza los datos del local actual
    auto nombreLocal = (this->locales->getCab() + index)->getDireccionLocal();
    auto direccionLocal = (this->locales->getCab() + index)->getNombreLocal();

    this->ui->nombreLocalTxt->setText(QString::fromStdString(nombreLocal));
    this->ui->direccionLocalTxt->setText(QString::fromStdString(direccionLocal));

    // Actualiza table view
    this->actualizarControles((this->locales->getCab() + index)->getPacientes());

    // Limpia el cuadro de busqueda
    this->ui->buscarAtendidoTxt->clear();
}
