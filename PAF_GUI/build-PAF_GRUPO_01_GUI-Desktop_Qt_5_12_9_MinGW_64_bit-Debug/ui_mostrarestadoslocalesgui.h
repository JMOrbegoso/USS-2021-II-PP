/********************************************************************************
** Form generated from reading UI file 'mostrarestadoslocalesgui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSTRARESTADOSLOCALESGUI_H
#define UI_MOSTRARESTADOSLOCALESGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollBar>

QT_BEGIN_NAMESPACE

class Ui_mostrarEstadosLocalesGUI
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QColumnView *columnViewListaLocalesInHa;
    QScrollBar *verticalScrollBar;

    void setupUi(QDialog *mostrarEstadosLocalesGUI)
    {
        if (mostrarEstadosLocalesGUI->objectName().isEmpty())
            mostrarEstadosLocalesGUI->setObjectName(QString::fromUtf8("mostrarEstadosLocalesGUI"));
        mostrarEstadosLocalesGUI->resize(822, 519);
        label = new QLabel(mostrarEstadosLocalesGUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 30, 591, 16));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        groupBox = new QGroupBox(mostrarEstadosLocalesGUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 60, 781, 421));
        columnViewListaLocalesInHa = new QColumnView(groupBox);
        columnViewListaLocalesInHa->setObjectName(QString::fromUtf8("columnViewListaLocalesInHa"));
        columnViewListaLocalesInHa->setGeometry(QRect(20, 20, 741, 381));
        verticalScrollBar = new QScrollBar(groupBox);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(730, 40, 20, 341));
        verticalScrollBar->setOrientation(Qt::Vertical);

        retranslateUi(mostrarEstadosLocalesGUI);

        QMetaObject::connectSlotsByName(mostrarEstadosLocalesGUI);
    } // setupUi

    void retranslateUi(QDialog *mostrarEstadosLocalesGUI)
    {
        mostrarEstadosLocalesGUI->setWindowTitle(QApplication::translate("mostrarEstadosLocalesGUI", "Lista de Locales Habilitados/Inhabilitados", nullptr));
        label->setText(QApplication::translate("mostrarEstadosLocalesGUI", "LISTA DE LOCALES REGISTRADOS HABILITADOS/INHABILITADOS", nullptr));
        groupBox->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class mostrarEstadosLocalesGUI: public Ui_mostrarEstadosLocalesGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRARESTADOSLOCALESGUI_H
