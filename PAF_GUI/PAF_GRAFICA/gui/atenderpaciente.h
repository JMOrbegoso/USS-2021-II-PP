#ifndef ATENDERPACIENTE_H
#define ATENDERPACIENTE_H

#include <QDialog>
#include <listalocalesclass.h>
#include <atencionclass.h>
#include <qtablewidget.h>

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
    void listaLocalComboBox();
    void actualizarC(listaPacientesClass *pacientes = NULL);
    void listaEnfermerasCbox(nodoPersonalClass *enfermera);
    listaPacientesClass *getPacientes() const;
    void setPacientes(listaPacientesClass *value);
    atencionClass *getAtendido() const;
    void setAtendido(atencionClass *value);

    listaPersonalClass *getEnfermeras() const;
    void setEnfermeras(listaPersonalClass *value);

private slots:
    void on_regresarButton_clicked();

    void on_registrarButton_clicked();

    void on_localesCBox_highlighted(int index);

    void on_enfermerasCBox_textHighlighted(const QString &arg1);

    void on_atenderButton_clicked();

private:
    Ui::atenderPaciente *ui;
    listaLocalesClass *locales;
    listaPacientesClass *pacientes;
    listaPersonalClass *enfermeras;
};

#endif // ATENDERPACIENTE_H
