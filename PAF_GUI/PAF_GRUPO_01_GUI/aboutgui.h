#ifndef ABOUTGUI_H
#define ABOUTGUI_H

#include <QDialog>

namespace Ui {
class aboutGUI;
}

class aboutGUI : public QDialog
{
    Q_OBJECT

public:
    explicit aboutGUI(QWidget *parent = nullptr);
    ~aboutGUI();

private:
    Ui::aboutGUI *ui;
};

#endif // ABOUTGUI_H
