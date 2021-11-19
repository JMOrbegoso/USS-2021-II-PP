#ifndef BUSCARALMACENGUI_H
#define BUSCARALMACENGUI_H

#include <QWidget>

namespace Ui {
class buscarAlmacenGui;
}

class buscarAlmacenGui : public QWidget
{
    Q_OBJECT

public:
    explicit buscarAlmacenGui(QWidget *parent = nullptr);
    ~buscarAlmacenGui();

private:
    Ui::buscarAlmacenGui *ui;
};

#endif // BUSCARALMACENGUI_H
