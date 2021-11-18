#ifndef LOGINSYSTEM_H
#define LOGINSYSTEM_H

#include <QDialog>

namespace Ui {
class loginSystem;
}

class loginSystem : public QDialog
{
    Q_OBJECT

public:
    explicit loginSystem(QWidget *parent = 0);
    ~loginSystem();

private slots:
    void on_cmdCerrar_clicked();

    void on_cmdIngresar_clicked();

private:
    Ui::loginSystem *ui;
};

#endif // LOGINSYSTEM_H
