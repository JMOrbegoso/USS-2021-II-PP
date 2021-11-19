#ifndef MOSTRARDETALLESLOCALDOCTORES_H
#define MOSTRARDETALLESLOCALDOCTORES_H

#include <QWidget>

namespace Ui {
class mostrarDetallesLocalDoctores;
}

class mostrarDetallesLocalDoctores : public QWidget
{
    Q_OBJECT

public:
    explicit mostrarDetallesLocalDoctores(QWidget *parent = nullptr);
    ~mostrarDetallesLocalDoctores();

private:
    Ui::mostrarDetallesLocalDoctores *ui;
};

#endif // MOSTRARDETALLESLOCALDOCTORES_H
