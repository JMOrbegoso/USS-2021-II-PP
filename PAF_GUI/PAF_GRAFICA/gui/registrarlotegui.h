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

    listaLotesVacunaGeneralClass *getLotes() const;
    void setLotes(listaLotesVacunaGeneralClass *value);
    void limpiarControles();
private slots:
    void on_cancelarButton_clicked();

    void on_registrarButton_clicked();

private:
    Ui::registrarLoteGui *ui;
    listaLotesVacunaGeneralClass *lotes;

};

#endif // REGISTRARLOTEGUI_H
