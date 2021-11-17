/********************************************************************************
** Form generated from reading UI file 'atenderpacientegui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATENDERPACIENTEGUI_H
#define UI_ATENDERPACIENTEGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_atenderPacienteGUI
{
public:
    QLabel *label;
    QColumnView *columnView;
    QScrollBar *verticalScrollBar;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *atenderPacienteGUI)
    {
        if (atenderPacienteGUI->objectName().isEmpty())
            atenderPacienteGUI->setObjectName(QString::fromUtf8("atenderPacienteGUI"));
        atenderPacienteGUI->resize(638, 410);
        label = new QLabel(atenderPacienteGUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 20, 241, 16));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        columnView = new QColumnView(atenderPacienteGUI);
        columnView->setObjectName(QString::fromUtf8("columnView"));
        columnView->setGeometry(QRect(20, 50, 591, 192));
        verticalScrollBar = new QScrollBar(atenderPacienteGUI);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(590, 60, 16, 171));
        verticalScrollBar->setOrientation(Qt::Vertical);
        formLayoutWidget = new QWidget(atenderPacienteGUI);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(350, 260, 151, 31));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        pushButton = new QPushButton(atenderPacienteGUI);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(420, 310, 80, 21));
        pushButton_2 = new QPushButton(atenderPacienteGUI);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 310, 80, 21));

        retranslateUi(atenderPacienteGUI);

        QMetaObject::connectSlotsByName(atenderPacienteGUI);
    } // setupUi

    void retranslateUi(QDialog *atenderPacienteGUI)
    {
        atenderPacienteGUI->setWindowTitle(QApplication::translate("atenderPacienteGUI", "atenderPaciente", nullptr));
        label->setText(QApplication::translate("atenderPacienteGUI", "ATENDER PACIENTES EN FILA", nullptr));
        label_2->setText(QApplication::translate("atenderPacienteGUI", "Elija el Paciente:", nullptr));
        pushButton->setText(QApplication::translate("atenderPacienteGUI", "Atender", nullptr));
        pushButton_2->setText(QApplication::translate("atenderPacienteGUI", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class atenderPacienteGUI: public Ui_atenderPacienteGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATENDERPACIENTEGUI_H
