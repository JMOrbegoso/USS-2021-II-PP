#include "structFunctions.h"

using namespace std;

void showAppTitle(vehicleDepotStruct vehicleDepot) {
  cout << endl;
  cout << "-----------------------------------------------------------";
  cout << endl;
  cout << "\t Sistema virtual del deposito de vehiculos";
  cout << endl;
  cout << "\t\t" << vehicleDepot.businessName;
  cout << endl;
  cout << "-----------------------------------------------------------";
  cout << endl;
}

dayStruct requestCreateDay() {
  string dayName;

  dayName = requestText("Ingrese el nombre del nuevo d�a", 2);

  return dayFactory(dayName);
}

void registerNewDay(vehicleDepotStruct &vehicleDepot) {
  dayStruct newDay;

  clearScreen();
  showAppTitle(vehicleDepot);

  gotoxy(20, 5);
  cout << "Registrar nuevo d�a de trabajo:" << endl;

  newDay = requestCreateDay();

  insert(vehicleDepot.days, newDay);

  cout << "El d�a de trabajo fue a�adido correctamente";

  cout << endl << endl;
}

vehicleStruct requestCreateVehicle() {
  vehicleOwnerStruct owner;
  string licensePlate;
  string ownerFirstName;
  string ownerLastName;
  string ownerDni;

  licensePlate = requestText("Ingrese la placa del vehiculo a registrar", 2);
  ownerFirstName = requestText("Ingrese el nombre del due�o del vehiculo", 2);
  ownerLastName = requestText("Ingrese el apellido del due�o del vehiculo", 2);
  ownerDni = requestText("Ingrese el DNI del due�o del vehiculo", 2);

  owner = vehicleOwnerFactory(ownerDni, ownerFirstName, ownerLastName);

  return vehicleFactory(licensePlate, owner);
}

void registerNewVehicle(vehicleDepotStruct &vehicleDepot) {
  dayNode *dayNodePointer = new struct dayNode;
  vehicleStruct newVehicle;

  if (vehicleDepot.days.head == NULL) {
    cout << "Actualmente no hay ning�n d�a de trabajo, por favor primero a�ada "
            "al menos uno";
    cout << endl << endl;
    return;
  }

  dayNodePointer =
      requestDay(vehicleDepot.days,
                 "Seleccione el d�a en que desea registrar el vehiculo");

  if (dayNodePointer == NULL) {
    cout << "Seleccion� un d�a invalido.";
    cout << endl << endl;
    return;
  }

  clearScreen();
  showAppTitle(vehicleDepot);

  gotoxy(20, 5);
  cout << "Registrar nuevo vehiculo:" << endl;

  newVehicle = requestCreateVehicle();

  insert(dayNodePointer->day.vehicles, newVehicle);

  cout << "El vehiculo fue a�adido correctamente";

  cout << endl << endl;
}

void findVehicleByLicensePlate(vehicleDepotStruct vehicleDepot) {
  dayNode *dayNodePointer;
  vehicleStruct *vehiclePointer;
  string licensePlateToFind;

  licensePlateToFind =
      requestText("Por favor ingrese la placa a buscar", 2, 10);

  clearScreen();
  showAppTitle(vehicleDepot);

  gotoxy(20, 5);
  cout << "Lista de todos los vehiculos con una placa similar a "
       << licensePlateToFind << endl;

  showVehiclesListHeader(7);

  dayNodePointer = vehicleDepot.days.head;
  int i = 1;
  while (dayNodePointer != NULL) {
    for (int x = 0; x < dayNodePointer->day.vehicles.length; x++) {
      vehiclePointer = dayNodePointer->day.vehicles.head + x;

      if (containsText(vehiclePointer->licensePlate, licensePlateToFind)) {
        showVehicle(*vehiclePointer, 8 + i, i);
        i++;
      }
    }

    dayNodePointer = dayNodePointer->next;
  }

  cout << endl << endl;
}

void findVehicleByOwnerDni(vehicleDepotStruct vehicleDepot) {
  dayNode *dayNodePointer;
  vehicleStruct *vehiclePointer;
  string dniToFind;

  dniToFind = requestText(
      "Por favor ingrese el DNI del due�o de vehiculo a buscar", 8, 8);

  clearScreen();
  showAppTitle(vehicleDepot);

  gotoxy(20, 5);
  cout << "Lista de todos los vehiculos con su due�o con DNI: " << dniToFind
       << endl;

  showVehiclesListHeader(7);

  dayNodePointer = vehicleDepot.days.head;
  int i = 1;
  while (dayNodePointer != NULL) {
    for (int x = 0; x < dayNodePointer->day.vehicles.length; x++) {
      vehiclePointer = dayNodePointer->day.vehicles.head + x;

      if (vehiclePointer->owner.dni == dniToFind) {
        showVehicle(*vehiclePointer, 8 + i, i);
        i++;
      }
    }

    dayNodePointer = dayNodePointer->next;
  }

  cout << endl << endl;
}

void showDaysWithVehicles(vehicleDepotStruct vehicleDepot) {
  dayNode *dayNodePointer;
  vehicleStruct *vehiclePointer;

  dayNodePointer =
      requestDay(vehicleDepot.days, "Seleccione el d�a que desa revisar");

  clearScreen();
  showAppTitle(vehicleDepot);

  gotoxy(20, 6);
  cout << "Dia: " << dayNodePointer->day.dayName;
  gotoxy(20, 7);
  cout << "Vehiculos registrados: " << dayNodePointer->day.vehicles.length;

  gotoxy(10, 9);
  cout << "Lista de los vehiculos registrados en el d�a seleccionado" << endl;

  int i = 1;
  showVehiclesListHeader(11);
  for (int x = 0; x < dayNodePointer->day.vehicles.length; x++) {
    vehiclePointer = dayNodePointer->day.vehicles.head + x;

    showVehicle(*vehiclePointer, 12 + i, i);
    i++;
  }

  cout << endl << endl;
}

void showAllVehicles(vehicleDepotStruct vehicleDepot) {
  dayNode *dayNodePointer;
  vehicleStruct *vehiclePointer;

  clearScreen();
  showAppTitle(vehicleDepot);

  gotoxy(20, 5);
  cout << "Lista de todos los vehiculos" << endl;

  showVehiclesListHeader(7);

  dayNodePointer = vehicleDepot.days.head;
  int i = 1;
  while (dayNodePointer != NULL) {
    for (int x = 0; x < dayNodePointer->day.vehicles.length; x++) {
      vehiclePointer = dayNodePointer->day.vehicles.head + x;

      showVehicle(*vehiclePointer, 8 + i, i);
      i++;
    }

    dayNodePointer = dayNodePointer->next;
  }

  cout << endl << endl;
}
