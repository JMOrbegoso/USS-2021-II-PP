#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionRegistrar_Local_triggered();

    void on_actionRegistrar_Almacen_triggered();

    void on_actionMostrar_Almacenes_triggered();

    void on_actionEditar_Local_triggered();

    void on_actionMostrar_Locales_Habilitados_Desabilitados_triggered();

    void on_actionHabilitar_Desabilitar_triggered();

    void on_actionBuscar_Local_Registrado_triggered();

    void on_actionRegistrar_Lote_triggered();

    void on_actionMostrar_Lotes_triggered();

    void on_actionEditar_Lote_triggered();

    void on_actionBuscar_Lote_triggered();

    void on_actionMostrar_Locales_triggered();

    void on_actionRegistrar_Cola_de_Pacientes_triggered();

    void on_actionMostrar_fila_de_Pacientes_triggered();

    void on_actionBuscar_Paciente_en_Fila_triggered();

    void on_actionAtender_Paciente_triggered();

    void on_actionMostrar_Pacientes_Atendidos_triggered();

    void on_actionBuscar_Paciente_Atendido_triggered();

    void on_actionEnfermeras_triggered();

    void on_actionDoctores_triggered();

    void on_actionLotes_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
