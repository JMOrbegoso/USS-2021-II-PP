#include "loginDialog.h"
#include "ui_loginDialog.h"
#include "gui/mainwindow.h"
#include <QMessageBox>

int loginDialog::attemps = 3;

loginDialog::loginDialog(studentsListClass *students, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDialog)
{
    this->ui->setupUi(this);

    this->students = students;
}

loginDialog::~loginDialog()
{
    delete ui;
}

void loginDialog::on_exitPushButton_pressed()
{
    this->close();
}


void loginDialog::on_enterPushButton_pressed()
{
    bool success = false;

    string email = this->ui->emailLineEdit->text().toStdString();
    string password = this->ui->passwordLineEdit->text().toStdString();

    for(int i = 0; i < this->students->getLength(); i++){
        auto student = this->students->getHead() + i;

        if(student->getEmail() == email){
            if (student->getPassword() == password){
                success = true;
            }
        }
    }

    if (!success){
        loginDialog::attemps--;

        QMessageBox messageBox;
        string message = "Datos incorrectos, le quedan " + to_string(loginDialog::attemps) + " intentos.";
        messageBox.setText(QString::fromStdString(message));
        messageBox.exec();

        if(loginDialog::attemps <= 0)
            this->close();
    }
    else{
        MainWindow *w = new MainWindow(this->students);
        w->show();
        this->close();
    }
}

