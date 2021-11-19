#ifndef MOSTRARDETALLESLOCALPACIENTES_H
#define MOSTRARDETALLESLOCALPACIENTES_H

#include <QWidget>

namespace Ui {
class mostrarDetallesLocalPacientes;
}

class mostrarDetallesLocalPacientes : public QWidget
{
    Q_OBJECT

public:
    explicit mostrarDetallesLocalPacientes(QWidget *parent = nullptr);
    ~mostrarDetallesLocalPacientes();

private:
    Ui::mostrarDetallesLocalPacientes *ui;
};

#endif // MOSTRARDETALLESLOCALPACIENTES_H
