#ifndef MOSTRARDETALLESLOCALLOTES_H
#define MOSTRARDETALLESLOCALLOTES_H

#include <QWidget>

namespace Ui {
class mostrarDetallesLocalLotes;
}

class mostrarDetallesLocalLotes : public QWidget
{
    Q_OBJECT

public:
    explicit mostrarDetallesLocalLotes(QWidget *parent = nullptr);
    ~mostrarDetallesLocalLotes();

private:
    Ui::mostrarDetallesLocalLotes *ui;
};

#endif // MOSTRARDETALLESLOCALLOTES_H
