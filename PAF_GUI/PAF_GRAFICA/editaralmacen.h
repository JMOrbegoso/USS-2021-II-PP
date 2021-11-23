#ifndef EDITARALMACEN_H
#define EDITARALMACEN_H

#include <QDialog>

namespace Ui {
class editarAlmacen;
}

class editarAlmacen : public QDialog
{
    Q_OBJECT

public:
    explicit editarAlmacen(QWidget *parent = nullptr);
    ~editarAlmacen();

private slots:
    void on_cancelarButton_clicked();

private:
    Ui::editarAlmacen *ui;
};

#endif // EDITARALMACEN_H
