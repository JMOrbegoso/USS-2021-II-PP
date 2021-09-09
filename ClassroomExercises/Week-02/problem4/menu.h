#include "menuOptions.h"

using namespace std;

int requestMenuOption(vehicleDepotStruct vehicleDepot) {
  int selectedOption;

  clearScreen();
  showAppTitle(vehicleDepot);

  cout << endl
       << "Esta aplicación tiene las siguientes opciones:" << endl
       << endl;

  cout << "[1] Registro de día" << endl;
  cout << "[2] Registro de automóvil" << endl;
  cout << "[3] Buscar automóvil por placa" << endl;
  cout << "[4] Buscar automóvil por DNI del dueño" << endl;
  cout << "[5] Listar días y sus automóviles registrados" << endl;
  cout << "[6] Listar todos los automóviles" << endl;
  cout << endl;
  cout << "[0] Cerrar" << endl;

  cout << endl << "Por favor ingrese una de las opciones:" << endl;
  cin >> selectedOption;
  while (!(0 <= selectedOption && selectedOption <= 8)) {
    cout << "La opcion seleccionada fue inválida, por favor seleccione una "
            "opcion válida:"
         << endl;
    cin >> selectedOption;
  }
  return selectedOption;
}

void mainMenu(vehicleDepotStruct &vehicleDepot) {
  int selectedOption;

  do {
    selectedOption = requestMenuOption(vehicleDepot);

    if (selectedOption != 0) {
      switch (selectedOption) {
        case 1:
          registerNewDay(vehicleDepot);
          addDelay(1.5);
          break;
        case 2:
          registerNewVehicle(vehicleDepot);
          addDelay(1.5);
          break;
        case 3:
          findVehicleByLicensePlate(vehicleDepot);
          pauseProcess();
          break;
        case 4:
          findVehicleByOwnerDni(vehicleDepot);
          pauseProcess();
          break;
        case 5:
          showDaysWithVehicles(vehicleDepot);
          pauseProcess();
          break;
        case 6:
          showAllVehicles(vehicleDepot);
          pauseProcess();
          break;
      }
    }
  } while (!(selectedOption == 0));

  cout << "Gracias por usar la app, tenga un buen día!";
}
