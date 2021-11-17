#ifndef REGISTRARENFERMERAGUI_H
#define REGISTRARENFERMERAGUI_H

#include <QDialog>

namespace Ui {
class registrarEnfermeraGui;
}

class registrarEnfermeraGui : public QDialog
{
    Q_OBJECT

public:
    explicit registrarEnfermeraGui(QWidget *parent = 0);
    ~registrarEnfermeraGui();

private slots:
    void on_pushButton_clicked();

private:
    Ui::registrarEnfermeraGui *ui;
};

#endif // REGISTRARENFERMERAGUI_H
