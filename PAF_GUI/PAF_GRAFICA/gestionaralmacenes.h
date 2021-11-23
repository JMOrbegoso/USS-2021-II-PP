#ifndef GESTIONARALMACENES_H
#define GESTIONARALMACENES_H

#include <QDialog>

namespace Ui {
class gestionarAlmacenes;
}

class gestionarAlmacenes : public QDialog
{
    Q_OBJECT

public:
    explicit gestionarAlmacenes(QWidget *parent = nullptr);
    ~gestionarAlmacenes();

private slots:
    void on_regresarButton_clicked();

private:
    Ui::gestionarAlmacenes *ui;
};

#endif // GESTIONARALMACENES_H
