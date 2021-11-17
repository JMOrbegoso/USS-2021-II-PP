/********************************************************************************
** Form generated from reading UI file 'buscarlotegui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCARLOTEGUI_H
#define UI_BUSCARLOTEGUI_H

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

class Ui_buscarLoteGUI
{
public:
    QLabel *label_2;
    QGroupBox *groupBoxMostarLote;
    QPushButton *cmdBuscar;
    QPushButton *cmdCancelarBusqueda;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *txtBuscarLote;
    QLabel *label;

    void setupUi(QDialog *buscarLoteGUI)
    {
        if (buscarLoteGUI->objectName().isEmpty())
            buscarLoteGUI->setObjectName(QString::fromUtf8("buscarLoteGUI"));
        buscarLoteGUI->resize(667, 433);
        label_2 = new QLabel(buscarLoteGUI);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 30, 251, 31));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        groupBoxMostarLote = new QGroupBox(buscarLoteGUI);
        groupBoxMostarLote->setObjectName(QString::fromUtf8("groupBoxMostarLote"));
        groupBoxMostarLote->setGeometry(QRect(40, 150, 581, 191));
        cmdBuscar = new QPushButton(buscarLoteGUI);
        cmdBuscar->setObjectName(QString::fromUtf8("cmdBuscar"));
        cmdBuscar->setGeometry(QRect(370, 90, 80, 21));
        cmdCancelarBusqueda = new QPushButton(buscarLoteGUI);
        cmdCancelarBusqueda->setObjectName(QString::fromUtf8("cmdCancelarBusqueda"));
        cmdCancelarBusqueda->setGeometry(QRect(540, 370, 80, 21));
        formLayoutWidget = new QWidget(buscarLoteGUI);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(40, 90, 291, 41));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        txtBuscarLote = new QLineEdit(formLayoutWidget);
        txtBuscarLote->setObjectName(QString::fromUtf8("txtBuscarLote"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtBuscarLote);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        QWidget::setTabOrder(txtBuscarLote, cmdBuscar);
        QWidget::setTabOrder(cmdBuscar, cmdCancelarBusqueda);

        retranslateUi(buscarLoteGUI);

        QMetaObject::connectSlotsByName(buscarLoteGUI);
    } // setupUi

    void retranslateUi(QDialog *buscarLoteGUI)
    {
        buscarLoteGUI->setWindowTitle(QApplication::translate("buscarLoteGUI", "Buscar Lote de Vacunaci\303\263n", nullptr));
        label_2->setText(QApplication::translate("buscarLoteGUI", "BUSCAR LOTE DE VACUNACI\303\223N", nullptr));
        groupBoxMostarLote->setTitle(QString());
        cmdBuscar->setText(QApplication::translate("buscarLoteGUI", "Buscar", nullptr));
        cmdCancelarBusqueda->setText(QApplication::translate("buscarLoteGUI", "Cancelar", nullptr));
        label->setText(QApplication::translate("buscarLoteGUI", "Buscar Lote:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buscarLoteGUI: public Ui_buscarLoteGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCARLOTEGUI_H
