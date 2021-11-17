/********************************************************************************
** Form generated from reading UI file 'habilitarinhabilitarlocalgui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HABILITARINHABILITARLOCALGUI_H
#define UI_HABILITARINHABILITARLOCALGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_habilitarInhabilitarLocalGUI
{
public:
    QScrollBar *verticalScrollBar;
    QPushButton *cmdAceptar;
    QPushButton *cmdCancelar;
    QTableView *tableViewListaLocalesHaIn;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *txtElegirLocal;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *habilitarInhabilitarLocalGUI)
    {
        if (habilitarInhabilitarLocalGUI->objectName().isEmpty())
            habilitarInhabilitarLocalGUI->setObjectName(QString::fromUtf8("habilitarInhabilitarLocalGUI"));
        habilitarInhabilitarLocalGUI->resize(774, 445);
        verticalScrollBar = new QScrollBar(habilitarInhabilitarLocalGUI);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(710, 90, 20, 191));
        verticalScrollBar->setOrientation(Qt::Vertical);
        cmdAceptar = new QPushButton(habilitarInhabilitarLocalGUI);
        cmdAceptar->setObjectName(QString::fromUtf8("cmdAceptar"));
        cmdAceptar->setGeometry(QRect(510, 380, 71, 21));
        QFont font;
        font.setPointSize(8);
        cmdAceptar->setFont(font);
        cmdCancelar = new QPushButton(habilitarInhabilitarLocalGUI);
        cmdCancelar->setObjectName(QString::fromUtf8("cmdCancelar"));
        cmdCancelar->setGeometry(QRect(640, 380, 71, 21));
        cmdCancelar->setFont(font);
        tableViewListaLocalesHaIn = new QTableView(habilitarInhabilitarLocalGUI);
        tableViewListaLocalesHaIn->setObjectName(QString::fromUtf8("tableViewListaLocalesHaIn"));
        tableViewListaLocalesHaIn->setGeometry(QRect(30, 80, 711, 231));
        formLayoutWidget = new QWidget(habilitarInhabilitarLocalGUI);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 330, 201, 41));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        txtElegirLocal = new QLineEdit(formLayoutWidget);
        txtElegirLocal->setObjectName(QString::fromUtf8("txtElegirLocal"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtElegirLocal);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label = new QLabel(habilitarInhabilitarLocalGUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 40, 291, 21));
        label->setFont(font1);
        QWidget::setTabOrder(tableViewListaLocalesHaIn, txtElegirLocal);
        QWidget::setTabOrder(txtElegirLocal, cmdAceptar);
        QWidget::setTabOrder(cmdAceptar, cmdCancelar);

        retranslateUi(habilitarInhabilitarLocalGUI);

        QMetaObject::connectSlotsByName(habilitarInhabilitarLocalGUI);
    } // setupUi

    void retranslateUi(QDialog *habilitarInhabilitarLocalGUI)
    {
        habilitarInhabilitarLocalGUI->setWindowTitle(QApplication::translate("habilitarInhabilitarLocalGUI", "Habilitar o Inhabilitar un Local", nullptr));
        cmdAceptar->setText(QApplication::translate("habilitarInhabilitarLocalGUI", "Aceptar", nullptr));
        cmdCancelar->setText(QApplication::translate("habilitarInhabilitarLocalGUI", "Cancelar", nullptr));
        label_2->setText(QApplication::translate("habilitarInhabilitarLocalGUI", "Elija un Local:", nullptr));
        label->setText(QApplication::translate("habilitarInhabilitarLocalGUI", "HABILITAR/INHABILITAR LOCAL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class habilitarInhabilitarLocalGUI: public Ui_habilitarInhabilitarLocalGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HABILITARINHABILITARLOCALGUI_H
