#ifndef MOSTRARDETALLESLOCALENFERMERAS_H
#define MOSTRARDETALLESLOCALENFERMERAS_H

#include <QDialog>

namespace Ui {
class mostrarDetallesLocalEnfermeras;
}

class mostrarDetallesLocalEnfermeras : public QDialog
{
    Q_OBJECT

public:
    explicit mostrarDetallesLocalEnfermeras(QWidget *parent = 0);
    ~mostrarDetallesLocalEnfermeras();

private:
    Ui::mostrarDetallesLocalEnfermeras *ui;
};

#endif // MOSTRARDETALLESLOCALENFERMERAS_H
