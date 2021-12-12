#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "studentsListClass.h"

namespace Ui {
class loginDialog;
}

class loginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit loginDialog(studentsListClass *students, QWidget *parent = nullptr);
    ~loginDialog();

private slots:
    void on_exitPushButton_pressed();

    void on_enterPushButton_pressed();

private:
    static int attemps;
    Ui::loginDialog *ui;
    studentsListClass *students;
};

#endif // LOGINDIALOG_H
