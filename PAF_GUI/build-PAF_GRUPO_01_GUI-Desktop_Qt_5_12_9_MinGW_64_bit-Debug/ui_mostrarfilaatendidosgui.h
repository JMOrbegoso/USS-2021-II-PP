/********************************************************************************
** Form generated from reading UI file 'mostrarfilaatendidosgui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSTRARFILAATENDIDOSGUI_H
#define UI_MOSTRARFILAATENDIDOSGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>

QT_BEGIN_NAMESPACE

class Ui_mostrarFilaAtendidosGUI
{
public:
    QLabel *label;
    QColumnView *columnView;
    QScrollBar *verticalScrollBar;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *mostrarFilaAtendidosGUI)
    {
        if (mostrarFilaAtendidosGUI->objectName().isEmpty())
            mostrarFilaAtendidosGUI->setObjectName(QString::fromUtf8("mostrarFilaAtendidosGUI"));
        mostrarFilaAtendidosGUI->resize(652, 379);
        label = new QLabel(mostrarFilaAtendidosGUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 20, 261, 16));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        columnView = new QColumnView(mostrarFilaAtendidosGUI);
        columnView->setObjectName(QString::fromUtf8("columnView"));
        columnView->setGeometry(QRect(20, 50, 611, 271));
        verticalScrollBar = new QScrollBar(mostrarFilaAtendidosGUI);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(610, 60, 16, 251));
        verticalScrollBar->setOrientation(Qt::Vertical);
        pushButton = new QPushButton(mostrarFilaAtendidosGUI);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 340, 91, 21));
        pushButton_2 = new QPushButton(mostrarFilaAtendidosGUI);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(550, 340, 80, 21));

        retranslateUi(mostrarFilaAtendidosGUI);

        QMetaObject::connectSlotsByName(mostrarFilaAtendidosGUI);
    } // setupUi

    void retranslateUi(QDialog *mostrarFilaAtendidosGUI)
    {
        mostrarFilaAtendidosGUI->setWindowTitle(QApplication::translate("mostrarFilaAtendidosGUI", "Mostrar Fila de Atendidos", nullptr));
        label->setText(QApplication::translate("mostrarFilaAtendidosGUI", "LISTA DE PACIENTES ATENDIDOS", nullptr));
        pushButton->setText(QApplication::translate("mostrarFilaAtendidosGUI", "Atender Paciente", nullptr));
        pushButton_2->setText(QApplication::translate("mostrarFilaAtendidosGUI", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mostrarFilaAtendidosGUI: public Ui_mostrarFilaAtendidosGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRARFILAATENDIDOSGUI_H
