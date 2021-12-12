#ifndef GESTIONARLOTEGUI_H
#define GESTIONARLOTEGUI_H

#include <QDialog>
#include <listalotesvacunageneralclass.h>
<<<<<<< Updated upstream
#include <listalocalesclass.h>
#include <qtablewidget.h>
=======
#include <QTableWidgetItem>
>>>>>>> Stashed changes

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

private slots:
    void on_habilitarInhabilitarButton_clicked();

<<<<<<< Updated upstream
    void on_elegirLocalCbox_currentIndexChanged(int index);

=======
>>>>>>> Stashed changes
    void on_lotesTableWidget_itemClicked(QTableWidgetItem *item);

    void on_editarButton_clicked();

private:
    Ui::gestionarLoteGui *ui;
    listaLotesVacunaGeneralClass *lotesGeneral;
    listaLocalesClass *locales;
    void actualizarC(listaLotesVacunaGeneralClass *lotes = NULL);
};

#endif // GESTIONARLOTEGUI_H
