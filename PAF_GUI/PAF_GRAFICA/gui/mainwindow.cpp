#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

#include <gui/aboutgui.h>
#include <gui/registrarpaciente.h>
#include <gui/gestionarpaciente.h>
#include <gui/gestionaratendidos.h>
#include <gui/registrarlocal.h>
#include <gui/gestionarlocal.h>
#include <gui/gestionaralmacenes.h>
#include <gui/registrarpersonalgui.h>
#include <gui/gestionarpersonalgui.h>
#include <gui/registrarlotegui.h>
#include <gui/gestionarlotegui.h>
#include <gui/atenderpaciente.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->centralWidget()->setStyleSheet("background-image:url(:/img/bg.jpg); background-position: center;");
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
    if(this->getVacunaDengue()->getLocales()->getCab() != NULL){
        registrarPaciente *regiPaciente = new registrarPaciente();
        regiPaciente->setLocales(this->getVacunaDengue()->getLocales());
        regiPaciente->listaLocalComboBox();
        regiPaciente->show();
    }else{
        QMessageBox msje;
        msje.setText("Primero Debe Registrar Locales");
        msje.exec();
        return;
    }
}

void MainWindow::on_actionGestionar_Pacientes_triggered()
{   
    if(this->getVacunaDengue()->getLocales()->getCab() != NULL){
        gestionarPaciente *gesPaciente = new gestionarPaciente();
        gesPaciente->setLocales(this->getVacunaDengue()->getLocales());
        gesPaciente->listaLocalComboBox();
        gesPaciente->show();
    }else{
        QMessageBox msje;
        msje.setText("Primero Debe Registrar Locales");
        msje.exec();
        return;
    }
}

void MainWindow::on_actionGestionar_Atenci_n_triggered()
{
    gestionarAtendidos *gesAtendido = new gestionarAtendidos();
    gesAtendido->show();
}

void MainWindow::on_actionRegistrar_local_triggered()
{
    registrarLocal *regLocal = new registrarLocal();
    regLocal->setLocales(this->getVacunaDengue()->getLocales());
    regLocal->show();
}

void MainWindow::on_actionGestionar_locales_triggered()
{
    gestionarLocal *gesLocal = new gestionarLocal();
    gesLocal->setListLocales(this->getVacunaDengue()->getLocales());
    gesLocal->show();
}

void MainWindow::on_actionGestionar_Almacenes_triggered()
{
    gestionarAlmacenes *gest = new gestionarAlmacenes();
    gest->show();
}


void MainWindow::on_actionRegistrar_Personal_M_dico_triggered()
{
    if(this->getVacunaDengue()->getLocales()->getCab() != NULL){
        registrarPersonalGui *reg = new registrarPersonalGui();
        reg->setListLocales(this->getVacunaDengue()->getLocales());
        reg->addListLocalComBox();
        reg->show();
    }else{
        QMessageBox msje;
        msje.setText("Primero registre locales");
        msje.exec();
        return;
    }
}


void MainWindow::on_actionGestionar_Personal_M_dico_triggered()
{
    if(this->getVacunaDengue()->getLocales()->getCab() != NULL){
        gestionarPersonalGui *gest = new gestionarPersonalGui();
        gest->setLocales(this->getVacunaDengue()->getLocales());
        gest->addListLocalComBox();
        gest->show();
    }else{
        QMessageBox msje;
        msje.setText("Primero registre locales");
        msje.exec();
        return;
    }
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


void MainWindow::on_actionAtender_Paciente_triggered()
{
    if(this->getVacunaDengue()->getLocales()->getCab() != NULL){
        atenderPaciente *atePaciente = new atenderPaciente();
        atePaciente->setLocales(this->getVacunaDengue()->getLocales());
        atePaciente->listaLocalComboBox();
        atePaciente->show();
    }else{
        QMessageBox msje;
        msje.setText("Primero Debe Registrar Locales");
        msje.exec();
        return;
    }
}

vacunatonContraDengueClass *MainWindow::getVacunaDengue() const
{
    return this->vacunaDengue;
}

void MainWindow::setVacunaDengue(vacunatonContraDengueClass *value)
{
    this->vacunaDengue = value;
}

void MainWindow::on_actionSalir_triggered()
{
    QMessageBox::StandardButton resBtn;
    resBtn = QMessageBox::question(this, "Cerrar programa", "¿Está seguro?", QMessageBox::Cancel | QMessageBox::Yes);

    if (resBtn == QMessageBox::Yes)
        this->close();
}
