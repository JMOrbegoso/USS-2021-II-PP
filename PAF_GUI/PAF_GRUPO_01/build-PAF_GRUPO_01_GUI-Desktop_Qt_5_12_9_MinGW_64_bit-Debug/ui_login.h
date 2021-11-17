/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtUsuario;
    QLineEdit *txtClave;
    QPushButton *cmdIngresar;
    QPushButton *cmdCerrar;
    QLabel *label_3;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(645, 317);
        groupBox = new QGroupBox(login);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(70, 50, 501, 201));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 60, 51, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 90, 71, 20));
        txtUsuario = new QLineEdit(groupBox);
        txtUsuario->setObjectName(QString::fromUtf8("txtUsuario"));
        txtUsuario->setGeometry(QRect(130, 60, 301, 24));
        txtClave = new QLineEdit(groupBox);
        txtClave->setObjectName(QString::fromUtf8("txtClave"));
        txtClave->setGeometry(QRect(130, 90, 301, 24));
        cmdIngresar = new QPushButton(groupBox);
        cmdIngresar->setObjectName(QString::fromUtf8("cmdIngresar"));
        cmdIngresar->setGeometry(QRect(230, 140, 80, 25));
        cmdCerrar = new QPushButton(groupBox);
        cmdCerrar->setObjectName(QString::fromUtf8("cmdCerrar"));
        cmdCerrar->setGeometry(QRect(350, 140, 80, 25));
        label_3 = new QLabel(login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(250, 10, 55, 16));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Login Sistema de Vacunacion Dengue", nullptr));
        groupBox->setTitle(QApplication::translate("login", "Ingreso de Usuario", nullptr));
        label->setText(QApplication::translate("login", "Usuario:", nullptr));
        label_2->setText(QApplication::translate("login", "Contrase\303\261a:", nullptr));
        cmdIngresar->setText(QApplication::translate("login", "Ingresar", nullptr));
        cmdCerrar->setText(QApplication::translate("login", "Cerrar", nullptr));
        label_3->setText(QApplication::translate("login", "TKM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
