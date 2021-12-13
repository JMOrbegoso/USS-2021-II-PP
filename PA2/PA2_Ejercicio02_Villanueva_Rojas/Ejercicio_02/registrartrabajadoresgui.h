#ifndef REGISTRARTRABAJADORESGUI_H
#define REGISTRARTRABAJADORESGUI_H

#include <QDialog>

namespace Ui {
class registrarTrabajadoresGui;
}

class registrarTrabajadoresGui : public QDialog
{
    Q_OBJECT

public:
    explicit registrarTrabajadoresGui(QWidget *parent = nullptr);
    ~registrarTrabajadoresGui();

private slots:
    void on_btnCancel_clicked();

    void on_btnRegis_clicked();

private:
    Ui::registrarTrabajadoresGui *ui;
};

#endif // REGISTRARTRABAJADORESGUI_H
