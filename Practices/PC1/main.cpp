/*
1. El hotel “SIN COMENTARIOS”, ubicado en la calle Lora y Cordero 867, Chiclayo,
con ruc 20167834567, atiende a sus clientes ofreciéndoles habitaciones de 3
tipos: clásica, matrimonial y vip. De las habitaciones se registra su código,
número, su precio, su tipo, su piso y su estado (ocupada, libre y en
mantenimiento). El hotel alquila las habitaciones a sus clientes de los cuales
se registra: código, dni, nombres, apellidos, dirección, teléfono. Al momento de
registrar a un cliente se debe registrar además el alojamiento en el que se
registra: la fecha de llegada, la fecha de salida, el DNI del cliente y la
habitación. Cuando se asigna la habitación debe cambiar el estado a ocupado.
Los datos generales del hotel deben ser asignados inicialmente.
Realizar un programa que:
- Registre las habitaciones <- OK
- Registre un cliente y su alojamiento <- OK
- Liste las habitaciones libres y ocupadas <- OK
- Liste las personas alojadas en cierta fecha <- OK
- Buscar una persona alojada <- OK
- Mostrar el monto total recaudado por los alojamiento
*/

#include "menuClass.h"

using namespace std;

int main() {
  hotelClass* automotive = new hotelClass();
  dataSeedClass::seed(automotive);

  menuClass* appMenu = new menuClass(automotive);

  appMenu->showMenu();

  return 0;
}
