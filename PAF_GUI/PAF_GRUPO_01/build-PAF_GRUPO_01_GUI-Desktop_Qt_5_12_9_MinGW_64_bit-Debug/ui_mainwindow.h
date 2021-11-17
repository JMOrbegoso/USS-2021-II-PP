/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRegistrar_Local;
    QAction *actionMostrar_Locales;
    QAction *actionEditar_Local;
    QAction *actionMostrar_Locales_Habilitados_Desabilitados;
    QAction *actionHabilitar_Desabilitar;
    QAction *actionBuscar_Local_Registrado;
    QAction *actionEnfermeras;
    QAction *actionPacientes;
    QAction *actionDoctores;
    QAction *actionLotes;
    QAction *actionRegistrar_Almacen;
    QAction *actionMostrar_Almacenes;
    QAction *actionEditar_Almacen;
    QAction *actionMostrar_Almacen_Habilitados_Deshabilitados;
    QAction *actionHabilitar_Deshabilitar_Almacen;
    QAction *actionBuscar_Almacen;
    QAction *actionAdministrar_Lotes;
    QAction *actionRegistrar_Lote;
    QAction *actionMostrar_Lotes;
    QAction *actionEditar_Lote;
    QAction *actionBuscar_Lote;
    QAction *actionRegistrar_Medico;
    QAction *actionMostrar_Medico;
    QAction *actionEditar_Medico;
    QAction *actionBuscar_Medico;
    QAction *actionMostrar_Medicos_Activos_Inactivos;
    QAction *actionAsignar_Medico;
    QAction *actionRegistrar_Enfermera;
    QAction *actionMostrar_Enfermeras;
    QAction *actionEditar_Enfermera;
    QAction *actionMostrar_Enfermeras_Activas_Inactivas;
    QAction *actionAsignar_Enfermera;
    QAction *actionRegistrar_Cola_de_Pacientes;
    QAction *actionMostrar_fila_de_Pacientes;
    QAction *actionBuscar_Paciente_en_Fila;
    QAction *actionAtender_Paciente;
    QAction *actionMostrar_Pacientes_Atendidos;
    QAction *actionBuscar_Paciente_Atendido;
    QAction *actionAcerca_de;
    QWidget *centralwidget;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuLocales;
    QMenu *menuMostrar_Detalle_del_Local;
    QMenu *menuAlmacen;
    QMenu *menuLotes;
    QMenu *menuPersonal;
    QMenu *menuMedico;
    QMenu *menuEnfermera;
    QMenu *menuPacientes;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionRegistrar_Local = new QAction(MainWindow);
        actionRegistrar_Local->setObjectName(QString::fromUtf8("actionRegistrar_Local"));
        actionMostrar_Locales = new QAction(MainWindow);
        actionMostrar_Locales->setObjectName(QString::fromUtf8("actionMostrar_Locales"));
        actionEditar_Local = new QAction(MainWindow);
        actionEditar_Local->setObjectName(QString::fromUtf8("actionEditar_Local"));
        actionMostrar_Locales_Habilitados_Desabilitados = new QAction(MainWindow);
        actionMostrar_Locales_Habilitados_Desabilitados->setObjectName(QString::fromUtf8("actionMostrar_Locales_Habilitados_Desabilitados"));
        actionHabilitar_Desabilitar = new QAction(MainWindow);
        actionHabilitar_Desabilitar->setObjectName(QString::fromUtf8("actionHabilitar_Desabilitar"));
        actionBuscar_Local_Registrado = new QAction(MainWindow);
        actionBuscar_Local_Registrado->setObjectName(QString::fromUtf8("actionBuscar_Local_Registrado"));
        actionEnfermeras = new QAction(MainWindow);
        actionEnfermeras->setObjectName(QString::fromUtf8("actionEnfermeras"));
        actionPacientes = new QAction(MainWindow);
        actionPacientes->setObjectName(QString::fromUtf8("actionPacientes"));
        actionDoctores = new QAction(MainWindow);
        actionDoctores->setObjectName(QString::fromUtf8("actionDoctores"));
        actionLotes = new QAction(MainWindow);
        actionLotes->setObjectName(QString::fromUtf8("actionLotes"));
        actionRegistrar_Almacen = new QAction(MainWindow);
        actionRegistrar_Almacen->setObjectName(QString::fromUtf8("actionRegistrar_Almacen"));
        actionMostrar_Almacenes = new QAction(MainWindow);
        actionMostrar_Almacenes->setObjectName(QString::fromUtf8("actionMostrar_Almacenes"));
        actionEditar_Almacen = new QAction(MainWindow);
        actionEditar_Almacen->setObjectName(QString::fromUtf8("actionEditar_Almacen"));
        actionMostrar_Almacen_Habilitados_Deshabilitados = new QAction(MainWindow);
        actionMostrar_Almacen_Habilitados_Deshabilitados->setObjectName(QString::fromUtf8("actionMostrar_Almacen_Habilitados_Deshabilitados"));
        actionHabilitar_Deshabilitar_Almacen = new QAction(MainWindow);
        actionHabilitar_Deshabilitar_Almacen->setObjectName(QString::fromUtf8("actionHabilitar_Deshabilitar_Almacen"));
        actionBuscar_Almacen = new QAction(MainWindow);
        actionBuscar_Almacen->setObjectName(QString::fromUtf8("actionBuscar_Almacen"));
        actionAdministrar_Lotes = new QAction(MainWindow);
        actionAdministrar_Lotes->setObjectName(QString::fromUtf8("actionAdministrar_Lotes"));
        actionRegistrar_Lote = new QAction(MainWindow);
        actionRegistrar_Lote->setObjectName(QString::fromUtf8("actionRegistrar_Lote"));
        actionMostrar_Lotes = new QAction(MainWindow);
        actionMostrar_Lotes->setObjectName(QString::fromUtf8("actionMostrar_Lotes"));
        actionEditar_Lote = new QAction(MainWindow);
        actionEditar_Lote->setObjectName(QString::fromUtf8("actionEditar_Lote"));
        actionBuscar_Lote = new QAction(MainWindow);
        actionBuscar_Lote->setObjectName(QString::fromUtf8("actionBuscar_Lote"));
        actionRegistrar_Medico = new QAction(MainWindow);
        actionRegistrar_Medico->setObjectName(QString::fromUtf8("actionRegistrar_Medico"));
        actionMostrar_Medico = new QAction(MainWindow);
        actionMostrar_Medico->setObjectName(QString::fromUtf8("actionMostrar_Medico"));
        actionEditar_Medico = new QAction(MainWindow);
        actionEditar_Medico->setObjectName(QString::fromUtf8("actionEditar_Medico"));
        actionBuscar_Medico = new QAction(MainWindow);
        actionBuscar_Medico->setObjectName(QString::fromUtf8("actionBuscar_Medico"));
        actionMostrar_Medicos_Activos_Inactivos = new QAction(MainWindow);
        actionMostrar_Medicos_Activos_Inactivos->setObjectName(QString::fromUtf8("actionMostrar_Medicos_Activos_Inactivos"));
        actionAsignar_Medico = new QAction(MainWindow);
        actionAsignar_Medico->setObjectName(QString::fromUtf8("actionAsignar_Medico"));
        actionRegistrar_Enfermera = new QAction(MainWindow);
        actionRegistrar_Enfermera->setObjectName(QString::fromUtf8("actionRegistrar_Enfermera"));
        actionMostrar_Enfermeras = new QAction(MainWindow);
        actionMostrar_Enfermeras->setObjectName(QString::fromUtf8("actionMostrar_Enfermeras"));
        actionEditar_Enfermera = new QAction(MainWindow);
        actionEditar_Enfermera->setObjectName(QString::fromUtf8("actionEditar_Enfermera"));
        actionMostrar_Enfermeras_Activas_Inactivas = new QAction(MainWindow);
        actionMostrar_Enfermeras_Activas_Inactivas->setObjectName(QString::fromUtf8("actionMostrar_Enfermeras_Activas_Inactivas"));
        actionAsignar_Enfermera = new QAction(MainWindow);
        actionAsignar_Enfermera->setObjectName(QString::fromUtf8("actionAsignar_Enfermera"));
        actionRegistrar_Cola_de_Pacientes = new QAction(MainWindow);
        actionRegistrar_Cola_de_Pacientes->setObjectName(QString::fromUtf8("actionRegistrar_Cola_de_Pacientes"));
        actionMostrar_fila_de_Pacientes = new QAction(MainWindow);
        actionMostrar_fila_de_Pacientes->setObjectName(QString::fromUtf8("actionMostrar_fila_de_Pacientes"));
        actionBuscar_Paciente_en_Fila = new QAction(MainWindow);
        actionBuscar_Paciente_en_Fila->setObjectName(QString::fromUtf8("actionBuscar_Paciente_en_Fila"));
        actionAtender_Paciente = new QAction(MainWindow);
        actionAtender_Paciente->setObjectName(QString::fromUtf8("actionAtender_Paciente"));
        actionMostrar_Pacientes_Atendidos = new QAction(MainWindow);
        actionMostrar_Pacientes_Atendidos->setObjectName(QString::fromUtf8("actionMostrar_Pacientes_Atendidos"));
        actionBuscar_Paciente_Atendido = new QAction(MainWindow);
        actionBuscar_Paciente_Atendido->setObjectName(QString::fromUtf8("actionBuscar_Paciente_Atendido"));
        actionAcerca_de = new QAction(MainWindow);
        actionAcerca_de->setObjectName(QString::fromUtf8("actionAcerca_de"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuLocales = new QMenu(menubar);
        menuLocales->setObjectName(QString::fromUtf8("menuLocales"));
        menuMostrar_Detalle_del_Local = new QMenu(menuLocales);
        menuMostrar_Detalle_del_Local->setObjectName(QString::fromUtf8("menuMostrar_Detalle_del_Local"));
        menuAlmacen = new QMenu(menubar);
        menuAlmacen->setObjectName(QString::fromUtf8("menuAlmacen"));
        menuLotes = new QMenu(menubar);
        menuLotes->setObjectName(QString::fromUtf8("menuLotes"));
        menuPersonal = new QMenu(menubar);
        menuPersonal->setObjectName(QString::fromUtf8("menuPersonal"));
        menuMedico = new QMenu(menuPersonal);
        menuMedico->setObjectName(QString::fromUtf8("menuMedico"));
        menuEnfermera = new QMenu(menuPersonal);
        menuEnfermera->setObjectName(QString::fromUtf8("menuEnfermera"));
        menuPacientes = new QMenu(menubar);
        menuPacientes->setObjectName(QString::fromUtf8("menuPacientes"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuLocales->menuAction());
        menubar->addAction(menuAlmacen->menuAction());
        menubar->addAction(menuLotes->menuAction());
        menubar->addAction(menuPersonal->menuAction());
        menubar->addAction(menuPacientes->menuAction());
        menuLocales->addAction(actionRegistrar_Local);
        menuLocales->addAction(actionMostrar_Locales);
        menuLocales->addAction(actionEditar_Local);
        menuLocales->addAction(actionMostrar_Locales_Habilitados_Desabilitados);
        menuLocales->addAction(actionHabilitar_Desabilitar);
        menuLocales->addAction(actionBuscar_Local_Registrado);
        menuLocales->addSeparator();
        menuLocales->addAction(menuMostrar_Detalle_del_Local->menuAction());
        menuMostrar_Detalle_del_Local->addAction(actionEnfermeras);
        menuMostrar_Detalle_del_Local->addAction(actionPacientes);
        menuMostrar_Detalle_del_Local->addAction(actionDoctores);
        menuMostrar_Detalle_del_Local->addAction(actionLotes);
        menuMostrar_Detalle_del_Local->addSeparator();
        menuAlmacen->addAction(actionRegistrar_Almacen);
        menuAlmacen->addAction(actionMostrar_Almacenes);
        menuAlmacen->addAction(actionEditar_Almacen);
        menuAlmacen->addAction(actionMostrar_Almacen_Habilitados_Deshabilitados);
        menuAlmacen->addAction(actionHabilitar_Deshabilitar_Almacen);
        menuAlmacen->addAction(actionBuscar_Almacen);
        menuAlmacen->addSeparator();
        menuAlmacen->addAction(actionAdministrar_Lotes);
        menuLotes->addAction(actionRegistrar_Lote);
        menuLotes->addAction(actionMostrar_Lotes);
        menuLotes->addAction(actionEditar_Lote);
        menuLotes->addAction(actionBuscar_Lote);
        menuPersonal->addAction(menuMedico->menuAction());
        menuPersonal->addAction(menuEnfermera->menuAction());
        menuMedico->addAction(actionRegistrar_Medico);
        menuMedico->addAction(actionMostrar_Medico);
        menuMedico->addAction(actionEditar_Medico);
        menuMedico->addAction(actionBuscar_Medico);
        menuMedico->addAction(actionMostrar_Medicos_Activos_Inactivos);
        menuMedico->addSeparator();
        menuMedico->addAction(actionAsignar_Medico);
        menuEnfermera->addAction(actionRegistrar_Enfermera);
        menuEnfermera->addAction(actionMostrar_Enfermeras);
        menuEnfermera->addAction(actionEditar_Enfermera);
        menuEnfermera->addAction(actionMostrar_Enfermeras_Activas_Inactivas);
        menuEnfermera->addSeparator();
        menuEnfermera->addAction(actionAsignar_Enfermera);
        menuPacientes->addAction(actionRegistrar_Cola_de_Pacientes);
        menuPacientes->addAction(actionMostrar_fila_de_Pacientes);
        menuPacientes->addAction(actionBuscar_Paciente_en_Fila);
        menuPacientes->addSeparator();
        menuPacientes->addAction(actionAtender_Paciente);
        menuPacientes->addAction(actionMostrar_Pacientes_Atendidos);
        menuPacientes->addAction(actionBuscar_Paciente_Atendido);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sistema de Vacunat\303\263n contra Dengue", nullptr));
        actionRegistrar_Local->setText(QApplication::translate("MainWindow", "Registrar Local", nullptr));
        actionMostrar_Locales->setText(QApplication::translate("MainWindow", "Mostrar Locales", nullptr));
        actionEditar_Local->setText(QApplication::translate("MainWindow", "Editar Local", nullptr));
        actionMostrar_Locales_Habilitados_Desabilitados->setText(QApplication::translate("MainWindow", "Mostrar Locales Habilitados/Deshabilitados", nullptr));
        actionHabilitar_Desabilitar->setText(QApplication::translate("MainWindow", "Habilitar/Desabilitar Local", nullptr));
        actionBuscar_Local_Registrado->setText(QApplication::translate("MainWindow", "Buscar Local", nullptr));
        actionEnfermeras->setText(QApplication::translate("MainWindow", "Enfermeras", nullptr));
        actionPacientes->setText(QApplication::translate("MainWindow", "Pacientes", nullptr));
        actionDoctores->setText(QApplication::translate("MainWindow", "Doctores", nullptr));
        actionLotes->setText(QApplication::translate("MainWindow", "Lotes", nullptr));
        actionRegistrar_Almacen->setText(QApplication::translate("MainWindow", "Registrar Almacen", nullptr));
        actionMostrar_Almacenes->setText(QApplication::translate("MainWindow", "Mostrar Almacenes", nullptr));
        actionEditar_Almacen->setText(QApplication::translate("MainWindow", "Editar Almacen", nullptr));
        actionMostrar_Almacen_Habilitados_Deshabilitados->setText(QApplication::translate("MainWindow", "Mostrar Almacen Habilitados/Deshabilitados", nullptr));
        actionHabilitar_Deshabilitar_Almacen->setText(QApplication::translate("MainWindow", "Habilitar/Deshabilitar Almacen", nullptr));
        actionBuscar_Almacen->setText(QApplication::translate("MainWindow", "Buscar Almacen", nullptr));
        actionAdministrar_Lotes->setText(QApplication::translate("MainWindow", "Administrar Lotes", nullptr));
        actionRegistrar_Lote->setText(QApplication::translate("MainWindow", "Registrar Lote", nullptr));
        actionMostrar_Lotes->setText(QApplication::translate("MainWindow", "Mostrar Lotes", nullptr));
        actionEditar_Lote->setText(QApplication::translate("MainWindow", "Editar Lote", nullptr));
        actionBuscar_Lote->setText(QApplication::translate("MainWindow", "Buscar Lote", nullptr));
        actionRegistrar_Medico->setText(QApplication::translate("MainWindow", "Registrar Medico", nullptr));
        actionMostrar_Medico->setText(QApplication::translate("MainWindow", "Mostrar Medico", nullptr));
        actionEditar_Medico->setText(QApplication::translate("MainWindow", "Editar Medico", nullptr));
        actionBuscar_Medico->setText(QApplication::translate("MainWindow", "Buscar Medico", nullptr));
        actionMostrar_Medicos_Activos_Inactivos->setText(QApplication::translate("MainWindow", "Mostrar Medicos Asignados/Libres", nullptr));
        actionAsignar_Medico->setText(QApplication::translate("MainWindow", "Asignar Medico", nullptr));
        actionRegistrar_Enfermera->setText(QApplication::translate("MainWindow", "Registrar Enfermera", nullptr));
        actionMostrar_Enfermeras->setText(QApplication::translate("MainWindow", "Mostrar Enfermeras", nullptr));
        actionEditar_Enfermera->setText(QApplication::translate("MainWindow", "Editar Enfermera", nullptr));
        actionMostrar_Enfermeras_Activas_Inactivas->setText(QApplication::translate("MainWindow", "Mostrar Enfermeras Asignadas/Libres", nullptr));
        actionAsignar_Enfermera->setText(QApplication::translate("MainWindow", "Asignar Enfermera", nullptr));
        actionRegistrar_Cola_de_Pacientes->setText(QApplication::translate("MainWindow", "Registrar Cola de Pacientes", nullptr));
        actionMostrar_fila_de_Pacientes->setText(QApplication::translate("MainWindow", "Mostrar fila de Pacientes", nullptr));
        actionBuscar_Paciente_en_Fila->setText(QApplication::translate("MainWindow", "Buscar Paciente en Fila", nullptr));
        actionAtender_Paciente->setText(QApplication::translate("MainWindow", "Atender Paciente", nullptr));
        actionMostrar_Pacientes_Atendidos->setText(QApplication::translate("MainWindow", "Mostrar Pacientes Atendidos", nullptr));
        actionBuscar_Paciente_Atendido->setText(QApplication::translate("MainWindow", "Buscar Paciente Atendido", nullptr));
        actionAcerca_de->setText(QApplication::translate("MainWindow", "Acerca de ...", nullptr));
        menuLocales->setTitle(QApplication::translate("MainWindow", "Locales", nullptr));
        menuMostrar_Detalle_del_Local->setTitle(QApplication::translate("MainWindow", "Mostrar Detalle del Local", nullptr));
        menuAlmacen->setTitle(QApplication::translate("MainWindow", "Almacen", nullptr));
        menuLotes->setTitle(QApplication::translate("MainWindow", "Lotes", nullptr));
        menuPersonal->setTitle(QApplication::translate("MainWindow", "Personal", nullptr));
        menuMedico->setTitle(QApplication::translate("MainWindow", "Medico", nullptr));
        menuEnfermera->setTitle(QApplication::translate("MainWindow", "Enfermera", nullptr));
        menuPacientes->setTitle(QApplication::translate("MainWindow", "Pacientes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
