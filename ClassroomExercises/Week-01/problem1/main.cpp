/*
Se pide registrar los datos de un grupo de equipos de futbol
(c�digo, nombre, ciudad, nombre del estadio, entrenador).

Asimismo, se deber�n registrar los datos de sus jugadores
(apellidos, nombres, posici�n, edad, peso y talla).

Ud. Debe mostrar un men� en que se elija las opciones siguientes:
1. Registrar equipo de futbol
2. Registrar jugador en equipo
3. Buscar equipo de futbol (Se debe mostrar los datos del equipo)
4. Listar equipos
5. Mostrar equipos con sus jugadores
6. Salir
*/

#include "menu.h"

using namespace std;

int main() {
	sportStruct sport;

	collectionsInitialization(sport);
	dataInitialization(sport);

	mainMenu(sport);

	return 0;
}