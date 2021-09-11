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

  dayName = requestText("Ingrese el nombre del nuevo día", 2);

  return dayFactory(dayName);
}

void registerNewDay(vehicleDepotStruct &vehicleDepot) {
  dayStruct newDay;

  clearScreen();
  showAppTitle(vehicleDepot);

  gotoxy(20, 5);
  cout << "Registrar nuevo día de trabajo:" << endl;

  newDay = requestCreateDay();

  insert(vehicleDepot.days, newDay);

  cout << "El día de trabajo fue añadido correctamente";

  cout << endl << endl;
}

vehicleStruct requestCreateVehicle() {
  vehicleOwnerStruct owner;
  string licensePlate;
  string ownerFirstName;
  string ownerLastName;
  string ownerDni;

  licensePlate = requestText("Ingrese la placa del vehiculo a registrar", 2);
  ownerFirstName = requestText("Ingrese el nombre del dueño del vehiculo", 2);
  ownerLastName = requestText("Ingrese el apellido del dueño del vehiculo", 2);
  ownerDni = requestText("Ingrese el DNI del dueño del vehiculo", 2);

  owner = vehicleOwnerFactory(ownerDni, ownerFirstName, ownerLastName);

  return vehicleFactory(licensePlate, owner);
}

void registerNewVehicle(vehicleDepotStruct &vehicleDepot) {
  dayNode *dayNodePointer = new struct dayNode;
  vehicleStruct newVehicle;

  if (vehicleDepot.days.head == NULL) {
    cout << "Actualmente no hay ningún día de trabajo, por favor primero añada "
            "al menos uno";
    cout << endl << endl;
    return;
  }

  dayNodePointer =
      requestDay(vehicleDepot.days,
                 "Seleccione el día en que desea registrar el vehiculo");

  if (dayNodePointer == NULL) {
    cout << "Seleccionó un día invalido.";
    cout << endl << endl;
    return;
  }

  clearScreen();
  showAppTitle(vehicleDepot);

  gotoxy(20, 5);
  cout << "Registrar nuevo vehiculo:" << endl;

  newVehicle = requestCreateVehicle();

  insert(dayNodePointer->day.vehicles, newVehicle);

  cout << "El vehiculo fue añadido correctamente";

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
      "Por favor ingrese el DNI del dueño de vehiculo a buscar", 8, 8);

  clearScreen();
  showAppTitle(vehicleDepot);

  gotoxy(20, 5);
  cout << "Lista de todos los vehiculos con su dueño con DNI: " << dniToFind
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
      requestDay(vehicleDepot.days, "Seleccione el día que desa revisar");

  clearScreen();
  showAppTitle(vehicleDepot);

  gotoxy(20, 6);
  cout << "Dia: " << dayNodePointer->day.dayName;
  gotoxy(20, 7);
  cout << "Vehiculos registrados: " << dayNodePointer->day.vehicles.length;

  gotoxy(10, 9);
  cout << "Lista de los vehiculos registrados en el día seleccionado" << endl;

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
