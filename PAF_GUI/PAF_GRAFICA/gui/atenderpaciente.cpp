#include "atenderpaciente.h"
#include "ui_atenderpaciente.h"
#include <gui/registrarpaciente.h>

atenderPaciente::atenderPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::atenderPaciente)
{
    ui->setupUi(this);
    ui->mostrarPacientesQwidget->setColumnWidth(0, 60);
    ui->mostrarPacientesQwidget->setColumnWidth(1, 90);
    ui->mostrarPacientesQwidget->setColumnWidth(2, 80);
    ui->mostrarPacientesQwidget->setColumnWidth(3, 150);
    ui->mostrarPacientesQwidget->setColumnWidth(4, 80);
    ui->mostrarPacientesQwidget->setColumnWidth(5, 120);
    ui->mostrarPacientesQwidget->setColumnWidth(6, 130);
}

atenderPaciente::~atenderPaciente()
{
    delete ui;
}

void atenderPaciente::on_regresarButton_clicked()
{
    this->close();
}

void atenderPaciente::on_registrarButton_clicked()
{
    registrarPaciente *regiPaciente = new registrarPaciente();
    regiPaciente->setLocales(this->getLocales());
    regiPaciente->listaLocalComboBox();
    regiPaciente->show();
    this->close();
}

listaPacientesClass *atenderPaciente::getPacientes() const
{
    return pacientes;
}

void atenderPaciente::setPacientes(listaPacientesClass *value)
{
    pacientes = value;
}

listaLocalesClass *atenderPaciente::getLocales() const
{
    return locales;
}

void atenderPaciente::setLocales(listaLocalesClass *value)
{
    locales = value;
}

void atenderPaciente::listaLocalComboBox(){
    for(int x = 0; x<this->getLocales()->getCant();x++){
        this->ui->localesCBox->addItem(QString::fromStdString((this->locales->getCab()+x)->getNombreLocal()));
    }
    ui->direccionTxt->setText(QString::fromStdString(this->locales->getCab()->getDireccionLocal()));
}

void atenderPaciente::on_localesCBox_highlighted(int index)
{
    int i = index;
    ui->direccionTxt->setText(QString::fromStdString((this->locales->getCab()+i)->getDireccionLocal()));
    this->actualizarC((locales->getCab()+i)->getPacientes());
    this->listaEnfermerasCbox((this->locales->getCab()+i)->getPersonales()->getCab());
}

void atenderPaciente::actualizarC(listaPacientesClass *pacientes)
{
    pacientes = pacientes == NULL ? this->pacientes : pacientes;
    this->ui->mostrarPacientesQwidget->setRowCount(0);
    nodoPacienteClass *aux = pacientes->getCab();
    int x = 0;
    ui->mostrarPacientesQwidget->clearContents();
    while(aux != NULL){
        auto codigo = aux->getInfo()->getCodigo();
        auto dni = aux->getInfo()->getDni();
        auto nombre = aux->getInfo()->getNombre();
        auto apellido = aux->getInfo()->getApellido();
        auto edad = aux->getInfo()->getEdad();
        auto direccion = aux->getInfo()->getDireccion();
        auto cualEnfermedad = aux->getInfo()->getCualEnfermedad();

        ui->mostrarPacientesQwidget->insertRow(x);
        ui->mostrarPacientesQwidget->setItem(x, 0, new QTableWidgetItem(QString::fromStdString(codigo)));
        ui->mostrarPacientesQwidget->setItem(x, 1, new QTableWidgetItem(QString::fromStdString(dni)));
        ui->mostrarPacientesQwidget->setItem(x, 2, new QTableWidgetItem(QString::fromStdString(nombre)));
        ui->mostrarPacientesQwidget->setItem(x, 3, new QTableWidgetItem(QString::fromStdString(apellido)));
        ui->mostrarPacientesQwidget->setItem(x, 4, new QTableWidgetItem(QString::fromStdString(to_string(edad))));
        ui->mostrarPacientesQwidget->setItem(x, 5, new QTableWidgetItem(QString::fromStdString(direccion)));
        ui->mostrarPacientesQwidget->setItem(x, 6, new QTableWidgetItem(QString::fromStdString(cualEnfermedad)));
        aux = aux->getSgte();
    }
}

void atenderPaciente::listaEnfermerasCbox(nodoPersonalClass *enfermera){
    ui->enfermerasCBox->clear();
    nodoPersonalClass  *aux = new nodoPersonalClass();
    //int i = 0;
    aux = enfermera;
    while(aux != NULL){
        if(aux->getInfo()->getTipoPersonal() == false){
            this->ui->enfermerasCBox->addItem(QString::fromStdString(aux->getInfo()->getNombre()));
        }
        aux = aux->getSgte();
    }
}

void atenderPaciente::on_enfermerasCBox_textHighlighted(const QString &arg1)
{
    string select;
    select = arg1.toStdString();
}

void atenderPaciente::on_atenderButton_clicked()
{
    this->setPacientes((this->locales->getCab() + ui->localesCBox->currentIndex())->getPacientes()); //verificar que empiece en 0?
}


void atenderPaciente::on_mostrarPacientesQwidget_itemClicked(QTableWidgetItem *item)
{

}
