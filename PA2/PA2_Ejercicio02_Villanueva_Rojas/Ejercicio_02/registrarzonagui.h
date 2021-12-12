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

private:
    Ui::registrarZonaGui *ui;
};

#endif // REGISTRARZONAGUI_H
