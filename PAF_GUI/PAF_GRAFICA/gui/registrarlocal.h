#ifndef REGISTRARLOCAL_H
#define REGISTRARLOCAL_H

#include <QDialog>
#include <listalocalesclass.h>

namespace Ui {
class registrarLocal;
}

class registrarLocal : public QDialog
{
    Q_OBJECT

public:
    explicit registrarLocal(listaLocalesClass* locales, QWidget *parent = nullptr);
    ~registrarLocal();
    void limpiarControles();
    listaLocalesClass *getLocales() const;
    void setLocales(listaLocalesClass *value);

private slots:
    void on_cancelarLocalPb_clicked();

    void on_registrarLocalPb_clicked();

private:
    Ui::registrarLocal *ui;
    listaLocalesClass *locales;
};

#endif // REGISTRARLOCAL_H
