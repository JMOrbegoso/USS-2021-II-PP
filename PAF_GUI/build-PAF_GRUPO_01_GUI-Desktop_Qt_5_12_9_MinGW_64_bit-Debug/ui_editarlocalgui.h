/********************************************************************************
** Form generated from reading UI file 'editarlocalgui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITARLOCALGUI_H
#define UI_EDITARLOCALGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editarLocalGUI
{
public:
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtCodigoLocal;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QRadioButton *cmdHabilitarLocal;
    QRadioButton *cmdInhabilitarLocal;
    QLineEdit *txtDireccionLocal;
    QLabel *label_2;
    QPushButton *cmdEditarLocal;
    QPushButton *cmdCancelarLocal;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QLineEdit *txtBuscarLocal;
    QPushButton *cmdBuscarLocal;

    void setupUi(QDialog *editarLocalGUI)
    {
        if (editarLocalGUI->objectName().isEmpty())
            editarLocalGUI->setObjectName(QString::fromUtf8("editarLocalGUI"));
        editarLocalGUI->resize(695, 413);
        groupBox = new QGroupBox(editarLocalGUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 30, 636, 346));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(110, 140, 421, 101));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtCodigoLocal = new QLineEdit(formLayoutWidget);
        txtCodigoLocal->setObjectName(QString::fromUtf8("txtCodigoLocal"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtCodigoLocal);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cmdHabilitarLocal = new QRadioButton(formLayoutWidget);
        cmdHabilitarLocal->setObjectName(QString::fromUtf8("cmdHabilitarLocal"));
        cmdHabilitarLocal->setChecked(true);

        horizontalLayout->addWidget(cmdHabilitarLocal);

        cmdInhabilitarLocal = new QRadioButton(formLayoutWidget);
        cmdInhabilitarLocal->setObjectName(QString::fromUtf8("cmdInhabilitarLocal"));

        horizontalLayout->addWidget(cmdInhabilitarLocal);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        txtDireccionLocal = new QLineEdit(formLayoutWidget);
        txtDireccionLocal->setObjectName(QString::fromUtf8("txtDireccionLocal"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txtDireccionLocal);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 30, 451, 31));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        cmdEditarLocal = new QPushButton(groupBox);
        cmdEditarLocal->setObjectName(QString::fromUtf8("cmdEditarLocal"));
        cmdEditarLocal->setGeometry(QRect(330, 270, 80, 25));
        cmdCancelarLocal = new QPushButton(groupBox);
        cmdCancelarLocal->setObjectName(QString::fromUtf8("cmdCancelarLocal"));
        cmdCancelarLocal->setGeometry(QRect(450, 270, 80, 25));
        formLayoutWidget_2 = new QWidget(groupBox);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(110, 80, 261, 31));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(formLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        txtBuscarLocal = new QLineEdit(formLayoutWidget_2);
        txtBuscarLocal->setObjectName(QString::fromUtf8("txtBuscarLocal"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, txtBuscarLocal);

        cmdBuscarLocal = new QPushButton(groupBox);
        cmdBuscarLocal->setObjectName(QString::fromUtf8("cmdBuscarLocal"));
        cmdBuscarLocal->setGeometry(QRect(400, 80, 80, 25));
        QWidget::setTabOrder(txtBuscarLocal, cmdBuscarLocal);
        QWidget::setTabOrder(cmdBuscarLocal, txtCodigoLocal);
        QWidget::setTabOrder(txtCodigoLocal, txtDireccionLocal);
        QWidget::setTabOrder(txtDireccionLocal, cmdHabilitarLocal);
        QWidget::setTabOrder(cmdHabilitarLocal, cmdInhabilitarLocal);
        QWidget::setTabOrder(cmdInhabilitarLocal, cmdEditarLocal);
        QWidget::setTabOrder(cmdEditarLocal, cmdCancelarLocal);

        retranslateUi(editarLocalGUI);

        QMetaObject::connectSlotsByName(editarLocalGUI);
    } // setupUi

    void retranslateUi(QDialog *editarLocalGUI)
    {
        editarLocalGUI->setWindowTitle(QApplication::translate("editarLocalGUI", "Editar Datos de un Local de Vacunaci\303\263n", nullptr));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("editarLocalGUI", "Codigo de Local:", nullptr));
        label_3->setText(QApplication::translate("editarLocalGUI", "Direcci\303\263n de Local:", nullptr));
        label_4->setText(QApplication::translate("editarLocalGUI", "Estado del Local:", nullptr));
        cmdHabilitarLocal->setText(QApplication::translate("editarLocalGUI", "Habilitado", nullptr));
        cmdInhabilitarLocal->setText(QApplication::translate("editarLocalGUI", "Inhabilitado", nullptr));
        label_2->setText(QApplication::translate("editarLocalGUI", "EDITAR DATOS DEL LOCAL DE VACUNACI\303\223N REGISTRADO", nullptr));
        cmdEditarLocal->setText(QApplication::translate("editarLocalGUI", "Editar", nullptr));
        cmdCancelarLocal->setText(QApplication::translate("editarLocalGUI", "Cancelar", nullptr));
        label_5->setText(QApplication::translate("editarLocalGUI", "Buscar Local:", nullptr));
        cmdBuscarLocal->setText(QApplication::translate("editarLocalGUI", "Buscar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editarLocalGUI: public Ui_editarLocalGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARLOCALGUI_H
