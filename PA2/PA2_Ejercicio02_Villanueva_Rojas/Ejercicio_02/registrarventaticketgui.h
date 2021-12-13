#ifndef REGISTRARVENTATICKETGUI_H
#define REGISTRARVENTATICKETGUI_H

#include <QDialog>

namespace Ui {
class registrarVentaTicketGui;
}

class registrarVentaTicketGui : public QDialog
{
    Q_OBJECT

public:
    explicit registrarVentaTicketGui(QWidget *parent = nullptr);
    ~registrarVentaTicketGui();

private slots:
    void on_btnCancel_clicked();

    void on_btnRegis_clicked();

private:
    Ui::registrarVentaTicketGui *ui;
};

#endif // REGISTRARVENTATICKETGUI_H
