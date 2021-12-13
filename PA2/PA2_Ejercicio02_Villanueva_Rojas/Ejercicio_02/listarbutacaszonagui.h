#ifndef LISTARBUTACASZONAGUI_H
#define LISTARBUTACASZONAGUI_H

#include <QDialog>
#include "listazonasclass.h"
#include "listabutacasclass.h"

namespace Ui {
class listarButacasZonaGui;
}

class listarButacasZonaGui : public QDialog
{
    Q_OBJECT

public:
    explicit listarButacasZonaGui(QWidget *parent = nullptr);
    ~listarButacasZonaGui();

    listaZonasClass *getLZona() const;
    void setLZona(listaZonasClass *value);

    listaButacasClass *getLButacas() const;
    void setLButacas(listaButacasClass *value);

private:
    Ui::listarButacasZonaGui *ui;
    listaZonasClass *lZona;
    listaButacasClass *lButacas;
};

#endif // LISTARBUTACASZONAGUI_H
