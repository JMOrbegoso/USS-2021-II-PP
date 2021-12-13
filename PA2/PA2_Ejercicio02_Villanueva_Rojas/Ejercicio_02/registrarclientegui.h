#ifndef REGISTRARCLIENTEGUI_H
#define REGISTRARCLIENTEGUI_H

#include <QDialog>

namespace Ui {
class registrarClienteGui;
}

class registrarClienteGui : public QDialog
{
    Q_OBJECT

public:
    explicit registrarClienteGui(QWidget *parent = nullptr);
    ~registrarClienteGui();

private slots:
    void on_btnCancel_clicked();

    void on_btnRegis_clicked();

private:
    Ui::registrarClienteGui *ui;
};

#endif // REGISTRARCLIENTEGUI_H
