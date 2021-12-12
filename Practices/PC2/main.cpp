#include "gui/loginDialog.h"
#include "dataSeederClass.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    // Class instance
    academyClass *academy = new academyClass();

    // Load data
    dataSeederClass::seed(academy);

    // Show UI
    QApplication a(argc, argv);

    loginDialog *dialog = new loginDialog(academy->getStudents());
    dialog->show();

    return a.exec();
}
