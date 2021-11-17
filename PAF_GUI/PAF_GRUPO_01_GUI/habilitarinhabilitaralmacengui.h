#ifndef HABILITARINHABILITARALMACENGUI_H
#define HABILITARINHABILITARALMACENGUI_H

#include <QWidget>

namespace Ui {
class habilitarInhabilitarAlmacenGui;
}

class habilitarInhabilitarAlmacenGui : public QWidget
{
    Q_OBJECT

public:
    explicit habilitarInhabilitarAlmacenGui(QWidget *parent = nullptr);
    ~habilitarInhabilitarAlmacenGui();

private:
    Ui::habilitarInhabilitarAlmacenGui *ui;
};

#endif // HABILITARINHABILITARALMACENGUI_H
