#ifndef BUSCARLOTEGUI_H
#define BUSCARLOTEGUI_H

#include <QDialog>

namespace Ui {
class buscarLoteGUI;
}

class buscarLoteGUI : public QDialog
{
    Q_OBJECT

public:
    explicit buscarLoteGUI(QWidget *parent = nullptr);
    ~buscarLoteGUI();

private slots:
    void on_cmdCancelarBusqueda_clicked();

private:
    Ui::buscarLoteGUI *ui;
};

#endif // BUSCARLOTEGUI_H
