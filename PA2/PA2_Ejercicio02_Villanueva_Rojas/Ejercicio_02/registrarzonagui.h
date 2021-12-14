#ifndef REGISTRARZONAGUI_H
#define REGISTRARZONAGUI_H

#include <QDialog>
#include "QMessageBox"
#include "listazonasclass.h"
#include "listabutacasclass.h"

namespace Ui {
class registrarZonaGui;
}

class registrarZonaGui : public QDialog
{
    Q_OBJECT

public:
    explicit registrarZonaGui(QWidget *parent = nullptr);
    ~registrarZonaGui();

    listaZonasClass *getLZonas() const;
    void setLZonas(listaZonasClass *value);

    listaButacasClass *getLButacas() const;
    void setLButacas(listaButacasClass *value);

    void clear();

private slots:


    void on_btnCancel_clicked();

    void on_btnRegis_clicked();

private:
    Ui::registrarZonaGui *ui;
    listaZonasClass *lZonas;
    listaButacasClass *lButacas;
};

#endif // REGISTRARZONAGUI_H
