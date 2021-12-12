#ifndef GESTIONARLOTEGUI_H
#define GESTIONARLOTEGUI_H

#include <QDialog>
#include <listalotesvacunageneralclass.h>
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

    listaLotesVacunaGeneralClass *getLotesGeneral() const;
    void setLotesGeneral(listaLotesVacunaGeneralClass *value);

    listaLocalesClass *getLocales() const;
    void setLocales(listaLocalesClass *value);

    void listaLocalesCbox();
    void actualizarC(listaLotesVacunaGeneralClass *lotes);
private slots:
    void on_habilitarInhabilitarButton_clicked();

    void on_elegirLocalCbox_currentIndexChanged(int index);

    void on_lotesTableWidget_itemClicked(QTableWidgetItem *item);

    void on_editarButton_clicked();

private:
    Ui::gestionarLoteGui *ui;
    listaLotesVacunaGeneralClass *lotesGeneral;
    listaLocalesClass *locales;
};

#endif // GESTIONARLOTEGUI_H
