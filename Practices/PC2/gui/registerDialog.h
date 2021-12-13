#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include "studentsListClass.h"
#include <QDialog>

namespace Ui {
class registerDialog;
}

class registerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit registerDialog(studentsListClass *students, QWidget *parent = nullptr);
    ~registerDialog();

private slots:
    void on_registerPushButton_pressed();

    void on_exitPushButton_pressed();

private:
    Ui::registerDialog *ui;
    studentsListClass *students;
};

#endif // REGISTERDIALOG_H
