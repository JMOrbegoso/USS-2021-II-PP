#ifndef GESTIONARPACIENTE_H
#define GESTIONARPACIENTE_H

#include <QDialog>
#include <listalocalesclass.h>
#include <qtablewidget.h>

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
    void actualizarC(listaPacientesClass *pacientes = NULL);
    void listaLocalComboBox();
private slots:
    void on_regresarCmd_clicked();

    void on_registrarPacienteCmd_clicked();

    void on_elegirLocalCbox_highlighted(int index);

    void on_buscarPacienteTxt_textChanged(const QString &arg1);

    void on_mostrarPacienteTwidget_itemClicked(QTableWidgetItem *item);

    void on_editarCmd_clicked();

private:
    Ui::gestionarPaciente *ui;
    listaLocalesClass *locales;
    listaPacientesClass *pacientes;
};

#endif // GESTIONARPACIENTE_H
