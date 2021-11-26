#ifndef GESTIONARATENDIDOS_H
#define GESTIONARATENDIDOS_H

#include <QDialog>

namespace Ui {
class gestionarAtendidos;
}

class gestionarAtendidos : public QDialog
{
    Q_OBJECT

public:
    explicit gestionarAtendidos(QWidget *parent = 0);
    ~gestionarAtendidos();

private slots:
    void on_regresarCmd_clicked();

    void on_registrarOtroPacienteCmd_clicked();

private:
    Ui::gestionarAtendidos *ui;
};

#endif // GESTIONARATENDIDOS_H
