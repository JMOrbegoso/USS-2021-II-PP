/********************************************************************************
** Form generated from reading UI file 'buscaratendidogui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCARATENDIDOGUI_H
#define UI_BUSCARATENDIDOGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_buscarAtendidoGUI
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QColumnView *columnView;
    QPushButton *pushButton_2;

    void setupUi(QDialog *buscarAtendidoGUI)
    {
        if (buscarAtendidoGUI->objectName().isEmpty())
            buscarAtendidoGUI->setObjectName(QString::fromUtf8("buscarAtendidoGUI"));
        buscarAtendidoGUI->resize(649, 341);
        label = new QLabel(buscarAtendidoGUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 20, 231, 16));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        formLayoutWidget = new QWidget(buscarAtendidoGUI);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 50, 221, 21));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        pushButton = new QPushButton(buscarAtendidoGUI);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 50, 80, 21));
        columnView = new QColumnView(buscarAtendidoGUI);
        columnView->setObjectName(QString::fromUtf8("columnView"));
        columnView->setGeometry(QRect(20, 80, 601, 192));
        pushButton_2 = new QPushButton(buscarAtendidoGUI);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(540, 290, 80, 21));

        retranslateUi(buscarAtendidoGUI);

        QMetaObject::connectSlotsByName(buscarAtendidoGUI);
    } // setupUi

    void retranslateUi(QDialog *buscarAtendidoGUI)
    {
        buscarAtendidoGUI->setWindowTitle(QApplication::translate("buscarAtendidoGUI", "Buscar Paciente Atendido", nullptr));
        label->setText(QApplication::translate("buscarAtendidoGUI", "BUSCAR PACIENTE ATENDIDO", nullptr));
        label_2->setText(QApplication::translate("buscarAtendidoGUI", "Buscar:", nullptr));
        pushButton->setText(QApplication::translate("buscarAtendidoGUI", "Buscar", nullptr));
        pushButton_2->setText(QApplication::translate("buscarAtendidoGUI", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buscarAtendidoGUI: public Ui_buscarAtendidoGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCARATENDIDOGUI_H
