#include <QApplication>
#include <gui/login.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    login *log = new login();
    log->show();
    return a.exec();
}
