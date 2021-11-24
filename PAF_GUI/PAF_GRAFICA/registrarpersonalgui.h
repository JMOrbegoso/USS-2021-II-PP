#ifndef REGISTRARPERSONALGUI_H
#define REGISTRARPERSONALGUI_H

#include <QDialog>

namespace Ui {
class registrarPersonalGui;
}

class registrarPersonalGui : public QDialog
{
    Q_OBJECT

public:
    explicit registrarPersonalGui(QWidget *parent = 0);
    ~registrarPersonalGui();
    void clear();
private slots:
    void on_cmdCanMed_clicked();

    void on_cmdRegMed_clicked();

private:
    Ui::registrarPersonalGui *ui;
};

#endif // REGISTRARPERSONALGUI_H
