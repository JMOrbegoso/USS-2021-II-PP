#include "registerDialog.h"
#include "gui/loginDialog.h"
#include "ui_registerDialog.h"
#include <QMessageBox>

registerDialog::registerDialog(studentsListClass *students, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registerDialog)
{
    this->ui->setupUi(this);

    this->students = students;
}

registerDialog::~registerDialog()
{
    delete this->ui;
}

void registerDialog::on_registerPushButton_pressed()
{
    QMessageBox msje;

    // validation
    if (this->ui->emailLineEdit->text().length() == 0){
        msje.setText("Ingrese un email valido");
        msje.exec();
        return;
    }
    if (this->ui->passwordLineEdit->text().length() == 0){
        msje.setText("Ingrese una contraseña valida");
        msje.exec();
        return;
    }
    if (this->ui->firstNameLineEdit->text().length() == 0){
        msje.setText("Ingrese unos nombres validos");
        msje.exec();
        return;
    }
    if (this->ui->lastNameLineEdit->text().length() == 0){
        msje.setText("Ingrese unos apellidos validos");
        msje.exec();
        return;
    }
    if (this->ui->dniLineEdit->text().length() == 0){
        msje.setText("Ingrese un DNI valido");
        msje.exec();
        return;
    }

    // Create the new student
    string email = this->ui->emailLineEdit->text().toStdString();
    string password = this->ui->passwordLineEdit->text().toStdString();
    string firstName = this->ui->firstNameLineEdit->text().toStdString();
    string lastName = this->ui->lastNameLineEdit->text().toStdString();
    string dni = this->ui->dniLineEdit->text().toStdString();

    auto newStudent = new studentClass(email, password, firstName, lastName, dni);
    this->students->insert(newStudent);

    msje.setText("Estudiante registrado, ahora puede iniciar sesión...");
    msje.exec();

    this->close();

    loginDialog *dialog = new loginDialog(this->students);
    dialog->show();
}


void registerDialog::on_exitPushButton_pressed()
{
    this->close();
}

