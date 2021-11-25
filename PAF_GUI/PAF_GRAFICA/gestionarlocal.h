#ifndef GESTIONARLOCAL_H
#define GESTIONARLOCAL_H

#include <QDialog>
#include <listalocalesclass.h>

namespace Ui {
class gestionarLocal;
}

class gestionarLocal : public QDialog
{
    Q_OBJECT

public:
    explicit gestionarLocal(listaLocalesClass* locales, QWidget *parent = nullptr);
    ~gestionarLocal();

private:
    Ui::gestionarLocal *ui;
};

#endif // GESTIONARLOCAL_H
