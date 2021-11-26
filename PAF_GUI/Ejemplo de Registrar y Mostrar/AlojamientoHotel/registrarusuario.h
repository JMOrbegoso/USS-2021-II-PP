#include "clslistaclientes.h"
#ifndef REGISTRARUSUARIO_H
#define REGISTRARUSUARIO_H

#include <QDialog>

namespace Ui {
class registrarUsuario;
}

class registrarUsuario : public QDialog
{
    Q_OBJECT

public:
    explicit registrarUsuario(QWidget *parent = 0);
    ~registrarUsuario();

    clsListaClientes *getLC() const;
    void setLC(clsListaClientes *value);
    void limpiarControles();
private slots:
    void on_pushButton_clicked();

    void on_ctnCancelar_clicked();

    void on_btnRegistrar_clicked();

private:
    Ui::registrarUsuario *ui;
    clsListaClientes *lC;
};

#endif // REGISTRARUSUARIO_H
