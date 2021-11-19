#ifndef MOSTRARMEDICOGUI_H
#define MOSTRARMEDICOGUI_H

#include <QDialog>

namespace Ui {
class mostrarMedicoGui;
}

class mostrarMedicoGui : public QDialog
{
    Q_OBJECT

public:
    explicit mostrarMedicoGui(QWidget *parent = 0);
    ~mostrarMedicoGui();

private:
    Ui::mostrarMedicoGui *ui;
};

#endif // MOSTRARMEDICOGUI_H
