#ifndef REGISTRARTRABAJADORESGUI_H
#define REGISTRARTRABAJADORESGUI_H

#include <QDialog>
#include "QMessageBox"
#include "listatrabajadoresclass.h"

namespace Ui {
class registrarTrabajadoresGui;
}

class registrarTrabajadoresGui : public QDialog
{
    Q_OBJECT

public:
    explicit registrarTrabajadoresGui(QWidget *parent = nullptr);
    ~registrarTrabajadoresGui();

    listaTrabajadoresClass *getLTrabaj() const;
    void setLTrabaj(listaTrabajadoresClass *value);

    void clear();

private slots:
    void on_btnCancel_clicked();

    void on_btnRegis_clicked();

private:
    Ui::registrarTrabajadoresGui *ui;
    listaTrabajadoresClass *lTrabaj;
};

#endif // REGISTRARTRABAJADORESGUI_H
