#include <empresabackus.h>

int main(){
    empresaBackus *empre = new empresaBackus();
    unsigned short opc;
    do{
        opc = empre->menu();
        switch (opc) {
        case 1: empre->registrarMarcas();
                     break;
        case 2: empre->registrarLicores();
                     break;
        case 3: empre->registrarCliente();
                     break;
        case 4: empre->venderLicor();
                     break;
        case 5: empre->mostrarClientes();
                     break;
        case 6: empre->mostrarVentas();
                     break;
        case 7: empre->buscarCliente();
                     break;
        case 8: empre->mostrarLicores();
                     break;
        }
    }while (!(opc == 9));
    return 0;
}
