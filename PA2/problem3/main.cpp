/*
En un supermercado existen varias tiendas y las tiendas de atenci�n contienen a
personas que laboran ellos.

Del supermercado se sabe su nombre, direcci�n, ruc, capacidad.
Los datos del supermercado deben ser asignados inicialmente.

De las tiendas se sabe su n�mero, propietario, rubro (jugler�a, zapater�a, venta
de celulares, etc.).

De los trabajadores de las tiendas se sabe sus nombres, apellidos, dni y su
sueldo.

El programa debe:
- Registrar los datos de la tienda
- Registrar los datos de un trabajador
- Registrar los datos de los productos vendidos
- Registrar los datos de los clientes
- Buscar una tienda
- Buscar una cliente
*/

#include "menuClass.h"

using namespace std;

int main() {
  mallClass* mall = new mallClass();
  dataSeedClass::seed(mall);

  menuClass* appMenu = new menuClass(mall);

  appMenu->showMenu();

  return 0;
}
