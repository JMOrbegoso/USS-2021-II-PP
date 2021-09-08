#include "menuOptions.h"

using namespace std;

void showAppTitle(vehicleDepotStruct vehicleDepot) {
  cout << endl
       << "-----------------------------------------------------------" << endl;
  cout << "\t Sistema virtual del deposito de vehiculos";
  cout << "\t\t" << vehicleDepot.businessName;
  cout << "-----------------------------------------------------------" << endl;
}

int requestMenuOption(vehicleDepotStruct vehicleDepot) {
  int selectedOption;

  clearScreen();
  showAppTitle(vehicleDepot);

  cout << endl
       << "Esta aplicaci�n tiene las siguientes opciones:" << endl
       << endl;

  cout << "[1] Registro de d�a" << endl;
  cout << "[2] Registro de autom�vil" << endl;
  cout << endl;
  cout << "[3] Buscar autom�vil por placa" << endl;
  cout << "[4] Buscar autom�vil por due�o" << endl;
  cout << endl;
  cout << "[5] Listar d�as y sus autom�viles registrados" << endl;
  cout << "[6] Listar TODOS los autom�viles" << endl;
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

void mainMenu(vehicleDepotStruct &vehicleDepot) {
  int selectedOption;

  do {
    selectedOption = requestMenuOption(vehicleDepot);

    if (selectedOption != 0) {
      switch (selectedOption) {
        case 1:
          registerNewDay(vehicleDepot);
          pauseProcess();
          break;
        case 2:
          registerNewVehicle(vehicleDepot);
          pauseProcess();
          break;
        case 3:
          findVehicleByLicensePlate(vehicleDepot);
          pauseProcess();
          break;
        case 4:
          findVehicleByOwner(vehicleDepot);
          pauseProcess();
          break;
        case 5:
          showDaysWithVehicles(vehicleDepot);
          pauseProcess();
          break;
        case 6:
          showAllVehicles(vehicleDepot);
          addDelay(2);
          break;
      }
    }
  } while (!(selectedOption == 0));

  cout << "Gracias por usar la app, tenga un buen d�a!";
}
