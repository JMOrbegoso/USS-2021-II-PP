#include "QMessageBox"
#include "registrarpersonalgui.h"
#include "ui_registrarpersonalgui.h"
#include "personalclass.h"

registrarPersonalGui::registrarPersonalGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarPersonalGui)
{
    ui->setupUi(this);
}

registrarPersonalGui::~registrarPersonalGui()
{
    delete ui;
}

void registrarPersonalGui::clear()
{
    ui->txtApePers->setText("");
    ui->txtNomPers->setText("");
    ui->txtDirPers->setText("");
    ui->spinEdaPers->setValue(0);
    ui->txtDniPers->setText("");
    ui->txtTelPers->setText("");
    ui->douSpinSuePers->setValue(0.00);
    ui->spinHdtPers->setValue(0);
    ui->txtApePers->clear();
}

void registrarPersonalGui::on_cmdCanMed_clicked()
{
    this->close();
}

void registrarPersonalGui::on_cmdRegMed_clicked()
{
    QMessageBox msje;
    personalClass *pers = new personalClass();

    if(ui->txtNomPers->text().length()==0){
        msje.setText("Llene el campo nombre");
        msje.exec(); return;
    }
    if(ui->txtApePers->text().length()==0){
        msje.setText("Llene el campo apellido");
        msje.exec(); return;
    }
    if(ui->txtDniPers->text().length()!=8){
        msje.setText("El campo DNI debe tener 8 dígitos");
        msje.exec(); return;
    }
    //if(ui->txtEdadPers->text().length()==0){
    //    msje.setText("Llene el campo edad");
    //    msje.exec(); return;
    //}
    if(ui->txtDirPers->text().length()==0){
        msje.setText("Llene el campo dirección");
        msje.exec(); return;
    }
    if(ui->txtTelPers->text().length()!=9){
        msje.setText("El campo telefono debe tener 9 dígitos");
        msje.exec(); return;
    }

    pers->setNombre(ui->txtNomPers->text().toStdString());
    pers->setApellido(ui->txtApePers->text().toStdString());
    pers->setDni(ui->txtDniPers->text().toStdString());
    pers->setEdad(ui->spinEdaPers->value());
    //pers->setEdad(atoi(ui->txtEdadPers->text().toStdString().c_str()));
    pers->setTelefono(ui->txtTelPers->text().toStdString());
    pers->setDireccion(ui->txtDirPers->text().toStdString());
    // pers->setHorasTrabajo(ui->spinHdtPers->value());
    pers->setSueldo(ui->douSpinSuePers->value());
    if(ui->radMed->isChecked()==true)
        pers->setTipoPersonal(true);
    else
        pers->setTipoPersonal(false);

   // this->lC->insertarCliente( clie );
    msje.setText("Cliente registrado correctamente");
    msje.exec();

    clear();
}
