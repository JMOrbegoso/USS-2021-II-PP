#ifndef GESTIONARLOCAL_H
#define GESTIONARLOCAL_H

#include <QDialog>
#include <listalocalesclass.h>
#include <QTableWidgetItem>

namespace Ui {
class gestionarLocal;
}

class gestionarLocal : public QDialog
{
    Q_OBJECT

public:
    explicit gestionarLocal(QWidget *parent = nullptr);
    ~gestionarLocal();

    listaLocalesClass *getListLocales() const;
    void setListLocales(listaLocalesClass *value);
    void mostrarListaLocales(listaLocalesClass *locales);

private slots:
    void on_regresarPb_clicked();

    void on_habilitarInLocalPb_clicked();

    void on_twMostrarLocales_itemClicked(QTableWidgetItem *item);

    void on_editarLocalPb_clicked();

private:
    Ui::gestionarLocal *ui;
    listaLocalesClass *listLocales;
};

#endif // GESTIONARLOCAL_H
