/********************************************************************************
** Form generated from reading UI file 'registrarlotegui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRARLOTEGUI_H
#define UI_REGISTRARLOTEGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registrarLoteGUI
{
public:
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtNombreLote;
    QLabel *label_3;
    QSpinBox *spinBoxCantidadLote;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtCodigoLote;
    QLabel *label_5;
    QDateEdit *fechaCaducidad;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *cmdHabilitadoLote;
    QRadioButton *cmdInhabilitadoLote;
    QLabel *label_2;
    QPushButton *cmdRegistrarLote;
    QPushButton *cmdCancelarLote;

    void setupUi(QDialog *registrarLoteGUI)
    {
        if (registrarLoteGUI->objectName().isEmpty())
            registrarLoteGUI->setObjectName(QString::fromUtf8("registrarLoteGUI"));
        registrarLoteGUI->resize(712, 373);
        groupBox = new QGroupBox(registrarLoteGUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 651, 331));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(90, 70, 461, 171));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtNombreLote = new QLineEdit(formLayoutWidget);
        txtNombreLote->setObjectName(QString::fromUtf8("txtNombreLote"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtNombreLote);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        spinBoxCantidadLote = new QSpinBox(formLayoutWidget);
        spinBoxCantidadLote->setObjectName(QString::fromUtf8("spinBoxCantidadLote"));
        spinBoxCantidadLote->setSingleStep(10);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBoxCantidadLote);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        txtCodigoLote = new QLineEdit(formLayoutWidget);
        txtCodigoLote->setObjectName(QString::fromUtf8("txtCodigoLote"));

        horizontalLayout->addWidget(txtCodigoLote);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        fechaCaducidad = new QDateEdit(formLayoutWidget);
        fechaCaducidad->setObjectName(QString::fromUtf8("fechaCaducidad"));

        formLayout->setWidget(3, QFormLayout::FieldRole, fechaCaducidad);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        cmdHabilitadoLote = new QRadioButton(formLayoutWidget);
        cmdHabilitadoLote->setObjectName(QString::fromUtf8("cmdHabilitadoLote"));
        cmdHabilitadoLote->setChecked(true);

        horizontalLayout_2->addWidget(cmdHabilitadoLote);

        cmdInhabilitadoLote = new QRadioButton(formLayoutWidget);
        cmdInhabilitadoLote->setObjectName(QString::fromUtf8("cmdInhabilitadoLote"));

        horizontalLayout_2->addWidget(cmdInhabilitadoLote);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 10, 291, 61));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        cmdRegistrarLote = new QPushButton(groupBox);
        cmdRegistrarLote->setObjectName(QString::fromUtf8("cmdRegistrarLote"));
        cmdRegistrarLote->setGeometry(QRect(310, 270, 80, 25));
        cmdCancelarLote = new QPushButton(groupBox);
        cmdCancelarLote->setObjectName(QString::fromUtf8("cmdCancelarLote"));
        cmdCancelarLote->setGeometry(QRect(470, 270, 80, 25));
        QWidget::setTabOrder(txtNombreLote, spinBoxCantidadLote);
        QWidget::setTabOrder(spinBoxCantidadLote, txtCodigoLote);
        QWidget::setTabOrder(txtCodigoLote, fechaCaducidad);
        QWidget::setTabOrder(fechaCaducidad, cmdHabilitadoLote);
        QWidget::setTabOrder(cmdHabilitadoLote, cmdInhabilitadoLote);
        QWidget::setTabOrder(cmdInhabilitadoLote, cmdRegistrarLote);
        QWidget::setTabOrder(cmdRegistrarLote, cmdCancelarLote);

        retranslateUi(registrarLoteGUI);

        QMetaObject::connectSlotsByName(registrarLoteGUI);
    } // setupUi

    void retranslateUi(QDialog *registrarLoteGUI)
    {
        registrarLoteGUI->setWindowTitle(QApplication::translate("registrarLoteGUI", "Registro de Lote", nullptr));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("registrarLoteGUI", "Nombre del Lote:", nullptr));
        label_3->setText(QApplication::translate("registrarLoteGUI", "Cantidad del Lote", nullptr));
        label_4->setText(QApplication::translate("registrarLoteGUI", "C\303\263digo del Lote:", nullptr));
        label_5->setText(QApplication::translate("registrarLoteGUI", "Fecha de Caducidad:", nullptr));
        label_6->setText(QApplication::translate("registrarLoteGUI", "Estado del Lote", nullptr));
        cmdHabilitadoLote->setText(QApplication::translate("registrarLoteGUI", "Habilitado", nullptr));
        cmdInhabilitadoLote->setText(QApplication::translate("registrarLoteGUI", "Inhabilitado", nullptr));
        label_2->setText(QApplication::translate("registrarLoteGUI", "REGISTRO DE LOTE DE VACUNACI\303\223N", nullptr));
        cmdRegistrarLote->setText(QApplication::translate("registrarLoteGUI", "Registrar", nullptr));
        cmdCancelarLote->setText(QApplication::translate("registrarLoteGUI", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registrarLoteGUI: public Ui_registrarLoteGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRARLOTEGUI_H
