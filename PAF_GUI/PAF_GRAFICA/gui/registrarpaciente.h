#ifndef REGISTRARPACIENTE_H
#define REGISTRARPACIENTE_H

#include <QDialog>

namespace Ui {
class registrarPaciente;
}

class registrarPaciente : public QDialog
{
    Q_OBJECT

public:
    explicit registrarPaciente(QWidget *parent = 0);
    ~registrarPaciente();

private slots:
    void on_regresarCmd_clicked();

private:
    Ui::registrarPaciente *ui;
};

#endif // REGISTRARPACIENTE_H
