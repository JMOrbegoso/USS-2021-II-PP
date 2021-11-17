/********************************************************************************
** Form generated from reading UI file 'mostrarlotesgui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSTRARLOTESGUI_H
#define UI_MOSTRARLOTESGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_mostrarLotesGUI
{
public:
    QGroupBox *groupBox;
    QTableView *tableViewListaLotesRegistrados;
    QScrollBar *verticalScrollBar;
    QLabel *label;

    void setupUi(QDialog *mostrarLotesGUI)
    {
        if (mostrarLotesGUI->objectName().isEmpty())
            mostrarLotesGUI->setObjectName(QString::fromUtf8("mostrarLotesGUI"));
        mostrarLotesGUI->resize(814, 477);
        groupBox = new QGroupBox(mostrarLotesGUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 791, 441));
        tableViewListaLotesRegistrados = new QTableView(groupBox);
        tableViewListaLotesRegistrados->setObjectName(QString::fromUtf8("tableViewListaLotesRegistrados"));
        tableViewListaLotesRegistrados->setGeometry(QRect(20, 80, 751, 341));
        verticalScrollBar = new QScrollBar(groupBox);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(740, 100, 16, 301));
        verticalScrollBar->setOrientation(Qt::Vertical);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 30, 291, 16));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        retranslateUi(mostrarLotesGUI);

        QMetaObject::connectSlotsByName(mostrarLotesGUI);
    } // setupUi

    void retranslateUi(QDialog *mostrarLotesGUI)
    {
        mostrarLotesGUI->setWindowTitle(QApplication::translate("mostrarLotesGUI", "Lista de Lotes", nullptr));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("mostrarLotesGUI", "LISTA DE LOTES REGISTRADOS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mostrarLotesGUI: public Ui_mostrarLotesGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRARLOTESGUI_H
