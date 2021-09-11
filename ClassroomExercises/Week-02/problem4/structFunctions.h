#include "helpers.h"
#include "structs.h"

using namespace std;

void initDaysList(daysList &days) {
  days.head = NULL;
  days.length = 0;
}

void initVehiclesList(vehiclesList &vehicles) {
  vehicles.head = NULL;
  vehicles.capacity = 0;
  vehicles.length = 0;
}

void initPrimaryStruct(vehicleDepotStruct &vehicleDepot) {
  initDaysList(vehicleDepot.days);
}

vehicleOwnerStruct vehicleOwnerFactory(string dni, string firstName,
                                       string lastName) {
  vehicleOwnerStruct vehicleOwner;

  vehicleOwner.firstName = firstName;
  vehicleOwner.lastName = lastName;
  vehicleOwner.dni = dni;

  return vehicleOwner;
}

vehicleStruct vehicleFactory(string licensePlate, vehicleOwnerStruct owner) {
  vehicleStruct vehicle;

  vehicle.licensePlate = licensePlate;
  vehicle.owner = owner;

  return vehicle;
}

dayStruct dayFactory(string dayName) {
  dayStruct day;

  day.dayName = dayName;

  initVehiclesList(day.vehicles);

  return day;
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

dayNode *requestDay(daysList &days, string message) {
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
  cout << "DNI del dueño";
  gotoxy(40, y);
  cout << "Nombres del dueño";
  gotoxy(70, y);
  cout << "Nombres del dueño";
}

void showVehicle(vehicleStruct vehicle, int y, int itemNumber) {
  gotoxy(0, y);
  cout << itemNumber;
  gotoxy(5, y);
  cout << vehicle.licensePlate;
  gotoxy(20, y);
  cout << vehicle.owner.dni;
  gotoxy(40, y);
  cout << vehicle.owner.firstName;
  gotoxy(70, y);
  cout << vehicle.owner.lastName;
}

void dataSeed(vehicleDepotStruct &vehicleDepot) {
  vehicleOwnerStruct vehicleOwner_1, vehicleOwner_2, vehicleOwner_3,
      vehicleOwner_4, vehicleOwner_5, vehicleOwner_6;
  vehicleStruct vehicle_1, vehicle_2, vehicle_3, vehicle_4, vehicle_5,
      vehicle_6;
  dayStruct day_1, day_2, day_3;

  vehicleDepot.businessName = "El deposito Gonzales";

  day_1 = dayFactory("Independencia 2021");
  day_2 = dayFactory("Halloween 2020");
  day_3 = dayFactory("Navidad 2020");

  vehicleOwner_1 = vehicleOwnerFactory("10117618", "Ricardo", "Flores");
  vehicleOwner_2 = vehicleOwnerFactory("80121607", "Susana", "Diaz");
  vehicleOwner_3 = vehicleOwnerFactory("71188517", "Roberto", "Rioja");
  vehicleOwner_4 = vehicleOwnerFactory("52421620", "Marcos", "Garcia");
  vehicleOwner_5 = vehicleOwnerFactory("95101014", "Maria", "Gonzales");
  vehicleOwner_6 = vehicleOwnerFactory("13729607", "Guillermo", "Lopez");

  vehicle_1 = vehicleFactory("2020A-55", vehicleOwner_1);
  vehicle_2 = vehicleFactory("2019A-34", vehicleOwner_2);

  vehicle_3 = vehicleFactory("2021A-11", vehicleOwner_3);
  vehicle_4 = vehicleFactory("2020A-98", vehicleOwner_4);

  vehicle_5 = vehicleFactory("2010A-24", vehicleOwner_5);
  vehicle_6 = vehicleFactory("2017A-30", vehicleOwner_6);

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