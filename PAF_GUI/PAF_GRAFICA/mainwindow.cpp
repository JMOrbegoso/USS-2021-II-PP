#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aboutgui.h"
#include <registrarpaciente.h>
#include <gestionarpaciente.h>
#include <gestionaratendidos.h>
#include <registrarlocal.h>
#include <gestionarlocal.h>
#include <registraralmacen.h>
#include <gestionaralmacenes.h>
#include <registrarpersonalgui.h>
#include <gestionarpersonalgui.h>
#include <registrarlotegui.h>
#include <gestionarlotegui.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

listaLocalesClass *locales = new listaLocalesClass();

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAcerca_de_triggered()
{
    aboutGui *about = new aboutGui();
    about->show();
}

void MainWindow::on_actionRegistrar_Paciente_triggered()
{
    registrarPaciente *regiPaciente = new registrarPaciente();
    regiPaciente->show();
}

void MainWindow::on_actionGestionar_Pacientes_triggered()
{
    gestionarPaciente *gesPaciente = new gestionarPaciente();
    gesPaciente->show();
}

void MainWindow::on_actionGestionar_Atenci_n_triggered()
{
    gestionarAtendidos *gesAtendido = new gestionarAtendidos();
    gesAtendido->show();
}

void MainWindow::on_actionRegistrar_local_triggered()
{
    registrarLocal *regLocal = new registrarLocal(locales);
    regLocal->show();
}

void MainWindow::on_actionGestionar_locales_triggered()
{
    gestionarLocal *gesLocal = new gestionarLocal(locales);
    gesLocal->show();
}

void MainWindow::on_actionRegistrar_Almacen_triggered()
{
    registrarAlmacen *reg = new registrarAlmacen();
    reg->show();
}


void MainWindow::on_actionGestionar_Almacenes_triggered()
{
    gestionarAlmacenes *gest = new gestionarAlmacenes();
    gest->show();
}


void MainWindow::on_actionRegistrar_Personal_M_dico_triggered()
{
    registrarPersonalGui *reg = new registrarPersonalGui();
    reg->show();
}


void MainWindow::on_actionGestionar_Personal_M_dico_triggered()
{
    gestionarPersonalGui *gest = new gestionarPersonalGui();
    gest->show();
}


void MainWindow::on_actionRegistrar_Lote_triggered()
{
    registrarLoteGui *reg = new registrarLoteGui();
    reg->show();
}


void MainWindow::on_actionGestionar_Lotes_triggered()
{
    gestionarLoteGui *gest = new gestionarLoteGui();
    gest->show();
}

