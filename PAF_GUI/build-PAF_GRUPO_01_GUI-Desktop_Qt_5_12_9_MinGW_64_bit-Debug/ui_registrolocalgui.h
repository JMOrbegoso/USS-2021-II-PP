/********************************************************************************
** Form generated from reading UI file 'registrolocalgui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTROLOCALGUI_H
#define UI_REGISTROLOCALGUI_H

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

class Ui_registroLocalGUI
{
public:
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtCodigoLocal;
    QLabel *label_3;
    QLineEdit *txtDireccionLocal;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QRadioButton *cmdHabilitarLocal;
    QRadioButton *cmdInhabilitarLocal;
    QLabel *label_2;
    QPushButton *cmdRegistrarLocal;
    QPushButton *cmdCancelarLocal;

    void setupUi(QDialog *registroLocalGUI)
    {
        if (registroLocalGUI->objectName().isEmpty())
            registroLocalGUI->setObjectName(QString::fromUtf8("registroLocalGUI"));
        registroLocalGUI->resize(695, 380);
        groupBox = new QGroupBox(registroLocalGUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 651, 331));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(110, 100, 421, 101));
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

        txtDireccionLocal = new QLineEdit(formLayoutWidget);
        txtDireccionLocal->setObjectName(QString::fromUtf8("txtDireccionLocal"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txtDireccionLocal);

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

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 30, 301, 61));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        cmdRegistrarLocal = new QPushButton(groupBox);
        cmdRegistrarLocal->setObjectName(QString::fromUtf8("cmdRegistrarLocal"));
        cmdRegistrarLocal->setGeometry(QRect(330, 220, 80, 25));
        cmdCancelarLocal = new QPushButton(groupBox);
        cmdCancelarLocal->setObjectName(QString::fromUtf8("cmdCancelarLocal"));
        cmdCancelarLocal->setGeometry(QRect(450, 220, 80, 25));
        QWidget::setTabOrder(txtCodigoLocal, txtDireccionLocal);
        QWidget::setTabOrder(txtDireccionLocal, cmdHabilitarLocal);
        QWidget::setTabOrder(cmdHabilitarLocal, cmdInhabilitarLocal);
        QWidget::setTabOrder(cmdInhabilitarLocal, cmdRegistrarLocal);
        QWidget::setTabOrder(cmdRegistrarLocal, cmdCancelarLocal);

        retranslateUi(registroLocalGUI);

        QMetaObject::connectSlotsByName(registroLocalGUI);
    } // setupUi

    void retranslateUi(QDialog *registroLocalGUI)
    {
        registroLocalGUI->setWindowTitle(QApplication::translate("registroLocalGUI", "Registro de Local", nullptr));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("registroLocalGUI", "Codigo de Local:", nullptr));
        label_3->setText(QApplication::translate("registroLocalGUI", "Direcci\303\263n de Local:", nullptr));
        label_4->setText(QApplication::translate("registroLocalGUI", "Estado del Local:", nullptr));
        cmdHabilitarLocal->setText(QApplication::translate("registroLocalGUI", "Habilitado", nullptr));
        cmdInhabilitarLocal->setText(QApplication::translate("registroLocalGUI", "Inhabilitado", nullptr));
        label_2->setText(QApplication::translate("registroLocalGUI", "REGISTRO DE LOCAL DE VACUNACI\303\223N", nullptr));
        cmdRegistrarLocal->setText(QApplication::translate("registroLocalGUI", "Registrar", nullptr));
        cmdCancelarLocal->setText(QApplication::translate("registroLocalGUI", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registroLocalGUI: public Ui_registroLocalGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTROLOCALGUI_H
