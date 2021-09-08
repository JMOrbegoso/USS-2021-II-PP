/*
Llevar un control de un depósito de automóviles.
Se debe poder registrar por día que automóvil llega junto
a los datos del automóvil incluyendo el propietario.

Las opciones deben tener:
- Registro de día
- Registro de automóvil y sus datos
- Búsqueda de automóvil por placa
- Búsqueda de automóvil por duelo
- Lista de automóviles
- Lista de días y los automóviles que ingresaron
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