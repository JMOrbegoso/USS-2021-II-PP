#ifndef REGISTRARPACIENTE_H
#define REGISTRARPACIENTE_H

#include <QDialog>
#include <listalocalesclass.h>

namespace Ui {
class registrarPaciente;
}

class registrarPaciente : public QDialog
{
    Q_OBJECT

public:
    explicit registrarPaciente(QWidget *parent = 0);
    ~registrarPaciente();

    void clear();
    listaLocalesClass *getLocales() const;
    void setLocales(listaLocalesClass *value);
    listaPacientesClass *getPacientes() const;
    void setPacientes(listaPacientesClass *value);
    void listaLocalComboBox();
private slots:
    void on_regresarCmd_clicked();

    void on_registrarCmd_clicked();

    void on_elegirLocalCbox_textHighlighted(const QString &arg1);

    void on_enfermedadCbox_textHighlighted(const QString &arg1);

private:
    Ui::registrarPaciente *ui;
    listaLocalesClass *locales;
};

#endif // REGISTRARPACIENTE_H
