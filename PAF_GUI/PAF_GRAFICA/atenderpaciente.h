#ifndef ATENDERPACIENTE_H
#define ATENDERPACIENTE_H

#include <QDialog>

namespace Ui {
class atenderPaciente;
}

class atenderPaciente : public QDialog
{
    Q_OBJECT

public:
    explicit atenderPaciente(QWidget *parent = nullptr);
    ~atenderPaciente();

private:
    Ui::atenderPaciente *ui;
};

#endif // ATENDERPACIENTE_H
