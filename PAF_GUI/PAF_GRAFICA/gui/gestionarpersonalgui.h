#ifndef GESTIONARPERSONALGUI_H
#define GESTIONARPERSONALGUI_H

#include <QDialog>
#include <listalocalesclass.h>

namespace Ui {
class gestionarPersonalGui;
}

class gestionarPersonalGui : public QDialog
{
    Q_OBJECT

public:
    explicit gestionarPersonalGui(QWidget *parent = 0);
    ~gestionarPersonalGui();

    listaLocalesClass *getLocales() const;
    void setLocales(listaLocalesClass *value);
    listaPersonalClass *getPers() const;
    void setPers(listaPersonalClass *value);

    void actualizarControles(listaPersonalClass *pers);
    void addListLocalComBox();

private slots:
    void on_bntVolPers_clicked();

    void on_selectLocales_highlighted(int index);

private:
    Ui::gestionarPersonalGui *ui;
    listaLocalesClass *locales;
    listaPersonalClass *pers;
};

#endif // GESTIONARPERSONALGUI_H
