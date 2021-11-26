#include "QMessageBox"
#include "registrarusuario.h"
#include "ui_registrarusuario.h"
#include "clscliente.h"

registrarUsuario::registrarUsuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarUsuario)
{
    ui->setupUi(this);
}

registrarUsuario::~registrarUsuario()
{
    delete ui;
}

void registrarUsuario::on_pushButton_clicked()
{
    this->close();
}

void registrarUsuario::on_ctnCancelar_clicked()
{
    this->close();
}

void registrarUsuario::on_btnRegistrar_clicked()
{
    QMessageBox msje;
    clsCliente *clie = new clsCliente();
    if ( ui->txtNombres->text().length() == 0 ){
        msje.setText("Debe ingresar el nombre");
        msje.exec();
        return;
    }
    if ( ui->txtApellidos->text().length() == 0 ){
        msje.setText("Debe ingresar apellidos");
        msje.exec();
        return;
    }
    if ( ui->txtDni->text().length() == 0 ){
        msje.setText("Debe ingresar el DNI");
        msje.exec();
        return;
    }
    if ( ui->txtDireccion->toPlainText().length() == 0){
        msje.setText("Debe ingresar la dirección");
        msje.exec();
        return;
    }

    clie->setNombres( ui->txtNombres->text().toStdString() );
    clie->setApellidos( ui->txtApellidos->text().toStdString());
    clie->setFechaNacimiento( ui->deFechaNac->text().toStdString());
    clie->setSueldo( ui->dspSueldo->value());
    clie->setDni( ui->txtDni->text().toStdString());
    if ( ui->rbMasc->isChecked() == true )
        clie->setGenero(true);
    else
        clie->setGenero(false);
    clie->setDireccion( ui->txtDireccion->toPlainText().toStdString());
    this->lC->insertarCliente( clie );
    msje.setText("Cliente registrado correctamente");
    msje.exec();
    limpiarControles();
}

clsListaClientes *registrarUsuario::getLC() const
{
    return lC;
}

void registrarUsuario::setLC(clsListaClientes *value)
{
    lC = value;
}

void registrarUsuario::limpiarControles()
{
    ui->txtNombres->setText("");
    ui->txtApellidos->setText("");
    ui->txtDni->setText("");
    ui->txtDireccion->setText("");
    ui->txtNombres->setFocus();
}








