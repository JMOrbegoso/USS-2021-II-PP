#ifndef REGISTROALMACENGUI_H
#define REGISTROALMACENGUI_H

#include <QWidget>

namespace Ui {
class registroAlmacenGui;
}

class registroAlmacenGui : public QWidget
{
    Q_OBJECT

public:
    explicit registroAlmacenGui(QWidget *parent = nullptr);
    ~registroAlmacenGui();

private:
    Ui::registroAlmacenGui *ui;
};

#endif // REGISTROALMACENGUI_H
