#include "registrartrabajadoresgui.h"
#include "ui_registrartrabajadoresgui.h"

registrarTrabajadoresGui::registrarTrabajadoresGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarTrabajadoresGui)
{
    ui->setupUi(this);

    this->ui->comBoxAccion->addItem("Registro");
    this->ui->comBoxAccion->addItem("Supervisar");
}

registrarTrabajadoresGui::~registrarTrabajadoresGui()
{
    delete ui;
}

void registrarTrabajadoresGui::on_btnCancel_clicked()
{
    this->close();
}

void registrarTrabajadoresGui::on_btnRegis_clicked()
{
    //Registrar Trabajador
    QMessageBox msje;

    if(ui->txtNom->text().length()==0){
        msje.setText("Llene el campo nombre");
        msje.exec(); return;
    }
    if(ui->txtApe->text().length()==0){
        msje.setText("Llene el campo apellido");
        msje.exec(); return;
    }
    if(ui->txtDni->text().length()!=8){
        msje.setText("El campo DNI debe tener 8 dígitos");
        msje.exec(); return;
    }

    const auto nombre = this->ui->txtNom->text().toStdString();
    const auto apellido = this->ui->txtApe->text().toStdString();
    const auto dni = this->ui->txtDni->text().toStdString();
    const auto edad = this->ui->spinBoxEdad->value();
    const auto genero = this->ui->rdbMas->isChecked();
    const auto accion = this->ui->comBoxAccion->currentText().toStdString();

    trabajadorClass *traj = new trabajadorClass(nombre, apellido, dni, edad, genero, accion);

    this->lTrabaj->insertar(traj);

    msje.setText("Personal registrado correctamente");
    msje.exec();
    clear();
}

listaTrabajadoresClass *registrarTrabajadoresGui::getLTrabaj() const
{
    return lTrabaj;
}

void registrarTrabajadoresGui::setLTrabaj(listaTrabajadoresClass *value)
{
    lTrabaj = value;
}

void registrarTrabajadoresGui::clear()
{
    this->ui->txtNom->clear();
    this->ui->txtApe->clear();
    this->ui->txtDni->clear();
    this->ui->spinBoxEdad->setValue(18);
}
