#ifndef GESTIONARLOTEGUI_H
#define GESTIONARLOTEGUI_H

#include <QDialog>

namespace Ui {
class gestionarLoteGui;
}

class gestionarLoteGui : public QDialog
{
    Q_OBJECT

public:
    explicit gestionarLoteGui(QWidget *parent = nullptr);
    ~gestionarLoteGui();

private:
    Ui::gestionarLoteGui *ui;
};

#endif // GESTIONARLOTEGUI_H
