#ifndef HABILITARINHABILITARLOCALGUI_H
#define HABILITARINHABILITARLOCALGUI_H

#include <QDialog>

namespace Ui {
class habilitarInhabilitarLocalGUI;
}

class habilitarInhabilitarLocalGUI : public QDialog
{
    Q_OBJECT

public:
    explicit habilitarInhabilitarLocalGUI(QWidget *parent = nullptr);
    ~habilitarInhabilitarLocalGUI();

private slots:
    void on_cmdCancelar_clicked();

private:
    Ui::habilitarInhabilitarLocalGUI *ui;
};

#endif // HABILITARINHABILITARLOCALGUI_H
