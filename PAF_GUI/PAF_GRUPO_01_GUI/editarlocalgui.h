#ifndef EDITARLOCALGUI_H
#define EDITARLOCALGUI_H

#include <QDialog>

namespace Ui {
class editarLocalGUI;
}

class editarLocalGUI : public QDialog
{
    Q_OBJECT

public:
    explicit editarLocalGUI(QWidget *parent = nullptr);
    ~editarLocalGUI();

private slots:
    void on_cmdCancelarLocal_clicked();

private:
    Ui::editarLocalGUI *ui;
};

#endif // EDITARLOCALGUI_H
