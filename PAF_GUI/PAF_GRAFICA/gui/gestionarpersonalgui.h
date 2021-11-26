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

private slots:
    void on_bntVolPers_clicked();

private:
    Ui::gestionarPersonalGui *ui;
    listaLocalesClass *locales;
};

#endif // GESTIONARPERSONALGUI_H
