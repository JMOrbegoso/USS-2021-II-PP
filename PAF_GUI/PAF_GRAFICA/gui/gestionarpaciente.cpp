#include "gestionarpaciente.h"
#include "ui_gestionarpaciente.h"
#include <gui/registrarpaciente.h>

gestionarPaciente::gestionarPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarPaciente)
{
    ui->setupUi(this);
    ui->mostrarPacienteTwidget->setColumnWidth(0, 60);
    ui->mostrarPacienteTwidget->setColumnWidth(1, 85);
    ui->mostrarPacienteTwidget->setColumnWidth(2, 200);
    ui->mostrarPacienteTwidget->setColumnWidth(3, 274);
    ui->mostrarPacienteTwidget->setColumnWidth(4, 50);
}

gestionarPaciente::~gestionarPaciente()
{
    delete ui;
}

void gestionarPaciente::on_regresarCmd_clicked()
{
    this->close();
}

void gestionarPaciente::on_registrarPacienteCmd_clicked()
{
    registrarPaciente *regiPaciente = new registrarPaciente();
    regiPaciente->setLocales(this->getLocales());
    regiPaciente->listaLocalComboBox();
    regiPaciente->show();
    this->close();
}

listaPacientesClass *gestionarPaciente::getPacientes() const
{
    return this->pacientes;
}

void gestionarPaciente::setPacientes(listaPacientesClass *value)
{
    this->pacientes = value;
    this->actualizarC();
}

listaLocalesClass *gestionarPaciente::getLocales() const
{
    return locales;
}

void gestionarPaciente::setLocales(listaLocalesClass *value)
{
    locales = value;
   this->setPacientes(this->locales->getCab()->getPacientes());
}

void gestionarPaciente::listaLocalComboBox()
{
    for(int i=0;i < this->locales->getCant();i++){
        ui->elegirLocalCbox->addItem(QString::fromStdString((this->locales->getCab()+i)->getNombreLocal()));
    }
}

void gestionarPaciente::on_elegirLocalCbox_highlighted(int index)
{
    int i = index;
    ui->direccionTxt->setText(QString::fromStdString((this->locales->getCab()+i)->getDireccionLocal()));
    ui->nombreLocalTxt->setText(QString::fromStdString((this->locales->getCab()+i)->getNombreLocal()));
    this->actualizarC((locales->getCab()+i)->getPacientes());
    this->ui->buscarPacienteTxt->clear();
}

void gestionarPaciente::actualizarC(listaPacientesClass *pacientes)
{
    pacientes = pacientes == NULL ? this->pacientes : pacientes;
    this->ui->mostrarPacienteTwidget->setRowCount(0);
    nodoPacienteClass *aux = pacientes->getCab();
    int x = 0;
    ui->mostrarPacienteTwidget->clearContents();
    while(aux != NULL){
        auto codigo = aux->getInfo()->getCodigo();
        auto dni = aux->getInfo()->getDni();
        auto nombre = aux->getInfo()->getNombre();
        auto apellido = aux->getInfo()->getApellido();
        auto edad = aux->getInfo()->getEdad();

        ui->mostrarPacienteTwidget->insertRow(x);
        ui->mostrarPacienteTwidget->setItem(x, 0, new QTableWidgetItem(QString::fromStdString(codigo)));
        ui->mostrarPacienteTwidget->setItem(x, 1, new QTableWidgetItem(QString::fromStdString(dni)));
        ui->mostrarPacienteTwidget->setItem(x, 2, new QTableWidgetItem(QString::fromStdString(nombre)));
        ui->mostrarPacienteTwidget->setItem(x, 3, new QTableWidgetItem(QString::fromStdString(apellido)));
        ui->mostrarPacienteTwidget->setItem(x, 4, new QTableWidgetItem(QString::fromStdString(to_string(edad))));
        aux = aux->getSgte();
    }
}

void gestionarPaciente::on_buscarPacienteTxt_textChanged(const QString &arg)
{
    auto busquedaPaciente = this->pacientes->buscarDni(arg.toStdString());
    this->actualizarC(busquedaPaciente);
}
