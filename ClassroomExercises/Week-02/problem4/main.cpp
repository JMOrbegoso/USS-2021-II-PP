/*
Llevar un control de un dep�sito de autom�viles.
Se debe poder registrar por d�a que autom�vil llega junto
a los datos del autom�vil incluyendo el propietario.

Las opciones deben tener:
- Registro de d�a
- Registro de autom�vil y sus datos
- B�squeda de autom�vil por placa
- B�squeda de autom�vil por duelo
- Lista de autom�viles
- Lista de d�as y los autom�viles que ingresaron
*/

#include "menu.h"

using namespace std;

int main() {
  vehicleDepotStruct depot;

  collectionsInitialization(depot);
  dataInitialization(depot);

  mainMenu(depot);

  return 0;
}