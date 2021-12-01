#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vacunatoncontradengueclass.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    vacunatonContraDengueClass *getVacunaDengue() const;
    void setVacunaDengue(vacunatonContraDengueClass *value);

private slots:
    void on_actionAcerca_de_triggered();

    void on_actionRegistrar_Paciente_triggered();

    void on_actionGestionar_Pacientes_triggered();

    void on_actionGestionar_Atenci_n_triggered();

    void on_actionRegistrar_local_triggered();

    void on_actionGestionar_locales_triggered();

    void on_actionGestionar_Almacenes_triggered();

    void on_actionRegistrar_Personal_M_dico_triggered();

    void on_actionGestionar_Personal_M_dico_triggered();

    void on_actionRegistrar_Lote_triggered();

    void on_actionGestionar_Lotes_triggered();

    void on_actionAtender_Paciente_triggered();

    void on_actionSalir_triggered();

private:
    Ui::MainWindow *ui;
    vacunatonContraDengueClass *vacunaDengue;
};

#endif // MAINWINDOW_H
