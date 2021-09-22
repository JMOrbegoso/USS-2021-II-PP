#include <Windows.h>

#include <iostream>

#include "pets.h"

using namespace std;

class appMenu {
 private:
  petsList* pets;

  int requestMenuOption() {
    int selectedOption;

    system("cls");

    cout << endl
         << "Esta aplicación tiene las siguientes opciones:" << endl
         << endl;

    cout << "[1] Registrar mascota" << endl;
    cout << "[2] Mostrar lista de mascota" << endl;
    cout << "[3] Buscar mascota" << endl;
    cout << endl;
    cout << "[0] Cerrar" << endl;

    cout << endl << "Por favor ingrese una de las opciones:" << endl;
    cin >> selectedOption;
    while (!(0 <= selectedOption && selectedOption <= 3)) {
      cout << "La opcion seleccionada fue inválida, por favor seleccione una "
              "opcion válida:"
           << endl;
      cin >> selectedOption;
    }
    return selectedOption;
  }  

 public:
  appMenu(petsList* pets) { this->pets = pets; }

  void mainMenu() {
    int selectedOption;

    do {
      selectedOption = requestMenuOption();

      if (selectedOption != 0) {
        switch (selectedOption) {
          case 1:
            pets->registerNewPet();
            Sleep(1500);
            break;
          case 2:
            pets->showPets();
            system("pause");
            break;
          case 3:
            pets->findPets();
            system("pause");
            break;
        }
      }
    } while (!(selectedOption == 0));

    cout << "Gracias por usar la app, tenga un buen día!";
  }
};
