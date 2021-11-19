#ifndef BUSCARLOCALGUI_H
#define BUSCARLOCALGUI_H

#include <QDialog>

namespace Ui {
class buscarLocalGUI;
}

class buscarLocalGUI : public QDialog
{
    Q_OBJECT

public:
    explicit buscarLocalGUI(QWidget *parent = nullptr);
    ~buscarLocalGUI();

private slots:
    void on_cmdCancelarBusqueda_clicked();

private:
    Ui::buscarLocalGUI *ui;
};

#endif // BUSCARLOCALGUI_H
