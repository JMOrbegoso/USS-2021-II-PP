#include "menuOptions.h"

using namespace std;

int requestMenuOption() {
  int selectedOption;

  clearScreen();
  showAppTitle();

  cout << endl
       << "Esta aplicaci�n tiene las siguientes opciones:" << endl
       << endl;

  cout << "[1] Registrar nueva profesi�n" << endl;
  cout << "[2] Listar profesiones registradas" << endl;
  cout << "[3] Buscar en las profesiones disponibles" << endl;
  cout << "[4] Ver una profesi�n en detalle" << endl;
  cout << "[5] Registrar nuevo curso en una profesi�n" << endl;
  cout << "[6] Listar todos los cursos dictados en la instituci�n" << endl;
  cout << "[7] Buscar un curso" << endl;
  cout << "[8] Eliminar un curso de una profesi�n" << endl;

  cout << endl;
  cout << "[0] Cerrar" << endl;

  cout << endl << "Por favor ingrese una de las opciones:" << endl;
  cin >> selectedOption;
  while (!(0 <= selectedOption && selectedOption <= 8)) {
    cout << "La opcion seleccionada fue inv�lida, por favor seleccione una "
            "opcion v�lida:"
         << endl;
    cin >> selectedOption;
  }
  return selectedOption;
}

void mainMenu(professionsList& professions) {
  int selectedOption;

  do {
    selectedOption = requestMenuOption();

    if (selectedOption != 0) {
      switch (selectedOption) {
        case 1:
          registerNewProfession(professions);
          addDelay(1.5);
          break;
        case 2:
          listProfessions(professions);
          pauseProcess();
          break;
        case 3:
          findProfessions(professions);
          pauseProcess();
          break;
        case 4:
          showProfessionDetails(professions);
          pauseProcess();
          break;
        case 5:
          registerNewSubject(professions);
          addDelay(1.5);
          break;
        case 6:
          showAllSubjects(professions);
          pauseProcess();
          break;
        case 7:
          findSubject(professions);
          pauseProcess();
          break;
        case 8:
          deleteSubject(professions);
          addDelay(1.5);
          break;
      }
    }
  } while (!(selectedOption == 0));

  cout << "Gracias por usar la app, tenga un buen d�a!";
}