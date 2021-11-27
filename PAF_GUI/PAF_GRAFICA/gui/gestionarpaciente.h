#ifndef GESTIONARPACIENTE_H
#define GESTIONARPACIENTE_H

#include <QDialog>
#include <listalocalesclass.h>

namespace Ui {
class gestionarPaciente;
}

class gestionarPaciente : public QDialog
{
    Q_OBJECT

public:
    explicit gestionarPaciente(QWidget *parent = 0);
    ~gestionarPaciente();

    listaLocalesClass *getLocales() const;
    void setLocales(listaLocalesClass *value);
    listaPacientesClass *getPacientes() const;
    void setPacientes(listaPacientesClass *value);
    void listaLocalComboBox();

    void actualizarC(listaPacientesClass *pacientes);
private slots:
    void on_regresarCmd_clicked();

    void on_registrarPacienteCmd_clicked();

    void on_elegirLocalCbox_highlighted(int index);

private:
    Ui::gestionarPaciente *ui;
    listaLocalesClass *locales;
    listaPacientesClass *pacientes;
};

#endif // GESTIONARPACIENTE_H
