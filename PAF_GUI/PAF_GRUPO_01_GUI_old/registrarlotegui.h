#ifndef REGISTRARLOTEGUI_H
#define REGISTRARLOTEGUI_H

#include <QDialog>

namespace Ui {
class registrarLoteGUI;
}

class registrarLoteGUI : public QDialog
{
    Q_OBJECT

public:
    explicit registrarLoteGUI(QWidget *parent = nullptr);
    ~registrarLoteGUI();


private slots:
    void on_cmdCancelarLote_clicked();

private:
    Ui::registrarLoteGUI *ui;
};

#endif // REGISTRARLOTEGUI_H
