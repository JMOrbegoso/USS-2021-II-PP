#ifndef GESTIONARALMACENES_H
#define GESTIONARALMACENES_H

#include <QDialog>
#include <qtablewidget.h>
#include <listalotesvacunaclass.h>
#include <listalocalesclass.h>

namespace Ui {
class gestionarAlmacenes;
}

class gestionarAlmacenes : public QDialog
{
    Q_OBJECT

public:
    explicit gestionarAlmacenes(QWidget *parent = nullptr);
    ~gestionarAlmacenes();

    listaLotesVacunaClass *getLotes() const;
    void setLotes(listaLotesVacunaClass *value);

    listaLocalesClass *getLocales() const;
    void setLocales(listaLocalesClass *value);

    void mostrarLotes(listaLotesVacunaClass *lotes);
    void listaLotesCombo();
    void mostrarLotesLocal(int index);
    loteVacunaClass *extraer(int x);
    loteVacunaClass *extraer(int x, listaLotesVacunaClass *lLot);
private slots:
    void on_regresarButton_clicked();

    //void on_editarAlmacenButton_clicked();

    void on_localesCbox_currentIndexChanged(int index);

    void on_agregarButton_clicked();

    void on_quitarButton_clicked();

private:
    Ui::gestionarAlmacenes *ui;
    listaLotesVacunaClass *lotes;
    listaLocalesClass *locales;
};

#endif // GESTIONARALMACENES_H
