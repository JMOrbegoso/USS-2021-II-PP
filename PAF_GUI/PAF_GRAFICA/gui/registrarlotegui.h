#ifndef REGISTRARLOTEGUI_H
#define REGISTRARLOTEGUI_H

#include <QDialog>
#include <almacenclass.h>

namespace Ui {
class registrarLoteGui;
}

class registrarLoteGui : public QDialog
{
    Q_OBJECT

public:
    explicit registrarLoteGui(QWidget *parent = nullptr);
    ~registrarLoteGui();

    almacenClass *getAlmacen() const;
    void setAlmacen(almacenClass *value);

private slots:
    void on_cancelarButton_clicked();

    void on_registrarButton_clicked();

private:
    Ui::registrarLoteGui *ui;
    almacenClass *almacen;
};

#endif // REGISTRARLOTEGUI_H
