#ifndef REGISTRARMEDICOGUI_H
#define REGISTRARMEDICOGUI_H

#include <QDialog>

namespace Ui {
class registrarMedicoGui;
}

class registrarMedicoGui : public QDialog
{
    Q_OBJECT

public:
    explicit registrarMedicoGui(QWidget *parent = 0);
    ~registrarMedicoGui();

private slots:
    void on_pushButton_clicked();

    void on_canMedCmd_clicked();

private:
    Ui::registrarMedicoGui *ui;
};

#endif // REGISTRARMEDICOGUI_H
