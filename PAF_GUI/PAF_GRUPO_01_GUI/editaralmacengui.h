#ifndef EDITARALMACENGUI_H
#define EDITARALMACENGUI_H

#include <QWidget>

namespace Ui {
class editarAlmacenGui;
}

class editarAlmacenGui : public QWidget
{
    Q_OBJECT

public:
    explicit editarAlmacenGui(QWidget *parent = nullptr);
    ~editarAlmacenGui();

private:
    Ui::editarAlmacenGui *ui;
};

#endif // EDITARALMACENGUI_H
