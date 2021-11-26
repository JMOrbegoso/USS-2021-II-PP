#ifndef GESTIONARPERSONALGUI_H
#define GESTIONARPERSONALGUI_H

#include <QDialog>

namespace Ui {
class gestionarPersonalGui;
}

class gestionarPersonalGui : public QDialog
{
    Q_OBJECT

public:
    explicit gestionarPersonalGui(QWidget *parent = 0);
    ~gestionarPersonalGui();

private slots:
    void on_bntVolPers_clicked();

private:
    Ui::gestionarPersonalGui *ui;
};

#endif // GESTIONARPERSONALGUI_H
