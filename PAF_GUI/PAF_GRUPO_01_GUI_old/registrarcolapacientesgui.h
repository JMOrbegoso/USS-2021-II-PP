#ifndef REGISTRARCOLAPACIENTESGUI_H
#define REGISTRARCOLAPACIENTESGUI_H

#include <QDialog>

namespace Ui {
class registrarColaPacientesGUI;
}

class registrarColaPacientesGUI : public QDialog
{
    Q_OBJECT

public:
    explicit registrarColaPacientesGUI(QWidget *parent = 0);
    ~registrarColaPacientesGUI();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::registrarColaPacientesGUI *ui;
};

#endif // REGISTRARCOLAPACIENTESGUI_H
