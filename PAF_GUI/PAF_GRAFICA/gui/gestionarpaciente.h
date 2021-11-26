#ifndef GESTIONARPACIENTE_H
#define GESTIONARPACIENTE_H

#include <QDialog>

namespace Ui {
class gestionarPaciente;
}

class gestionarPaciente : public QDialog
{
    Q_OBJECT

public:
    explicit gestionarPaciente(QWidget *parent = 0);
    ~gestionarPaciente();

private slots:
    void on_regresarCmd_clicked();

    void on_registrarPacienteCmd_clicked();

private:
    Ui::gestionarPaciente *ui;
};

#endif // GESTIONARPACIENTE_H
