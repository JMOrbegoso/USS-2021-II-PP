#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aboutgui.h"
#include <registrarpaciente.h>
#include <gestionarpaciente.h>
#include <gestionaratendidos.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

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
