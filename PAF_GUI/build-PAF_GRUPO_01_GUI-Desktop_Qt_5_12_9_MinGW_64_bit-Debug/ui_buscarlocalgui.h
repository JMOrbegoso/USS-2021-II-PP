/********************************************************************************
** Form generated from reading UI file 'buscarlocalgui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCARLOCALGUI_H
#define UI_BUSCARLOCALGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_buscarLocalGUI
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *txtBuscarLocal;
    QLabel *label;
    QGroupBox *groupBoxMostrarLocal;
    QPushButton *cmdCancelarBusqueda;
    QLabel *label_2;
    QPushButton *cmdBuscar;

    void setupUi(QDialog *buscarLocalGUI)
    {
        if (buscarLocalGUI->objectName().isEmpty())
            buscarLocalGUI->setObjectName(QString::fromUtf8("buscarLocalGUI"));
        buscarLocalGUI->resize(678, 450);
        formLayoutWidget = new QWidget(buscarLocalGUI);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(50, 100, 291, 41));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        txtBuscarLocal = new QLineEdit(formLayoutWidget);
        txtBuscarLocal->setObjectName(QString::fromUtf8("txtBuscarLocal"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtBuscarLocal);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        groupBoxMostrarLocal = new QGroupBox(buscarLocalGUI);
        groupBoxMostrarLocal->setObjectName(QString::fromUtf8("groupBoxMostrarLocal"));
        groupBoxMostrarLocal->setGeometry(QRect(50, 160, 581, 191));
        cmdCancelarBusqueda = new QPushButton(buscarLocalGUI);
        cmdCancelarBusqueda->setObjectName(QString::fromUtf8("cmdCancelarBusqueda"));
        cmdCancelarBusqueda->setGeometry(QRect(550, 380, 80, 21));
        label_2 = new QLabel(buscarLocalGUI);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 40, 251, 31));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        cmdBuscar = new QPushButton(buscarLocalGUI);
        cmdBuscar->setObjectName(QString::fromUtf8("cmdBuscar"));
        cmdBuscar->setGeometry(QRect(380, 100, 80, 21));
        QWidget::setTabOrder(txtBuscarLocal, cmdBuscar);
        QWidget::setTabOrder(cmdBuscar, cmdCancelarBusqueda);

        retranslateUi(buscarLocalGUI);

        QMetaObject::connectSlotsByName(buscarLocalGUI);
    } // setupUi

    void retranslateUi(QDialog *buscarLocalGUI)
    {
        buscarLocalGUI->setWindowTitle(QApplication::translate("buscarLocalGUI", "Buscar Local de Vacunaci\303\263n", nullptr));
        label->setText(QApplication::translate("buscarLocalGUI", "Buscar Local:", nullptr));
        groupBoxMostrarLocal->setTitle(QString());
        cmdCancelarBusqueda->setText(QApplication::translate("buscarLocalGUI", "Cancelar", nullptr));
        label_2->setText(QApplication::translate("buscarLocalGUI", "BUSCAR LOCAL DE VACUNACI\303\223N", nullptr));
        cmdBuscar->setText(QApplication::translate("buscarLocalGUI", "Buscar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buscarLocalGUI: public Ui_buscarLocalGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCARLOCALGUI_H
