/********************************************************************************
** Form generated from reading UI file 'editarlotegui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITARLOTEGUI_H
#define UI_EDITARLOTEGUI_H

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

class Ui_editarLoteGUI
{
public:
    QGroupBox *groupBox;
    QLabel *label_2;
    QPushButton *cmdEditarLote;
    QPushButton *cmdCancelarLote;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QLineEdit *txtBuscarLote;
    QPushButton *cmdBuscarLo;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtNombreLote;
    QLabel *label_3;
    QSpinBox *spinBoxCantidadLote;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtCodigoLote;
    QLabel *label_6;
    QDateEdit *fechaCaducidad;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *cmdHabilitarLote;
    QRadioButton *cmdInhabilitarLote;

    void setupUi(QDialog *editarLoteGUI)
    {
        if (editarLoteGUI->objectName().isEmpty())
            editarLoteGUI->setObjectName(QString::fromUtf8("editarLoteGUI"));
        editarLoteGUI->resize(694, 425);
        groupBox = new QGroupBox(editarLoteGUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 636, 371));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 30, 441, 31));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        cmdEditarLote = new QPushButton(groupBox);
        cmdEditarLote->setObjectName(QString::fromUtf8("cmdEditarLote"));
        cmdEditarLote->setGeometry(QRect(320, 330, 80, 25));
        cmdCancelarLote = new QPushButton(groupBox);
        cmdCancelarLote->setObjectName(QString::fromUtf8("cmdCancelarLote"));
        cmdCancelarLote->setGeometry(QRect(460, 330, 80, 25));
        formLayoutWidget_2 = new QWidget(groupBox);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(80, 80, 261, 31));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(formLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        txtBuscarLote = new QLineEdit(formLayoutWidget_2);
        txtBuscarLote->setObjectName(QString::fromUtf8("txtBuscarLote"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, txtBuscarLote);

        cmdBuscarLo = new QPushButton(groupBox);
        cmdBuscarLo->setObjectName(QString::fromUtf8("cmdBuscarLo"));
        cmdBuscarLo->setGeometry(QRect(410, 80, 80, 25));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(80, 130, 461, 171));
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

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        fechaCaducidad = new QDateEdit(formLayoutWidget);
        fechaCaducidad->setObjectName(QString::fromUtf8("fechaCaducidad"));

        formLayout->setWidget(3, QFormLayout::FieldRole, fechaCaducidad);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        cmdHabilitarLote = new QRadioButton(formLayoutWidget);
        cmdHabilitarLote->setObjectName(QString::fromUtf8("cmdHabilitarLote"));
        cmdHabilitarLote->setChecked(true);

        horizontalLayout_2->addWidget(cmdHabilitarLote);

        cmdInhabilitarLote = new QRadioButton(formLayoutWidget);
        cmdInhabilitarLote->setObjectName(QString::fromUtf8("cmdInhabilitarLote"));

        horizontalLayout_2->addWidget(cmdInhabilitarLote);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_2);

        QWidget::setTabOrder(txtBuscarLote, cmdBuscarLo);
        QWidget::setTabOrder(cmdBuscarLo, txtNombreLote);
        QWidget::setTabOrder(txtNombreLote, spinBoxCantidadLote);
        QWidget::setTabOrder(spinBoxCantidadLote, txtCodigoLote);
        QWidget::setTabOrder(txtCodigoLote, fechaCaducidad);
        QWidget::setTabOrder(fechaCaducidad, cmdHabilitarLote);
        QWidget::setTabOrder(cmdHabilitarLote, cmdInhabilitarLote);
        QWidget::setTabOrder(cmdInhabilitarLote, cmdEditarLote);
        QWidget::setTabOrder(cmdEditarLote, cmdCancelarLote);

        retranslateUi(editarLoteGUI);

        QMetaObject::connectSlotsByName(editarLoteGUI);
    } // setupUi

    void retranslateUi(QDialog *editarLoteGUI)
    {
        editarLoteGUI->setWindowTitle(QApplication::translate("editarLoteGUI", "Editar Datos de un Lote de Vacunaci\303\263n", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QApplication::translate("editarLoteGUI", "EDITAR DATOS DEL LOTE DE VACUNACI\303\223N REGISTRADO", nullptr));
        cmdEditarLote->setText(QApplication::translate("editarLoteGUI", "Editar", nullptr));
        cmdCancelarLote->setText(QApplication::translate("editarLoteGUI", "Cancelar", nullptr));
        label_5->setText(QApplication::translate("editarLoteGUI", "Buscar Lote:", nullptr));
        cmdBuscarLo->setText(QApplication::translate("editarLoteGUI", "Buscar", nullptr));
        label->setText(QApplication::translate("editarLoteGUI", "Nombre del Lote:", nullptr));
        label_3->setText(QApplication::translate("editarLoteGUI", "Cantidad del Lote", nullptr));
        label_4->setText(QApplication::translate("editarLoteGUI", "C\303\263digo del Lote:", nullptr));
        label_6->setText(QApplication::translate("editarLoteGUI", "Fecha de Caducidad:", nullptr));
        label_7->setText(QApplication::translate("editarLoteGUI", "Estado del Lote", nullptr));
        cmdHabilitarLote->setText(QApplication::translate("editarLoteGUI", "Habilitado", nullptr));
        cmdInhabilitarLote->setText(QApplication::translate("editarLoteGUI", "Inhabilitado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editarLoteGUI: public Ui_editarLoteGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARLOTEGUI_H
