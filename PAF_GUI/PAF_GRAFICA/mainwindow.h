#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionAcerca_de_triggered();

    void on_actionRegistrar_Paciente_triggered();

    void on_actionGestionar_Pacientes_triggered();

    void on_actionGestionar_Atenci_n_triggered();

    void on_actionRegistrar_local_triggered();

    void on_actionGestionar_locales_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
