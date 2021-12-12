#ifndef GESTIONARALMACENES_H
#define GESTIONARALMACENES_H

#include <QDialog>
<<<<<<< Updated upstream
#include <qtablewidget.h>
=======
#include <QTableWidgetItem>
#include <qtablewidget.h>
#include <listalotesvacunageneralclass.h>
>>>>>>> Stashed changes

namespace Ui {
class gestionarAlmacenes;
}

class gestionarAlmacenes : public QDialog
{
    Q_OBJECT

public:
    explicit gestionarAlmacenes(QWidget *parent = nullptr);
    ~gestionarAlmacenes();

private slots:
    void on_regresarButton_clicked();

private:
    Ui::gestionarAlmacenes *ui;
    listaLotesVacunaGeneralClass *vacunasGeneral;
};

#endif // GESTIONARALMACENES_H
