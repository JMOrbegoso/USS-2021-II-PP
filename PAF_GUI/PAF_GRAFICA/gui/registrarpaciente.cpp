#include "registrarpaciente.h"
#include "ui_registrarpaciente.h"
#include <QMessageBox>

registrarPaciente::registrarPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarPaciente)
{
    ui->setupUi(this);
    this->locales = new listaLocalesClass();
}

registrarPaciente::~registrarPaciente()
{
    delete ui;
}

void registrarPaciente::on_regresarCmd_clicked()
{
    this->close();
}

listaLocalesClass *registrarPaciente::getLocales() const
{
    return locales;
}

void registrarPaciente::setLocales(listaLocalesClass *value)
{
    locales = value;
}

void registrarPaciente::listaLocalComboBox()
{
    for(int i=0;i < this->locales->getCant();i++){
        ui->elegirLocalCbox->addItem(QString::fromStdString((this->locales->getCab()+i)->getNombreLocal()));
    }
}

void registrarPaciente::clear()
{
    ui->dniTxt->setText("");
    ui->nombreTxt->setText("");
    ui->apellidoTxt->setText("");
    ui->edadSpbox->setValue(18);
    ui->telefonoTxt->setText("");
    ui->direccionTxt->setText("");
    ui->enfermedadCbox->clear();
    ui->cualTxt->clear();
}

void registrarPaciente::on_registrarCmd_clicked()
{
    QMessageBox msje;
    pacienteClass *paci;
    int x = 0;

    if(ui->nombreTxt->text().length() == 0){
        msje.setText("Debe llenar el Campo de Nombre");
        msje.exec();
        return;
    }
    if(ui->apellidoTxt->text().length()==0){
        msje.setText("Debe llenar el Campo de Apellido");
        msje.exec();
        return;
    }
    if(ui->dniTxt->text().length() != 8){
        msje.setText("El Campo del DNI debe tener 8 Digitos ");
        msje.exec();
        return;
    }
    if(ui->direccionTxt->toPlainText().length() == 0){
        msje.setText("Debe llenar el Campo de la Direccion");
        msje.exec();
        return;
    }
    if(ui->enfermedadCbox->currentText() == "SI"){
        if(ui->cualTxt->toPlainText().length() == 0){
                msje.setText("Debe llenar el Campo de la enfermedad");
                msje.exec();
                return;
        }
    }
    if(ui->telefonoTxt->text().length() != 9){
        msje.setText("El Campo Telefono debe tener 9 dígitos");
        msje.exec();
        return;
    }
    for( x = 0; x < this->locales->getCant();x++){
        if((this->locales->getCab()+x)->getNombreLocal() == this->ui->elegirLocalCbox->currentText().toStdString())
            break;
    }

    // Propiedades del nuevo paciente
    auto dni = this->ui->dniTxt->text().toStdString();
    auto nombre = this->ui->nombreTxt->text().toStdString();
    auto apellido = this->ui->apellidoTxt->text().toStdString();
    auto edad = this->ui->edadSpbox->value();
    auto telefono = this->ui->telefonoTxt->text().toStdString();
    auto direccion = this->ui->direccionTxt->toPlainText().toStdString();
    auto enfermedad = this->ui->cualTxt->toPlainText().toStdString();

    // Crear el nuevo paciente
    if(ui->enfermedadCbox->currentText() == "SI")
        paci = new pacienteClass(dni, nombre, apellido, edad, telefono, direccion, enfermedad);
    else
        paci = new pacienteClass(dni, nombre, apellido, edad, telefono, direccion);

    // Insertar el nuevo paciente
    (this->locales->getCab() + x)->getPacientes()->insertarPaciente(paci);

    msje.setText("Paciente Registrado");
    msje.exec();
    clear();
}

void registrarPaciente::on_enfermedadCbox_currentIndexChanged(int index)
{
    this->ui->cualTxt->setEnabled(index == 0);
}

