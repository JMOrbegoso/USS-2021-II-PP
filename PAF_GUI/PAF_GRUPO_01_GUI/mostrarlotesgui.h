#ifndef MOSTRARLOTESGUI_H
#define MOSTRARLOTESGUI_H

#include <QDialog>

namespace Ui {
class mostrarLotesGUI;
}

class mostrarLotesGUI : public QDialog
{
    Q_OBJECT

public:
    explicit mostrarLotesGUI(QWidget *parent = nullptr);
    ~mostrarLotesGUI();

private:
    Ui::mostrarLotesGUI *ui;
};

#endif // MOSTRARLOTESGUI_H
