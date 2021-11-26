#ifndef GESTIONARLOCAL_H
#define GESTIONARLOCAL_H

#include <QDialog>
#include <listalocalesclass.h>

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

private:
    Ui::gestionarLocal *ui;
    listaLocalesClass *listLocales;
};

#endif // GESTIONARLOCAL_H
