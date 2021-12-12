#ifndef GESTIONARLOTEGUI_H
#define GESTIONARLOTEGUI_H

#include <QDialog>
#include <listalocalesclass.h>
#include <qtablewidget.h>

namespace Ui {
class gestionarLoteGui;
}

class gestionarLoteGui : public QDialog
{
    Q_OBJECT

public:
    explicit gestionarLoteGui(QWidget *parent = nullptr);
    ~gestionarLoteGui();

    listaLotesVacunaClass *getLotes() const;
    void setLotes(listaLotesVacunaClass *value);

    listaLocalesClass *getLocales() const;
    void setLocales(listaLocalesClass *value);

    void listaLocalesCbox();

private slots:
    void on_habilitarInhabilitarButton_clicked();

    void on_elegirLocalCbox_currentIndexChanged(int index);

    void on_lotesTableWidget_itemClicked(QTableWidgetItem *item);

    void on_editarButton_clicked();

private:
    Ui::gestionarLoteGui *ui;
    listaLotesVacunaClass *lotes;
    listaLocalesClass *locales;
    void actualizarControles(listaLotesVacunaClass *lotes = NULL);
};

#endif // GESTIONARLOTEGUI_H
