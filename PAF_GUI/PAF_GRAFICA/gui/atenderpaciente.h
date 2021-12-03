#ifndef ATENDERPACIENTE_H
#define ATENDERPACIENTE_H

#include <QDialog>
#include <listalocalesclass.h>

namespace Ui {
class atenderPaciente;
}

class atenderPaciente : public QDialog
{
    Q_OBJECT

public:
    explicit atenderPaciente(QWidget *parent = nullptr);
    ~atenderPaciente();

    listaLocalesClass *getLocales() const;
    void setLocales(listaLocalesClass *value);

    listaPersonalClass *getEnfermeras() const;
    void setEnfermeras(listaPersonalClass *value);

    listaPacientesClass *getPacientes() const;
    void setPacientes(listaPacientesClass *value);

    void listaLocalComboBox();
    void actualizarC(listaPacientesClass *pacientes = NULL);
    void listaEnfermerasCbox();
private slots:
    void on_regresarButton_clicked();

    void on_atenderButton_clicked();

    void on_registrarButton_clicked();

    void on_localesCBox_highlighted(int index);

    void on_enfermerasCBox_textHighlighted(const QString &arg1);

private:
    Ui::atenderPaciente *ui;
    listaLocalesClass *locales;
    listaPersonalClass *enfermeras;
    listaPacientesClass *pacientes;
};

#endif // ATENDERPACIENTE_H
