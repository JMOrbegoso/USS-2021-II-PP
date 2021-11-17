#ifndef MOSTRARFILAATENDIDOSGUI_H
#define MOSTRARFILAATENDIDOSGUI_H

#include <QDialog>

namespace Ui {
class mostrarFilaAtendidosGUI;
}

class mostrarFilaAtendidosGUI : public QDialog
{
    Q_OBJECT

public:
    explicit mostrarFilaAtendidosGUI(QWidget *parent = 0);
    ~mostrarFilaAtendidosGUI();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::mostrarFilaAtendidosGUI *ui;
};

#endif // MOSTRARFILAATENDIDOSGUI_H
