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

private:
    Ui::registrarClienteGui *ui;
};

#endif // REGISTRARCLIENTEGUI_H
