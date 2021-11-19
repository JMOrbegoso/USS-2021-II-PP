#ifndef ATENDERPACIENTEGUI_H
#define ATENDERPACIENTEGUI_H

#include <QDialog>

namespace Ui {
class atenderPacienteGUI;
}

class atenderPacienteGUI : public QDialog
{
    Q_OBJECT

public:
    explicit atenderPacienteGUI(QWidget *parent = 0);
    ~atenderPacienteGUI();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::atenderPacienteGUI *ui;
};

#endif // ATENDERPACIENTEGUI_H
