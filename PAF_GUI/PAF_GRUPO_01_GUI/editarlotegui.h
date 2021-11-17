#ifndef EDITARLOTEGUI_H
#define EDITARLOTEGUI_H

#include <QDialog>

namespace Ui {
class editarLoteGUI;
}

class editarLoteGUI : public QDialog
{
    Q_OBJECT

public:
    explicit editarLoteGUI(QWidget *parent = nullptr);
    ~editarLoteGUI();

private slots:
    void on_cmdCancelarLote_clicked();

private:
    Ui::editarLoteGUI *ui;
};

#endif // EDITARLOTEGUI_H
