#ifndef GESTIONARLOTEGUI_H
#define GESTIONARLOTEGUI_H

#include <QDialog>
#include <listalotesvacunageneralclass.h>

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

private slots:
    void on_habilitarInhabilitarButton_clicked();

private:
    Ui::gestionarLoteGui *ui;
    listaLotesVacunaGeneralClass *lotesGeneral;
};

#endif // GESTIONARLOTEGUI_H
