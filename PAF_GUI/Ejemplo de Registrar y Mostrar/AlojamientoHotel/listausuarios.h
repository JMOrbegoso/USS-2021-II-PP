#include "clslistaclientes.h"

#ifndef LISTAUSUARIOS_H
#define LISTAUSUARIOS_H

#include <QDialog>

namespace Ui {
class listaUsuarios;
}

class listaUsuarios : public QDialog
{
    Q_OBJECT

public:
    explicit listaUsuarios(QWidget *parent = 0);
    ~listaUsuarios();

    clsListaClientes *getLC() const;
    void setLC(clsListaClientes *value);
    void mostrarLista( clsListaClientes *lista );
private slots:
    void on_pushButton_2_clicked();

    void on_btnCerrar_clicked();

private:
    Ui::listaUsuarios *ui;
    clsListaClientes *lC;
};

#endif // LISTAUSUARIOS_H
