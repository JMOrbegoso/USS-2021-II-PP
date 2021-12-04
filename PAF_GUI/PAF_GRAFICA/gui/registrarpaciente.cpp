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

void registrarPaciente::on_elegirLocalCbox_textHighlighted(const QString &arg1)
{
    string seleccionar;
    seleccionar = arg1.toStdString();
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
    pacienteClass *paci = new pacienteClass();
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
        //if(ui->cualTxt->isReadOnly() == false){
            if(ui->cualTxt->toPlainText().length() == 0){
                    msje.setText("Debe llenar el Campo de la enfermedad");
                    msje.exec();
                    return;
             // }
        }
    }
    if(ui->telefonoTxt->text().length() != 9){
        msje.setText("El Campo Telefono debe tener 9 dígitos");
        msje.exec();
        return;
    }
    for( x = 0; x < this->locales->getCant();x++){
        if((this->locales->getCab()+x)->getNombreLocal() == ui->elegirLocalCbox->currentText().toStdString())
            break;
    }
    paci->setAtendido(NULL);
    paci->setNombre(ui->nombreTxt->text().toStdString());
    paci->setApellido(ui->apellidoTxt->text().toStdString());
    paci->setDni(ui->dniTxt->text().toStdString());
    paci->setEdad(ui->edadSpbox->value());
    paci->setTelefono(ui->telefonoTxt->text().toStdString());
    paci->setDireccion(ui->direccionTxt->toPlainText().toStdString());
    paci->setCualEnfermedad(ui->cualTxt->toPlainText().toStdString());

    (this->locales->getCab()+x)->getPacientes()->insertarPaciente(paci);
    msje.setText("Paciente Registrado");
    msje.exec();
    clear();
}

void registrarPaciente::on_enfermedadCbox_currentIndexChanged(int index)
{
    this->ui->cualTxt->setEnabled(index == 0);
}

