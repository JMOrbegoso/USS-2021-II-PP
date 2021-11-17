/********************************************************************************
** Form generated from reading UI file 'aboutgui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTGUI_H
#define UI_ABOUTGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_aboutGUI
{
public:
    QLabel *label;

    void setupUi(QDialog *aboutGUI)
    {
        if (aboutGUI->objectName().isEmpty())
            aboutGUI->setObjectName(QString::fromUtf8("aboutGUI"));
        aboutGUI->resize(802, 436);
        label = new QLabel(aboutGUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 40, 401, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Footlight MT Light"));
        font.setPointSize(12);
        label->setFont(font);

        retranslateUi(aboutGUI);

        QMetaObject::connectSlotsByName(aboutGUI);
    } // setupUi

    void retranslateUi(QDialog *aboutGUI)
    {
        aboutGUI->setWindowTitle(QApplication::translate("aboutGUI", "Dialog", nullptr));
        label->setText(QApplication::translate("aboutGUI", "SISTEMA DE VACUNACI\303\223N CONTRA DENGUE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aboutGUI: public Ui_aboutGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTGUI_H
