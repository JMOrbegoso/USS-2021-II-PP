#ifndef REGISTRARLOTEGUI_H
#define REGISTRARLOTEGUI_H

#include <QDialog>
#include <listalotesvacunaclass.h>

namespace Ui {
class registrarLoteGui;
}

class registrarLoteGui : public QDialog
{
    Q_OBJECT

public:
    explicit registrarLoteGui(QWidget *parent = nullptr);
    ~registrarLoteGui();

    listaLotesVacunaClass *getLotes() const;
    void setLotes(listaLotesVacunaClass *value);
    void limpiarControles();
private slots:
    void on_cancelarButton_clicked();

    void on_registrarButton_clicked();

private:
    Ui::registrarLoteGui *ui;
    listaLotesVacunaClass *lotes;

};

#endif // REGISTRARLOTEGUI_H
