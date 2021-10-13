#include <iostream>

#include "listas.h"

using namespace std;

int main() {
  listaS *lS = new listaS();
  unsigned short opc;
  do {
    opc = lS->menu();
    switch (opc) {
      case 1:;
        break;
      case 2:;
        break;
      case 3:;
        break;
      case 4:;
        break;
      case 5:
        lS->registrarLibro();
        break;
      case 6:
        lS->mostrarLista();
        break;
      case 7:;
        break;
      case 8:;
        break;
    }
  } while (!(opc == 6));
  return 0;
}
