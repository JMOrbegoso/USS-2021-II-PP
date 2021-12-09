#ifndef GESTIONARATENDIDOS_H
#define GESTIONARATENDIDOS_H

#include <QDialog>
#include <listalocalesclass.h>

namespace Ui {
class gestionarAtendidos;
}

class gestionarAtendidos : public QDialog
{
    Q_OBJECT

public:
    explicit gestionarAtendidos(QWidget *parent = 0);
    ~gestionarAtendidos();

    void listaLocalesBox();
    listaLocalesClass *getLocales() const;
    void setLocales(listaLocalesClass *value);

    void actualizarC(listaPacientesClass *pacientes =  NULL);
    listaPacientesClass *getPaciente() const;
    void setPaciente(listaPacientesClass *value);

    listaPacientesClass *getPacientes() const;
    void setPacientes(listaPacientesClass *value);

private slots:
    void on_regresarCmd_clicked();

    void on_registrarOtroPacienteCmd_clicked();

    void on_elegirLocalCbox_currentIndexChanged(int index);

private:
    Ui::gestionarAtendidos *ui;
    listaLocalesClass *locales;
    listaPacientesClass *pacientes;
};

#endif // GESTIONARATENDIDOS_H
