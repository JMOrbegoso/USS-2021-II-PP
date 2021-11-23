#ifndef REGISTRARALMACEN_H
#define REGISTRARALMACEN_H

#include <QDialog>

namespace Ui {
class registrarAlmacen;
}

class registrarAlmacen : public QDialog
{
    Q_OBJECT

public:
    explicit registrarAlmacen(QWidget *parent = nullptr);
    ~registrarAlmacen();

private slots:
    void on_cancelarButton_clicked();

    void on_registrarButton_clicked();

private:
    Ui::registrarAlmacen *ui;
};

#endif // REGISTRARALMACEN_H
