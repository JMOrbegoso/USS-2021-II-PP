#include "clssupermercado.h"

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

    clsSupermercado *getSP() const;
    void setSP(clsSupermercado *value);

private slots:
    void on_actionRegistrar_Usuario_triggered();
    void on_actionLista_de_Usuarios_triggered();
    void on_actionSalir_triggered();

private:
    Ui::MainWindow *ui;
    clsSupermercado *sP;
};

#endif // MAINWINDOW_H
