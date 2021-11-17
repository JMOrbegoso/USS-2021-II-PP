#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <registrolocalgui.h>
#include <editarlocalgui.h>
#include <mostrarestadoslocalesgui.h>
#include <habilitarinhabilitarlocalgui.h>
#include <buscarlocalgui.h>
#include <registrarlotegui.h>
#include <mostrarlotesgui.h>
#include <editarlotegui.h>
#include <buscarlotegui.h>
#include <mostrarlocalesgui.h>
#include <registrarcolapacientesgui.h>
#include <mostrarfilapacientesgui.h>
#include <buscarpacientegui.h>
#include <atenderpacientegui.h>
#include <mostrarfilaatendidosgui.h>
#include <buscaratendidogui.h>
#include <mostrardetalleslocalenfermeras.h>
#include <registroalmacengui.h>
#include <mostraralmacenesgui.h>
#include <mostrardetalleslocaldoctores.h>
#include <mostrardetalleslocallotes.h>
#include <mostrardetalleslocalpacientes.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->showMaximized();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionRegistrar_Local_triggered()
{
    registroLocalGUI *regLocal = new registroLocalGUI();
    regLocal->show();
}

void MainWindow::on_actionRegistrar_Almacen_triggered()
{
    registroAlmacenGui *regAlmacen = new registroAlmacenGui();
    regAlmacen->show();
}

void MainWindow::on_actionMostrar_Almacenes_triggered(){
    mostrarAlmacenesGui *mostrarAlmacenes = new mostrarAlmacenesGui();
    mostrarAlmacenes->show();
}

void MainWindow::on_actionEditar_Local_triggered()
{
    editarLocalGUI *editLocal = new editarLocalGUI();
    editLocal->show();
}

void MainWindow::on_actionMostrar_Locales_Habilitados_Desabilitados_triggered()
{
    mostrarEstadosLocalesGUI *mosEstLocales = new mostrarEstadosLocalesGUI();
    mosEstLocales->show();
}

void MainWindow::on_actionHabilitar_Desabilitar_triggered()
{
    habilitarInhabilitarLocalGUI *haInLocal = new habilitarInhabilitarLocalGUI();
    haInLocal->show();
}

void MainWindow::on_actionBuscar_Local_Registrado_triggered()
{
    buscarLocalGUI *busLocal = new buscarLocalGUI();
    busLocal->show();
}

void MainWindow::on_actionRegistrar_Lote_triggered()
{
    registrarLoteGUI *regisLote = new registrarLoteGUI();
    regisLote->show();
}

void MainWindow::on_actionMostrar_Lotes_triggered()
{
    mostrarLotesGUI *mosLotes = new mostrarLotesGUI();
    mosLotes->show();
}

void MainWindow::on_actionEditar_Lote_triggered()
{
    editarLoteGUI *editLote = new editarLoteGUI();
    editLote->show();
}

void MainWindow::on_actionBuscar_Lote_triggered()
{
    buscarLoteGUI *busLote = new buscarLoteGUI();
    busLote->show();
}

void MainWindow::on_actionMostrar_Locales_triggered()
{
    mostrarLocalesGUI *mosLocales = new mostrarLocalesGUI();
    mosLocales->show();
}

void MainWindow::on_actionRegistrar_Cola_de_Pacientes_triggered()
{
    registrarColaPacientesGUI *regisPaciente = new registrarColaPacientesGUI();
    regisPaciente->show();
}

void MainWindow::on_actionMostrar_fila_de_Pacientes_triggered()
{
    mostrarFilaPacientesGUI *mostFilaPacientes = new mostrarFilaPacientesGUI();
    mostFilaPacientes->show();
}

void MainWindow::on_actionBuscar_Paciente_en_Fila_triggered()
{
    buscarPacienteGUI *busPaciente = new buscarPacienteGUI();
    busPaciente->show();
}

void MainWindow::on_actionAtender_Paciente_triggered()
{
    atenderPacienteGUI *atenPaciente = new atenderPacienteGUI();
    atenPaciente->show();
}

void MainWindow::on_actionMostrar_Pacientes_Atendidos_triggered()
{
    mostrarFilaAtendidosGUI *mostFilaAtendidos = new mostrarFilaAtendidosGUI();
    mostFilaAtendidos->show();
}

void MainWindow::on_actionBuscar_Paciente_Atendido_triggered()
{
    buscarAtendidoGUI *busAtendido = new buscarAtendidoGUI();
    busAtendido->show();
}

void MainWindow::on_actionEnfermeras_triggered()
{
    mostrarDetallesLocalEnfermeras *mostDetaEnferLocal = new mostrarDetallesLocalEnfermeras();
    mostDetaEnferLocal->show();
}

void MainWindow::on_actionDoctores_triggered()
{
    mostrarDetallesLocalDoctores *detalleDoctores = new mostrarDetallesLocalDoctores();
    detalleDoctores->show();
}

void MainWindow::on_actionLotes_triggered()
{
    mostrarDetallesLocalLotes *detalleLotes = new mostrarDetallesLocalLotes();
    detalleLotes->show();
}

void MainWindow::on_actionPacientes_triggered()
{
    mostrarDetallesLocalPacientes *detallePacientes = new mostrarDetallesLocalPacientes();
    detallePacientes->show();
}
