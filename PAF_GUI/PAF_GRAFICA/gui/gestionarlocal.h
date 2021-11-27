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
    void actualizarControles();

private:
    Ui::gestionarLocal *ui;
    listaLocalesClass *locales;
};

#endif // GESTIONARLOCAL_H
