#ifndef BUSCARATENDIDOGUI_H
#define BUSCARATENDIDOGUI_H

#include <QDialog>

namespace Ui {
class buscarAtendidoGUI;
}

class buscarAtendidoGUI : public QDialog
{
    Q_OBJECT

public:
    explicit buscarAtendidoGUI(QWidget *parent = 0);
    ~buscarAtendidoGUI();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::buscarAtendidoGUI *ui;
};

#endif // BUSCARATENDIDOGUI_H
