#ifndef BUSCARPACIENTEGUI_H
#define BUSCARPACIENTEGUI_H

#include <QDialog>

namespace Ui {
class buscarPacienteGUI;
}

class buscarPacienteGUI : public QDialog
{
    Q_OBJECT

public:
    explicit buscarPacienteGUI(QWidget *parent = 0);
    ~buscarPacienteGUI();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::buscarPacienteGUI *ui;
};

#endif // BUSCARPACIENTEGUI_H
