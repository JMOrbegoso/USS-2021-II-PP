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
    explicit registrarUsuario(QWidget *parent = nullptr);
    ~registrarUsuario();

private:
    Ui::registrarUsuario *ui;
};

#endif // REGISTRARUSUARIO_H
