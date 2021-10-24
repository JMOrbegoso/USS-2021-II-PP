#include "menuClass.h"

#include <iostream>

#include "helpersClass.h"

using namespace std;

void menuClass::showAppTitle() {
  cout << endl;
  cout << "-----------------------------------------------------------";
  cout << endl;
  cout << "\t\t Sistema virtual de la empresa de venta de vehículos";
  cout << " ";
  cout << this->automotive->getName();
  cout << endl;
  cout << "-----------------------------------------------------------";
  cout << endl;
}

int menuClass::requestMenuOption() {
  int selectedOption;

  helpersClass::clearScreen();
  this->showAppTitle();

  cout << endl
       << "Esta aplicación tiene las siguientes opciones:" << endl
       << endl;

  cout << "[1] Registrar nuevo cliente" << endl;
  cout << "[2] Registrar nuevo auto" << endl;
  cout << "[3] Listar los clientes" << endl;
  cout << "[4] Listar los autos" << endl;
  cout << "[5] Buscar cliente por dni" << endl;
  cout << "[6] Buscar auto por placa" << endl;

  cout << endl;
  cout << "[0] Cerrar" << endl;

  cout << endl << "Por favor ingrese una de las opciones:" << endl;
  cin >> selectedOption;
  while (!(0 <= selectedOption && selectedOption <= 9)) {
    cout << "La opcion seleccionada fue inválida, por favor seleccione una "
            "opcion válida:"
         << endl;
    cin >> selectedOption;
  }
  return selectedOption;
}

void menuClass::showClientsTableHeader(int rowNumber) {
  helpersClass::gotoxy(0, rowNumber);
  cout << "#";
  helpersClass::gotoxy(5, rowNumber);
  cout << "Codigo";
  helpersClass::gotoxy(15, rowNumber);
  cout << "Nombres";
  helpersClass::gotoxy(30, rowNumber);
  cout << "Apellidos";
  helpersClass::gotoxy(45, rowNumber);
  cout << "DNI";
  helpersClass::gotoxy(55, rowNumber);
  cout << "Edad";
  helpersClass::gotoxy(65, rowNumber);
  cout << "Genero";
}

void menuClass::showCarsTableHeader(int rowNumber) {
  helpersClass::gotoxy(0, rowNumber);
  cout << "#";
  helpersClass::gotoxy(5, rowNumber);
  cout << "Codigo";
  helpersClass::gotoxy(15, rowNumber);
  cout << "Marca";
  helpersClass::gotoxy(30, rowNumber);
  cout << "Modelo";
  helpersClass::gotoxy(45, rowNumber);
  cout << "Precio (S/)";
  helpersClass::gotoxy(60, rowNumber);
  cout << "Placa";
  helpersClass::gotoxy(70, rowNumber);
  cout << "Color";
  helpersClass::gotoxy(80, rowNumber);
  cout << "Estado";
}

void menuClass::registerNewRoom() {
  roomClass* newRoom;
  roomsListClass* auxRoomsList;
  unsigned short roomNumber;
  float price;
  unsigned short floor;
  string roomType;
  string status;

  helpersClass::clearScreen();
  this->showAppTitle();

  cout << "Registrar nuevo cliente de la empresa:" << endl << endl;

  roomNumber = helpersClass::requestIntegerNumber(
      "Ingrese el numero de la nueva habitación",
      "Por favor ingrese un numero valido", 0);
  price =
      helpersClass::requestMoney("Ingrese el precio de la nueva habitación", 1);
  floor = helpersClass::requestIntegerNumber(
      "Ingrese el piso de la nueva habitación",
      "Por favor ingrese un numero de piso valido", 1);
  roomType = helpersClass::requestText(
      "Ingrese el tipo de habitación (clasica, matrimonial, vip)", 2);
  status = helpersClass::requestText(
      "Ingrese el estado de la nueva habitación (ocupada, libre, en "
      "mantenimiento, etc)",
      2);

  newRoom = new roomClass(roomNumber, price, floor, roomType, status);

  auxRoomsList = this->automotive->getRooms();
  auxRoomsList->insert(newRoom);
  this->automotive->setRooms(auxRoomsList);

  cout << "Cliente registrado correctamente" << endl;
  cout << endl;
}

void menuClass::registerNewClient() {
  clientClass* newClient;
  roomClass* auxRoom;
  clientsListClass* auxClientsList;
  string firstName;
  string lastName;
  string dni;
  string address;
  string phone;
  string arrivalDate;
  unsigned short age;
  bool genre;

  helpersClass::clearScreen();
  this->showAppTitle();

  cout << "Registrar nuevo auto:" << endl << endl;

  auxRoom = this->automotive->getRooms()->pickRoom(
      "Seleccione el cliente al que desea asignar el auto");

  if (auxRoom == NULL) {
    cout << "Eligió un cliente no valido o no hay clientes registrados";
    cout << endl << endl;
    return;
  }

  firstName =
      helpersClass::requestText("Ingrese los nombres del nuevo cliente", 2);
  lastName =
      helpersClass::requestText("Ingrese los apellidos del nuevo cliente", 2);
  dni = helpersClass::requestText("Ingrese el DNI del nuevo cliente", 8, 8);
  age = helpersClass::requestIntegerNumber(
      "Ingrese la edad del nuevo cliente",
      "Por favor ingrese una edad igual o mayor a 18", 18);
  genre = helpersClass::requestGenre(
      "Porfavor ingrese el genero del nuevo cliente");
  address =
      helpersClass::requestText("Ingrese la direccion del nuevo cliente", 1);
  phone =
      helpersClass::requestText("Ingrese el telefono del nuevo cliente", 9, 9);
  arrivalDate =
      helpersClass::requestText("Ingrese la fecha de llegada del cliente", 2);

  newClient = new clientClass(firstName, lastName, dni, address, phone, age,
                              genre, arrivalDate);

  auxClientsList = auxRoom->getClients();
  auxClientsList->insert(newClient);
  auxRoom->setClients(auxClientsList);

  cout << "Auto registrado correctamente" << endl;
  cout << endl;
}

void menuClass::showRooms() {
  helpersClass::clearScreen();
  this->showAppTitle();

  helpersClass::gotoxy(20, 5);
  cout << "Lista de todos los clientes de la empresa:" << endl << endl;

  if (this->automotive->getRooms()->getLength() == 0) {
    cout << "No hay ningún cliente registrado" << endl;
    cout << "Primero registre al menos un cliente" << endl;
    return;
  }

  this->showClientsTableHeader(7);

  this->automotive->getRooms()->show(8);

  cout << endl << endl;
}

void menuClass::showClients() {
  roomClass* auxRoom;
  clientNodeClass* auxClientNode;

  helpersClass::clearScreen();
  this->showAppTitle();

  helpersClass::gotoxy(20, 5);
  cout << "Lista de todos los autos en la empresa:" << endl << endl;

  if (this->automotive->getRooms()->getLength() == 0) {
    cout << "No hay ningún cliente registrado" << endl;
    cout << "Primero registre al menos un cliente" << endl;
    return;
  }

  this->showCarsTableHeader(7);

  int i = 1;
  for (int x = 0; x < this->automotive->getRooms()->getLength(); x++) {
    auxRoom = this->automotive->getRooms()->getHead() + x;

    auxClientNode = auxRoom->getClients()->getHead();
    while (auxClientNode != NULL) {
      auxClientNode->getClient()->show(8 + i, i);
      i++;
      auxClientNode = auxClientNode->getNext();
    }
  }

  cout << endl << endl;
}

void menuClass::findRoomByNumber() {
  roomClass* auxRoom;
  unsigned short dniToFind;

  dniToFind = helpersClass::requestIntegerNumber(
      "Ingrese el numero de la habitación a buscar",
      "Por favor ingrese un numero valido", 0);

  helpersClass::clearScreen();
  this->showAppTitle();

  auxRoom = this->automotive->getRooms()->findRoomByRoomNumber(dniToFind);

  if (auxRoom == NULL) {
    cout << "No se encontró un cliente con el DNI ingresada";
    cout << endl << endl;
    return;
  }

  helpersClass::gotoxy(20, 5);
  cout << "Cliente con el DNI: " << dniToFind << endl;

  this->showClientsTableHeader(7);

  auxRoom->show(9, 1);

  cout << endl << endl;
}

void menuClass::findCarByPlate() {
  clientClass* auxClient;
  string plateToFind;

  plateToFind =
      helpersClass::requestText("Ingrese la placa del auto a buscar", 4);

  helpersClass::clearScreen();
  this->showAppTitle();

  auxClient = this->automotive->getRooms()->findClientByDni(plateToFind);

  if (auxClient == NULL) {
    cout << "No se encontró un autor con la placa ingresada";
    cout << endl << endl;
    return;
  }

  helpersClass::gotoxy(20, 5);
  cout << "Auto con la placa: " << plateToFind << endl;

  this->showCarsTableHeader(7);

  auxClient->show(9, 1);

  cout << endl << endl;
}

menuClass::~menuClass() {}
menuClass::menuClass(hotelClass*& automotive) { this->automotive = automotive; }

void menuClass::showMenu() {
  int selectedOption;

  do {
    selectedOption = this->requestMenuOption();

    if (selectedOption != 0) {
      switch (selectedOption) {
        case 1:
          this->registerNewRoom();
          helpersClass::addDelay(1.5);
          break;
        case 2:
          this->registerNewClient();
          helpersClass::addDelay(1.5);
          break;
        case 3:
          this->showRooms();
          helpersClass::pauseProcess();
          break;
        case 4:
          this->showClients();
          helpersClass::pauseProcess();
          break;
        case 5:
          this->findRoomByNumber();
          helpersClass::pauseProcess();
          break;
        case 6:
          this->findCarByPlate();
          helpersClass::pauseProcess();
          break;
      }
    }
  } while (!(selectedOption == 0));

  cout << "Gracias por usar la app, tenga un buen día!" << endl;
}
