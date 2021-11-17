#ifndef MOSTRARLOCALESGUI_H
#define MOSTRARLOCALESGUI_H

#include <QDialog>

namespace Ui {
class mostrarLocalesGUI;
}

class mostrarLocalesGUI : public QDialog
{
    Q_OBJECT

public:
    explicit mostrarLocalesGUI(QWidget *parent = nullptr);
    ~mostrarLocalesGUI();

private:
    Ui::mostrarLocalesGUI *ui;
};

#endif // MOSTRARLOCALESGUI_H
