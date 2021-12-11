#ifndef GESTIONARPERSONALGUI_H
#define GESTIONARPERSONALGUI_H

#include <QDialog>
#include <listalocalesclass.h>
#include <QTableWidgetItem>

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
    listaPersonalClass *getPersonal() const;
    void setPersonal(listaPersonalClass *value);

    void actualizarControles(listaPersonalClass *personal = NULL);
    void addListLocalComBox();
    void habilitarCmd();
    void inhabilitarCmd();
    void actualizarCmd(int index);

private slots:
    void on_bntVolPers_clicked();

    void on_selectLocales_currentIndexChanged(int index);

    void on_txtBusPers_textChanged(const QString &arg1);

    void on_tablePers_itemClicked(QTableWidgetItem *item);

    void on_btnEditPers_clicked();

    //void on_btnBorPers_clicked();

private:
    Ui::gestionarPersonalGui *ui;
    listaLocalesClass *locales;
    listaPersonalClass *personal;
};

#endif // GESTIONARPERSONALGUI_H
