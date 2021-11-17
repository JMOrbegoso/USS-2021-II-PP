/********************************************************************************
** Form generated from reading UI file 'mostrarlocalesgui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSTRARLOCALESGUI_H
#define UI_MOSTRARLOCALESGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollBar>

QT_BEGIN_NAMESPACE

class Ui_mostrarLocalesGUI
{
public:
    QGroupBox *groupBox;
    QColumnView *columnView;
    QScrollBar *verticalScrollBar;
    QLabel *label;

    void setupUi(QDialog *mostrarLocalesGUI)
    {
        if (mostrarLocalesGUI->objectName().isEmpty())
            mostrarLocalesGUI->setObjectName(QString::fromUtf8("mostrarLocalesGUI"));
        mostrarLocalesGUI->resize(765, 451);
        groupBox = new QGroupBox(mostrarLocalesGUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 50, 741, 381));
        columnView = new QColumnView(groupBox);
        columnView->setObjectName(QString::fromUtf8("columnView"));
        columnView->setGeometry(QRect(10, 20, 721, 351));
        verticalScrollBar = new QScrollBar(groupBox);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(710, 30, 16, 331));
        verticalScrollBar->setOrientation(Qt::Vertical);
        label = new QLabel(mostrarLocalesGUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 20, 281, 16));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);

        retranslateUi(mostrarLocalesGUI);

        QMetaObject::connectSlotsByName(mostrarLocalesGUI);
    } // setupUi

    void retranslateUi(QDialog *mostrarLocalesGUI)
    {
        mostrarLocalesGUI->setWindowTitle(QApplication::translate("mostrarLocalesGUI", "Lista de Locales Registrados", nullptr));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("mostrarLocalesGUI", "LISTA DE LOCALES REGISTRADOS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mostrarLocalesGUI: public Ui_mostrarLocalesGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRARLOCALESGUI_H
