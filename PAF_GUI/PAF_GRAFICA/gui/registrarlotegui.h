#ifndef REGISTRARLOTEGUI_H
#define REGISTRARLOTEGUI_H

#include <QDialog>

namespace Ui {
class registrarLoteGui;
}

class registrarLoteGui : public QDialog
{
    Q_OBJECT

public:
    explicit registrarLoteGui(QWidget *parent = nullptr);
    ~registrarLoteGui();

private slots:
    void on_cancelarButton_clicked();

    void on_registrarButton_clicked();

private:
    Ui::registrarLoteGui *ui;
};

#endif // REGISTRARLOTEGUI_H
