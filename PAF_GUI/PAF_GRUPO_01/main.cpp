#include <vacunadengueclass.h>
#include <menusclass.h>

int main3(){
    menusClass *menu = new menusClass();
    unsigned short opc2;
    do{
        opc2 = menu->menuPrincipal();
        switch(opc2){
            case 1:
                      break;
            case 2:
                      break;
            case 3:
                      break;
            case 4:
                      break;
        }
    }while (!(opc2 == 0));
    return opc2;
}

int main2(){
    menusClass *menu = new menusClass();
    unsigned short opc1;
    do{
        opc1 = menu->menuPrincipal();
        switch(opc1){
            case 1: menu->menuAdminLocal();
                      break;
            case 2: menu->menuAdminAlmacen();
                      break;
            case 3: menu->menuAdminDoctor();
                      break;
            case 4: menu->menuAdminEnfermera();
                      break;
        }
    }while (!(opc1 == 0));
    return opc1;
}

int main(){
    menusClass *menu = new menusClass();
    unsigned short opc;
    do{
        opc = menu->menuPrincipal();
        switch(opc){
            case 1: menu->menuAdministrativo();
                      break;
            case 2: menu->menuPaciente();
                      break;
        }
    }while (!(opc == 0));
    return 0;
}

