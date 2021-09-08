#include "helpers.h"
#include "structs.h"

using namespace std;

void collectionsInitialization(vehicleDepotStruct &vehicleDepot) {
  vehicleDepot.days.head = NULL;
  vehicleDepot.days.length = 0;
}

dayStruct buildDay(string dayName) {
  dayStruct day;

  day.dayName = dayName;
  day.vehicles.head = NULL;
  day.vehicles.capacity = 0;
  day.vehicles.length = 0;

  return day;
}

vehicleStruct buildVehicle(string licensePlate, string ownerFullName) {
  vehicleStruct vehicle;

  vehicle.licensePlate = licensePlate;
  vehicle.ownerFullName = ownerFullName;

  return vehicle;
}

void grow(vehiclesList &vehicles, int growIn) {
  vehicleStruct *aux = new vehicleStruct[vehicles.length + growIn];

  for (int i = 0; i < vehicles.length; i++) {
    *(aux + i) = *(vehicles.head + i);
  }

  vehicles.head = aux;
  vehicles.capacity += growIn;
}

void insert(vehiclesList &vehicles, vehicleStruct newVehicle) {
  if (vehicles.length == vehicles.capacity) {
    grow(vehicles, 2);
  }

  *(vehicles.head + vehicles.length) = newVehicle;
  vehicles.length++;
}

void insert(daysList &days, dayStruct newDay) {
  dayNode *dayNodePointer = new dayNode();

  dayNode *lastNode = days.head;

  dayNodePointer->day = newDay;
  dayNodePointer->next = NULL;

  if (days.head == NULL) {
    days.head = dayNodePointer;
  } else {
    while (lastNode->next != NULL) {
      lastNode = lastNode->next;
    }

    lastNode->next = dayNodePointer;
  }

  days.length++;
}

void dataInitialization(vehicleDepotStruct &vehicleDepot) {
  dayStruct day_1, day_2, day_3;
  vehicleStruct vehicle_1, vehicle_2, vehicle_3, vehicle_4, vehicle_5,
      vehicle_6;

  vehicleDepot.businessName = "El deposito Gonzales";

  day_1 = buildDay("Independencia");
  day_2 = buildDay("Halloween");
  day_3 = buildDay("Navidad");

  vehicle_1 = buildVehicle("2020A-55", "Flores Ricardo");
  vehicle_2 = buildVehicle("2019A-34", "Diaz Susana");

  vehicle_3 = buildVehicle("2021A-11", "Rioja Roberto");
  vehicle_4 = buildVehicle("2020A-98", "Garcia Marcos");

  vehicle_5 = buildVehicle("2010A-24", "Gonzales Maria");
  vehicle_6 = buildVehicle("2017A-30", "Lopez Guillermo");

  insert(day_1.vehicles, vehicle_1);
  insert(day_1.vehicles, vehicle_2);

  insert(day_2.vehicles, vehicle_3);
  insert(day_2.vehicles, vehicle_4);

  insert(day_3.vehicles, vehicle_5);
  insert(day_3.vehicles, vehicle_6);

  insert(vehicleDepot.days, day_1);
  insert(vehicleDepot.days, day_2);
  insert(vehicleDepot.days, day_3);
}

dayNode *iterateDaysList(daysList days, int index) {
  dayNode *dayNodePointer;

  if (0 >= index) {
    return NULL;
  }

  if (index > days.length) {
    return NULL;
  }

  dayNodePointer = days.head;

  for (int i = 1; dayNodePointer != NULL; i++) {
    if (i == index) {
      return dayNodePointer;
    }
    dayNodePointer = dayNodePointer->next;
  }

  return NULL;
}

dayNode *requestDayWithSelector(daysList &days, string message) {
  int selectedOption;
  dayNode *dayNodePointer;

  cout << endl
       << message << "." << endl
       << "Escoja entre los " << days.length << " dias siguientes:" << endl
       << endl;

  dayNodePointer = days.head;

  for (int i = 1; dayNodePointer != NULL; i++) {
    cout << "[" << i << "]";
    cout << " - ";
    cout << dayNodePointer->day.dayName << " - "
         << dayNodePointer->day.vehicles.length
         << " vehiculos registrados en este día";
    cout << endl;
    dayNodePointer = dayNodePointer->next;
  }

  cout << endl << "Introduzca la opción deseada:" << endl;
  cin >> selectedOption;

  while (!(1 <= selectedOption && selectedOption <= days.length)) {
    cout << "Por favor, introduzca un valor entre 1 y " << days.length << "."
         << endl;
    fflush(stdin);
    cin >> selectedOption;
  }

  return iterateDaysList(days, selectedOption);
}

void showDaysListHeader(int y) {
  gotoxy(0, y);
  cout << "#";
  gotoxy(5, y);
  cout << "Dia";
  gotoxy(25, y);
  cout << "# de vehiculos";
}

void showDay(dayStruct day, int y, int itemNumber) {
  gotoxy(0, y);
  cout << itemNumber;
  gotoxy(5, y);
  cout << day.dayName;
  gotoxy(25, y);
  cout << day.vehicles.length;
}

void showVehiclesListHeader(int y) {
  gotoxy(0, y);
  cout << "#";
  gotoxy(5, y);
  cout << "Placa";
  gotoxy(20, y);
  cout << "Nombre del dueño";
}

void showVehicle(vehicleStruct vehicle, int y, int itemNumber) {
  gotoxy(0, y);
  cout << itemNumber;
  gotoxy(5, y);
  cout << vehicle.licensePlate;
  gotoxy(20, y);
  cout << vehicle.ownerFullName;
}
