#include <iostream>
#include <restaurante.h>

int main()
{
    restaurante *resta = new restaurante();
    unsigned short opc;
    do{
        opc = resta->menuOpciones();
        switch (opc) {
            case 1: resta->registrarCategoria();
                break;
            case 2: resta->registrarProducto();
                break;
            case 3: resta->registrarCliente();
                break;
            case 4: resta->venderProductoCliente();
                break;
            case 5: resta->listarVentasRestaurante();
                break;
            case 6:
                break;
        }
    }while (!(opc == 7));
    return 0;
}
