#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QMessageBox"
#include "circoclass.h"
#include "registrarclientegui.h"
#include "registrartrabajadoresgui.h"
#include "registrarventaticketgui.h"
#include "registrarzonagui.h"
#include "listarbutacaszonagui.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    circoClass *getCirco() const;
    void setCirco(circoClass *value);

private slots:
    void on_actionRegistrar_Cliente_triggered();

    void on_actionRegistrar_Zona_y_Butacas_triggered();

    void on_actionRegistrar_Trabajadores_triggered();

    void on_actionListar_Butacas_de_una_Zona_triggered();

    void on_actionRealizar_Venta_Ticket_triggered();

private:
    Ui::MainWindow *ui;
    circoClass *circo;
};
#endif // MAINWINDOW_H
