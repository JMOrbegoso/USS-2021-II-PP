/*
Una micro-empresa Lambayecana, necesita administrar sus operaciones básicas de
clientes, productos y ventas, para lo cual lo han contratado a usted para hacer
una demostración básica y rápida de las funcionalidades del sistema, que sirva
de base para capturar requerimientos con mayor detalle y el usuario pueda
verificar y validar las necesidades de informatización. Desarrollar un programa
en C++, utilizando estructura de datos, que permita administrar una tienda de
ventas.

===MENU DE OPCIONES======
1: Registrar Cliente
2: Registrar Producto
3: Realizar la venta
4: Imprimir lista de ventas realizadas
5: Imprimir lista de clientes
6: Imprimir lista de productos
0: Salir
*/

#include "menuClass.h"

using namespace std;

int main() {
  storeClass* store = new storeClass();
  dataSeedClass::seed(store);

  menuClass* appMenu = new menuClass(store);

  appMenu->showMenu();

  return 0;
}
