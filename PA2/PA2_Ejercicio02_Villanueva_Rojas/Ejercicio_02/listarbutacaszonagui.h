#ifndef LISTARBUTACASZONAGUI_H
#define LISTARBUTACASZONAGUI_H

#include <QDialog>
#include "listazonasclass.h"
#include "listabutacasclass.h"
#include <QTableWidgetItem>

namespace Ui {
class listarButacasZonaGui;
}

class listarButacasZonaGui : public QDialog
{
    Q_OBJECT

public:
    explicit listarButacasZonaGui(QWidget *parent = nullptr);
    ~listarButacasZonaGui();

    listaZonasClass *getLZonas() const;
    void setLZonas(listaZonasClass *value);

    listaButacasClass *getLButacas() const;
    void setLButacas(listaButacasClass *value);

    void llenarComBox();
    void actualizarTabla();
    void updateDate(int i);

private slots:
    void on_btnClose_clicked();

    void on_comBoxZona_currentIndexChanged(int index);

private:
    Ui::listarButacasZonaGui *ui;
    listaZonasClass *lZonas;
    listaButacasClass *lButacas;
};

#endif // LISTARBUTACASZONAGUI_H
