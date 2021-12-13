+#ifndef GESTIONARALMACENES_H
#define GESTIONARALMACENES_H

#include <QDialog>
#include <qtablewidget.h>

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

    //void on_editarAlmacenButton_clicked();

private:
    Ui::gestionarAlmacenes *ui;

};

#endif // GESTIONARALMACENES_H
