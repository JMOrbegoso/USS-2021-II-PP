/********************************************************************************
** Form generated from reading UI file 'registrarcolapacientesgui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRARCOLAPACIENTESGUI_H
#define UI_REGISTRARCOLAPACIENTESGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registrarColaPacientesGUI
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QSpinBox *spinBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *registrarColaPacientesGUI)
    {
        if (registrarColaPacientesGUI->objectName().isEmpty())
            registrarColaPacientesGUI->setObjectName(QString::fromUtf8("registrarColaPacientesGUI"));
        registrarColaPacientesGUI->resize(679, 357);
        label = new QLabel(registrarColaPacientesGUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 20, 401, 16));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        groupBox = new QGroupBox(registrarColaPacientesGUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 30, 651, 311));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(150, 30, 351, 141));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        lineEdit_4 = new QLineEdit(formLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        lineEdit_5 = new QLineEdit(formLayoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_5);

        formLayoutWidget_2 = new QWidget(groupBox);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(150, 180, 91, 31));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(formLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        spinBox = new QSpinBox(formLayoutWidget_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(18);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, spinBox);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 230, 80, 21));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(470, 230, 80, 21));

        retranslateUi(registrarColaPacientesGUI);

        QMetaObject::connectSlotsByName(registrarColaPacientesGUI);
    } // setupUi

    void retranslateUi(QDialog *registrarColaPacientesGUI)
    {
        registrarColaPacientesGUI->setWindowTitle(QApplication::translate("registrarColaPacientesGUI", "Registrar Pacientes a la Cola de Vacunacion", nullptr));
        label->setText(QApplication::translate("registrarColaPacientesGUI", "REGISTRAR PACIENTES A LA COLA DE VACUNACION", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QApplication::translate("registrarColaPacientesGUI", "DNI:", nullptr));
        label_3->setText(QApplication::translate("registrarColaPacientesGUI", "Nombres:", nullptr));
        label_4->setText(QApplication::translate("registrarColaPacientesGUI", "Apellidos:", nullptr));
        label_6->setText(QApplication::translate("registrarColaPacientesGUI", "Telefono-Celular:", nullptr));
        label_7->setText(QApplication::translate("registrarColaPacientesGUI", "Direccion:", nullptr));
        label_5->setText(QApplication::translate("registrarColaPacientesGUI", "Edad:", nullptr));
        pushButton->setText(QApplication::translate("registrarColaPacientesGUI", "Registrar", nullptr));
        pushButton_2->setText(QApplication::translate("registrarColaPacientesGUI", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registrarColaPacientesGUI: public Ui_registrarColaPacientesGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRARCOLAPACIENTESGUI_H
