#include "QMessageBox"
#include "registrarpersonalgui.h"
#include "ui_registrarpersonalgui.h"
#include "personalclass.h"
//#include "QComboBox"

registrarPersonalGui::registrarPersonalGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarPersonalGui)
{
    ui->setupUi(this);
    this->listLocales = new listaLocalesClass();
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
    ui->spinEdaPers->setValue(18);
    ui->txtDniPers->setText("");
    ui->txtTelPers->setText("");
    ui->douSpinSuePers->setValue(900.00);
    ui->spinHdtPers->setValue(8);
    //ui->txtApePers->clear();
}

void registrarPersonalGui::on_cmdCanMed_clicked()
{
    this->close();
}

void registrarPersonalGui::on_cmdRegMed_clicked()
{
    QMessageBox msje;

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

    int i;
    for(i = 0; i < this->listLocales->getCant();i++){
        if((this->listLocales->getCab()+i)->getNombreLocal() == ui->selectLocales->currentText().toStdString())
            break;
    }

    const auto nombre = this->ui->txtNomPers->text().toStdString();
    const auto apellido = this->ui->txtApePers->text().toStdString();
    const auto dni = this->ui->txtDniPers->text().toStdString();
    const auto edad = this->ui->spinEdaPers->value();
    const auto telefono = this->ui->txtTelPers->text().toStdString();
    const auto direccion = this->ui->txtDirPers->text().toStdString();
    const auto sueldo = this->ui->douSpinSuePers->value();
    const auto horasTrabajo = "8";
    const auto tipoPersonal = this->ui->radMed->isChecked();

    personalClass *pers = new personalClass(nombre, apellido, dni, telefono, direccion, edad, sueldo, horasTrabajo, tipoPersonal);

    (this->listLocales->getCab() + i)->getPersonales()->insertarPersonal(pers);

    msje.setText("Personal registrado correctamente");
    msje.exec();
    this->ui->txtNomPers->setReadOnly(false);
    clear();
}

/*
listaPersonalClass *registrarPersonalGui::getListPers() const
{
    return listPers;
}

void registrarPersonalGui::setListPers(listaPersonalClass *value)
{
    listPers = value;
}*/
/*
void registrarPersonalGui::habilitarCmdTxt()
{
    ui->txtNomPers->setEnabled(true);
    ui->txtApePers->setEnabled(true);
    ui->txtDniPers->setEnabled(true);
    ui->txtDirPers->setEnabled(true);
    ui->txtTelPers->setEnabled(true);
    ui->spinEdaPers->setEnabled(true);
    ui->spinHdtPers->setEnabled(true);
    ui->douSpinSuePers->setEnabled(true);
    ui->radEnf->setEnabled(true);
    ui->radMed->setEnabled(true);
}
*/
void registrarPersonalGui::on_selectLocales_textHighlighted(const QString &arg1)
{
    //this->habilitarCmdTxt();
    string selected;
    selected = arg1.toStdString();
}

listaLocalesClass *registrarPersonalGui::getListLocales() const
{
    return listLocales;
}

void registrarPersonalGui::setListLocales(listaLocalesClass *value)
{
    listLocales = value;
}

void registrarPersonalGui::addListLocalComBox()
{
    for(int i=0;i < this->listLocales->getCant();i++){
        ui->selectLocales->addItem(QString::fromStdString((this->listLocales->getCab()+i)->getNombreLocal()));
    }
}
