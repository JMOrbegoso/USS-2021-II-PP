#ifndef REGISTRARLOCAL_H
#define REGISTRARLOCAL_H

#include <QDialog>

namespace Ui {
class registrarLocal;
}

class registrarLocal : public QDialog
{
    Q_OBJECT

public:
    explicit registrarLocal(QWidget *parent = nullptr);
    ~registrarLocal();

private slots:
    void on_cancelarLocalPb_clicked();

private:
    Ui::registrarLocal *ui;
};

#endif // REGISTRARLOCAL_H
