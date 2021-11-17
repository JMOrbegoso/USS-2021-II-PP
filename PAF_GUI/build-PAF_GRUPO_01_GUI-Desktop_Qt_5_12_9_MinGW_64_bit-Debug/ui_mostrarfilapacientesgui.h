/********************************************************************************
** Form generated from reading UI file 'mostrarfilapacientesgui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSTRARFILAPACIENTESGUI_H
#define UI_MOSTRARFILAPACIENTESGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollBar>

QT_BEGIN_NAMESPACE

class Ui_mostrarFilaPacientesGUI
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QColumnView *columnView;
    QScrollBar *verticalScrollBar;

    void setupUi(QDialog *mostrarFilaPacientesGUI)
    {
        if (mostrarFilaPacientesGUI->objectName().isEmpty())
            mostrarFilaPacientesGUI->setObjectName(QString::fromUtf8("mostrarFilaPacientesGUI"));
        mostrarFilaPacientesGUI->resize(703, 352);
        label = new QLabel(mostrarFilaPacientesGUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 20, 351, 16));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        groupBox = new QGroupBox(mostrarFilaPacientesGUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 40, 661, 301));
        columnView = new QColumnView(groupBox);
        columnView->setObjectName(QString::fromUtf8("columnView"));
        columnView->setGeometry(QRect(10, 30, 641, 261));
        verticalScrollBar = new QScrollBar(groupBox);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(620, 50, 16, 221));
        verticalScrollBar->setOrientation(Qt::Vertical);

        retranslateUi(mostrarFilaPacientesGUI);

        QMetaObject::connectSlotsByName(mostrarFilaPacientesGUI);
    } // setupUi

    void retranslateUi(QDialog *mostrarFilaPacientesGUI)
    {
        mostrarFilaPacientesGUI->setWindowTitle(QApplication::translate("mostrarFilaPacientesGUI", "Mostrar Fila de Pacientes Registrados", nullptr));
        label->setText(QApplication::translate("mostrarFilaPacientesGUI", "MOSTRAR FILA DE PACIENTES REGISTRADOS", nullptr));
        groupBox->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class mostrarFilaPacientesGUI: public Ui_mostrarFilaPacientesGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRARFILAPACIENTESGUI_H
