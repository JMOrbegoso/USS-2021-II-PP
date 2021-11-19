#ifndef MOSTRARESTADOSALMACENESGUI_H
#define MOSTRARESTADOSALMACENESGUI_H

#include <QWidget>

namespace Ui {
class mostrarEstadosAlmacenesGui;
}

class mostrarEstadosAlmacenesGui : public QWidget
{
    Q_OBJECT

public:
    explicit mostrarEstadosAlmacenesGui(QWidget *parent = nullptr);
    ~mostrarEstadosAlmacenesGui();

private:
    Ui::mostrarEstadosAlmacenesGui *ui;
};

#endif // MOSTRARESTADOSALMACENESGUI_H
