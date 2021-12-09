#ifndef REGISTRARPERSONALGUI_H
#define REGISTRARPERSONALGUI_H

#include <QDialog>
//#include <listapersonalclass.h>
#include <listalocalesclass.h>

namespace Ui {
class registrarPersonalGui;
}

class registrarPersonalGui : public QDialog
{
    Q_OBJECT

public:
    explicit registrarPersonalGui(QWidget *parent = 0);
    ~registrarPersonalGui();
    void clear();
    listaPersonalClass *getListPers() const;
    void setListPers(listaPersonalClass *value);

    //void habilitarCmdTxt();
    listaLocalesClass *getListLocales() const;
    void setListLocales(listaLocalesClass *value);
    void addListLocalComBox();
private slots:
    void on_cmdCanMed_clicked();

    void on_cmdRegMed_clicked();

private:
    Ui::registrarPersonalGui *ui;
    listaLocalesClass *listLocales;
    //listaPersonalClass *listPers;
};

#endif // REGISTRARPERSONALGUI_H
