/********************************************************************************
** Form generated from reading UI file 'buscarpacientegui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCARPACIENTEGUI_H
#define UI_BUSCARPACIENTEGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_buscarPacienteGUI
{
public:
    QLabel *label;
    QTableView *tableView;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *buscarPacienteGUI)
    {
        if (buscarPacienteGUI->objectName().isEmpty())
            buscarPacienteGUI->setObjectName(QString::fromUtf8("buscarPacienteGUI"));
        buscarPacienteGUI->resize(592, 394);
        label = new QLabel(buscarPacienteGUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 20, 251, 16));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        tableView = new QTableView(buscarPacienteGUI);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 110, 551, 192));
        formLayoutWidget = new QWidget(buscarPacienteGUI);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 60, 301, 31));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        pushButton = new QPushButton(buscarPacienteGUI);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 60, 80, 21));
        pushButton_2 = new QPushButton(buscarPacienteGUI);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(490, 340, 80, 21));
        pushButton_3 = new QPushButton(buscarPacienteGUI);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 340, 80, 21));

        retranslateUi(buscarPacienteGUI);

        QMetaObject::connectSlotsByName(buscarPacienteGUI);
    } // setupUi

    void retranslateUi(QDialog *buscarPacienteGUI)
    {
        buscarPacienteGUI->setWindowTitle(QApplication::translate("buscarPacienteGUI", "Buscar Paciente Registrado", nullptr));
        label->setText(QApplication::translate("buscarPacienteGUI", "BUSCAR PACIENTE REGISTRADO", nullptr));
        label_2->setText(QApplication::translate("buscarPacienteGUI", "Buscar: ", nullptr));
        pushButton->setText(QApplication::translate("buscarPacienteGUI", "Buscar", nullptr));
        pushButton_2->setText(QApplication::translate("buscarPacienteGUI", "Cancelar", nullptr));
        pushButton_3->setText(QApplication::translate("buscarPacienteGUI", "Editar Datos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buscarPacienteGUI: public Ui_buscarPacienteGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCARPACIENTEGUI_H
