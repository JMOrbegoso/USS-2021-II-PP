#ifndef REGISTRARLOTEGUI_H
#define REGISTRARLOTEGUI_H

#include <QDialog>
#include <listalotesvacunageneralclass.h>

namespace Ui {
class registrarLoteGui;
}

class registrarLoteGui : public QDialog
{
    Q_OBJECT

public:
    explicit registrarLoteGui(QWidget *parent = nullptr);
    ~registrarLoteGui();


    listaLotesVacunaGeneralClass *getLotesGeneral() const;
    void setLotesGeneral(listaLotesVacunaGeneralClass *value);

private slots:
    void on_cancelarButton_clicked();

    void on_registrarButton_clicked();

    void limpiarControles();
private:
    Ui::registrarLoteGui *ui;
    listaLotesVacunaGeneralClass *lotesGeneral;
};

#endif // REGISTRARLOTEGUI_H
