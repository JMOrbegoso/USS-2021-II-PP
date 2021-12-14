#ifndef REGISTRARCLIENTEGUI_H
#define REGISTRARCLIENTEGUI_H

#include <QDialog>
#include "QMessageBox"
#include "listaclienteclass.h"

namespace Ui {
class registrarClienteGui;
}

class registrarClienteGui : public QDialog
{
    Q_OBJECT

public:
    explicit registrarClienteGui(QWidget *parent = nullptr);
    ~registrarClienteGui();

    listaClienteClass *getLClientes() const;
    void setLClientes(listaClienteClass *value);

    void clear();

private slots:
    void on_btnCancel_clicked();

    void on_btnRegis_clicked();

private:
    Ui::registrarClienteGui *ui;
    listaClienteClass *lClientes;
};

#endif // REGISTRARCLIENTEGUI_H
