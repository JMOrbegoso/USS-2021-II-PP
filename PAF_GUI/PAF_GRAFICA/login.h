#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
    void on_cmdGetInto_clicked();

    void on_cmdClose_clicked();

    void on_cmdSignIn_clicked();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
