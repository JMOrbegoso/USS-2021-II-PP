#ifndef MENUSCLASS_H
#define MENUSCLASS_H
#include <iostream>

using namespace std;

class menusClass
{
private:

public:
    menusClass();
    ~menusClass();
    static int menuPrincipal();
    static int menuAdministrativo();
    static int menuAdminLocal();
    static int menuAdminAlmacen();
    static int menuAdminDoctor();
    static int menuAdminEnfermera();
    static int menuPaciente();
};

#endif // MENUSCLASS_H
