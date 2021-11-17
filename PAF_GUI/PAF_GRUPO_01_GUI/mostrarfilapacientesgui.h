#ifndef MOSTRARFILAPACIENTESGUI_H
#define MOSTRARFILAPACIENTESGUI_H

#include <QDialog>

namespace Ui {
class mostrarFilaPacientesGUI;
}

class mostrarFilaPacientesGUI : public QDialog
{
    Q_OBJECT

public:
    explicit mostrarFilaPacientesGUI(QWidget *parent = 0);
    ~mostrarFilaPacientesGUI();

private:
    Ui::mostrarFilaPacientesGUI *ui;
};

#endif // MOSTRARFILAPACIENTESGUI_H
