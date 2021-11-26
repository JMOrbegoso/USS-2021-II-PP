#ifndef ABOUTGUI_H
#define ABOUTGUI_H

#include <QDialog>

namespace Ui {
class aboutGui;
}

class aboutGui : public QDialog
{
    Q_OBJECT

public:
    explicit aboutGui(QWidget *parent = 0);
    ~aboutGui();

private slots:
    void on_cmdClose_clicked();

private:
    Ui::aboutGui *ui;
};

#endif // ABOUTGUI_H
