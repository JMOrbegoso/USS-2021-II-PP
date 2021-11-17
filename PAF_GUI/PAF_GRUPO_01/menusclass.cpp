#include "menusclass.h"
#include <basicas.h>

menusClass::menusClass()
{

}

menusClass::~menusClass()
{

}

int menusClass::menuPrincipal(){
    unsigned short op1;
    system("cls");
    basicas::gotoxy(34, 4); cout << "----------------------------------------------------------";
    basicas::gotoxy(34, 5); cout << "| SISTEMA VIRTUAL DE VACUNACION CONTRA DENGUE |";
    basicas::gotoxy(34, 6); cout << "----------------------------------------------------------";
    basicas::gotoxy(30, 8); cout << "[1]. Menu Administrador";
    basicas::gotoxy(30, 9); cout << "[2]. Menu Enfermera";
    basicas::gotoxy(30, 10); cout << "[0]. Salir del Programa";
    do{
        basicas::gotoxy(32, 12); cout << "-> Ingrese Opcion: ";
        cin >> op1;
    }while (!(op1 >= 0 && op1 <= 2));
    return op1;
}

int menusClass::menuAdministrativo(){
    unsigned short op2;
    system("cls");
    basicas::gotoxy(34, 4); cout << "----------------------------------------------------------";
    basicas::gotoxy(34, 5); cout << "| SISTEMA VIRTUAL DE VACUNACION CONTRA DENGUE |";
    basicas::gotoxy(34, 6); cout << "----------------------------------------------------------";
    basicas::gotoxy(30, 8); cout << "[1]. Administrar Locales";
    basicas::gotoxy(30, 9); cout << "[2]. Administrar Almacen";
    basicas::gotoxy(30, 14); cout << "[3]. Administrar Doctor";
    basicas::gotoxy(30, 15); cout << "[4]. Administrar Enfermera";
    basicas::gotoxy(30, 16); cout << "[0]. Regresar Menu Principal";
    do{
        basicas::gotoxy(32, 18); cout << "-> Ingrese Opcion: ";
        cin >> op2;
    }while (!(op2 >= 0 && op2 <= 4));
    return op2;
}

int menusClass::menuAdminLocal(){
    unsigned short op3;
    system("cls");
    basicas::gotoxy(34, 4); cout << "----------------------------------------------------------";
    basicas::gotoxy(34, 5); cout << "| SISTEMA VIRTUAL DE VACUNACION CONTRA DENGUE |";
    basicas::gotoxy(34, 6); cout << "----------------------------------------------------------";
    basicas::gotoxy(30, 8); cout << "[1]. Registrar Local";
    basicas::gotoxy(30, 9); cout << "[2]. Mostrar Locales Registrados";
    basicas::gotoxy(30, 10); cout << "[3]. Editar Local";
    basicas::gotoxy(30, 11); cout << "[4]. Mostrar Locales Habilitados / Deshabilitados";
    basicas::gotoxy(30, 11); cout << "[5]. Habilitar Local";
    basicas::gotoxy(30, 12); cout << "[6]. Buscar Local Registrado";
    basicas::gotoxy(30, 13); cout << "[7]. Mostrar Detalle del Local";
    basicas::gotoxy(30, 14); cout << "[0]. Regresar Menu Adminsitrador";
    do{
        basicas::gotoxy(32, 16); cout << "-> Ingrese Opcion: ";
        cin >> op3;
    }while (!(op3 >= 0 && op3 <= 7));
    return op3;
}

int menusClass::menuAdminAlmacen(){
    unsigned short op4;
    system("cls");
    basicas::gotoxy(34, 4); cout << "----------------------------------------------------------";
    basicas::gotoxy(34, 5); cout << "| SISTEMA VIRTUAL DE VACUNACION CONTRA DENGUE |";
    basicas::gotoxy(34, 6); cout << "----------------------------------------------------------";
    basicas::gotoxy(30, 8); cout << "[1]. Registrar Almacen";
    basicas::gotoxy(30, 9); cout << "[2]. Mostrar Almacenes Registrados";
    basicas::gotoxy(30, 10); cout << "[3]. Editar Almacen";
    basicas::gotoxy(30, 11); cout << "[4]. Mostrar Almacenes Habilitados / Deshabilitados";
    basicas::gotoxy(30, 11); cout << "[5]. Habilitar Almacen";
    basicas::gotoxy(30, 12); cout << "[6]. Buscar Almacen Registrado";
    basicas::gotoxy(30, 13); cout << "[0]. Regresar Menu Adminsitrador";
    do{
        basicas::gotoxy(32, 15); cout << "-> Ingrese Opcion: ";
        cin >> op4;
    }while (!(op4 >= 0 && op4 <= 6));
    return op4;
}

int menusClass::menuAdminDoctor(){
    unsigned short op5;
    system("cls");
    basicas::gotoxy(34, 4); cout << "----------------------------------------------------------";
    basicas::gotoxy(34, 5); cout << "| SISTEMA VIRTUAL DE VACUNACION CONTRA DENGUE |";
    basicas::gotoxy(34, 6); cout << "----------------------------------------------------------";
    basicas::gotoxy(30, 8); cout << "[1]. Registrar Doctor en un Local";
    basicas::gotoxy(30, 9); cout << "[2]. Mostrar Doctores Registrados";
    basicas::gotoxy(30, 10); cout << "[3]. Editar Datos de Doctor";
    basicas::gotoxy(30, 11); cout << "[4]. Mostrar Doctores Habilitados / Deshabilitados";
    basicas::gotoxy(30, 11); cout << "[5]. Habilitar Doctor";
    basicas::gotoxy(30, 12); cout << "[6]. Buscar Doctor Registrado";
    basicas::gotoxy(30, 13); cout << "[0]. Regresar Menu Adminsitrador";
    do{
        basicas::gotoxy(32, 15); cout << "-> Ingrese Opcion: ";
        cin >> op5;
    }while (!(op5 >= 0 && op5 <= 6));
    return op5;
}

int menusClass::menuAdminEnfermera(){
    unsigned short op6;
    system("cls");
    basicas::gotoxy(34, 4); cout << "----------------------------------------------------------";
    basicas::gotoxy(34, 5); cout << "| SISTEMA VIRTUAL DE VACUNACION CONTRA DENGUE |";
    basicas::gotoxy(34, 6); cout << "----------------------------------------------------------";
    basicas::gotoxy(30, 8); cout << "[1]. Registrar Enfermera en un Local";
    basicas::gotoxy(30, 9); cout << "[2]. Mostrar Enfermeras Registradas";
    basicas::gotoxy(30, 10); cout << "[3]. Editar Datos de Enfermera";
    basicas::gotoxy(30, 11); cout << "[4]. Mostrar Enfermeras Habilitadas / Deshabilitadas";
    basicas::gotoxy(30, 11); cout << "[5]. Habilitar Enfermera";
    basicas::gotoxy(30, 12); cout << "[6]. Buscar Enfermera Registrada";
    basicas::gotoxy(30, 13); cout << "[0]. Regresar Menu Adminsitrador";
    do{
        basicas::gotoxy(32, 15); cout << "-> Ingrese Opcion: ";
        cin >> op6;
    }while (!(op6 >= 0 && op6 <= 6));
    return op6;
}

int menusClass::menuPaciente(){
    unsigned short op7;
    system("cls");
    basicas::gotoxy(34, 4); cout << "----------------------------------------------------------";
    basicas::gotoxy(34, 5); cout << "| SISTEMA VIRTUAL DE VACUNACION CONTRA DENGUE |";
    basicas::gotoxy(34, 6); cout << "----------------------------------------------------------";
    basicas::gotoxy(30, 8); cout << "[1]. Registrar Paciente en un Local";
    basicas::gotoxy(30, 9); cout << "[2]. Mostrar Pacientes Registradas";
    basicas::gotoxy(30, 10); cout << "[3]. Editar Datos de Paciente";
    basicas::gotoxy(30, 11); cout << "[4]. Buscar Paciente Registrado";
    basicas::gotoxy(30, 12); cout << "[0]. Regresar Menu Adminsitrador";
    do{
        basicas::gotoxy(32, 14); cout << "-> Ingrese Opcion: ";
        cin >> op7;
    }while (!(op7 >= 0 && op7 <= 4));
    return op7;
}
