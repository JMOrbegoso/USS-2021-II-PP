#ifndef MOSTRARESTADOSLOCALESGUI_H
#define MOSTRARESTADOSLOCALESGUI_H

#include <QDialog>

namespace Ui {
class mostrarEstadosLocalesGUI;
}

class mostrarEstadosLocalesGUI : public QDialog
{
    Q_OBJECT

public:
    explicit mostrarEstadosLocalesGUI(QWidget *parent = nullptr);
    ~mostrarEstadosLocalesGUI();

private:
    Ui::mostrarEstadosLocalesGUI *ui;
};

#endif // MOSTRARESTADOSLOCALESGUI_H
