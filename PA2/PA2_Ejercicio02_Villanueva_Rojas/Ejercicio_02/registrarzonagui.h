#ifndef REGISTRARZONAGUI_H
#define REGISTRARZONAGUI_H

#include <QDialog>

namespace Ui {
class registrarZonaGui;
}

class registrarZonaGui : public QDialog
{
    Q_OBJECT

public:
    explicit registrarZonaGui(QWidget *parent = nullptr);
    ~registrarZonaGui();

private slots:


    void on_btnCancel_clicked();

    void on_btnRegis_clicked();

private:
    Ui::registrarZonaGui *ui;
};

#endif // REGISTRARZONAGUI_H
