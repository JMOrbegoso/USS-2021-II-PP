#ifndef REGISTROLOCALGUI_H
#define REGISTROLOCALGUI_H

#include <QDialog>

namespace Ui {
class registroLocalGUI;
}

class registroLocalGUI : public QDialog
{
    Q_OBJECT

public:
    explicit registroLocalGUI(QWidget *parent = nullptr);
    ~registroLocalGUI();

private slots:
    void on_cmdCancelarLocal_clicked();

private:
    Ui::registroLocalGUI *ui;
};

#endif // REGISTROLOCALGUI_H
