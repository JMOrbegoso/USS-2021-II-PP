#ifndef REGISTRARVENTATICKETGUI_H
#define REGISTRARVENTATICKETGUI_H

#include <QDialog>
#include "QMessageBox"
#include "listaticketsclass.h"
#include "listatrabajadoresclass.h"
#include "listaclienteclass.h"
#include "listazonasclass.h"
#include "listabutacasclass.h"

namespace Ui {
class registrarVentaTicketGui;
}

class registrarVentaTicketGui : public QDialog
{
    Q_OBJECT

public:
    explicit registrarVentaTicketGui(QWidget *parent = nullptr);
    ~registrarVentaTicketGui();

    listaTicketsClass *getLTickets() const;
    void setLTickets(listaTicketsClass *value);

    listaTrabajadoresClass *getLTrabaj() const;
    void setLTrabaj(listaTrabajadoresClass *value);

    listaClienteClass *getLClientes() const;
    void setLClientes(listaClienteClass *value);

    listaZonasClass *getLZonas() const;
    void setLZonas(listaZonasClass *value);

    listaButacasClass *getLButacas() const;
    void setLButacas(listaButacasClass *value);

private slots:
    void on_btnCancel_clicked();

    void on_btnRegis_clicked();

private:
    Ui::registrarVentaTicketGui *ui;
    listaTicketsClass *lTickets;
    listaTrabajadoresClass *lTrabaj;
    listaClienteClass *lClientes;
    listaZonasClass *lZonas;
    listaButacasClass *lButacas;
};

#endif // REGISTRARVENTATICKETGUI_H
