#include "menuClass.h"

#include <iostream>

#include "helpersClass.h"

using namespace std;

void menuClass::showAppTitle() {
  cout << "-------------------------------------------------------------------";
  cout << endl;
  cout << "\t\t Sistema virtual del hotel ";
  cout << this->store->getName();
  cout << endl;
  cout << "\t Dirección: ";
  cout << this->store->getAddress();
  cout << "\t RUC: ";
  cout << this->store->getRuc();
  cout << endl;
  cout << "-------------------------------------------------------------------";
  cout << endl;
}

int menuClass::requestMenuOption() {
  int selectedOption;

  helpersClass::clearScreen();
  this->showAppTitle();

  cout << endl
       << "Esta aplicación tiene las siguientes opciones:" << endl
       << endl;

  cout << "[1] Registrar nueva habitación" << endl;
  cout << "[2] Registrar nuevo cliente" << endl;
  cout << "[3] Listar todas las habitaciones" << endl;
  cout << "[4] Listar todos los clientes" << endl;
  cout << "[5] Buscar cliente por fecha de llegada" << endl;
  cout << "[6] Buscar cliente por DNI" << endl;
  cout << "[7] Calcular ganancias" << endl;

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

void menuClass::showRoomsTableHeader(int rowNumber) {
  helpersClass::gotoxy(0, rowNumber);
  cout << "#";
  helpersClass::gotoxy(5, rowNumber);
  cout << "Codigo";
  helpersClass::gotoxy(15, rowNumber);
  cout << "Habitación #";
  helpersClass::gotoxy(30, rowNumber);
  cout << "Precio";
  helpersClass::gotoxy(45, rowNumber);
  cout << "Piso";
  helpersClass::gotoxy(55, rowNumber);
  cout << "Tipo";
  helpersClass::gotoxy(75, rowNumber);
  cout << "Estado";
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
  helpersClass::gotoxy(60, rowNumber);
  cout << "Telefono";
  helpersClass::gotoxy(75, rowNumber);
  cout << "Edad";
  helpersClass::gotoxy(85, rowNumber);
  cout << "Genero";
}

void menuClass::registerNewRoom() {
  productClass* newRoom;
  productsListClass* auxRoomsList;
  unsigned short roomNumber;
  float price;
  unsigned short floor;
  string roomType;
  string status;

  helpersClass::clearScreen();
  this->showAppTitle();

  cout << "Registrar nueva habitación en el hotel:" << endl << endl;

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

  newRoom = new productClass(roomNumber, price, floor, roomType, status);

  auxRoomsList = this->store->getProducts();
  auxRoomsList->insert(newRoom);
  this->store->setProducts(auxRoomsList);

  cout << "Habitación registrada correctamente" << endl;
  cout << endl;
}

void menuClass::registerNewClient() {
  clientClass* newClient;
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

  cout << "Registrar nuevo cliente:" << endl << endl;

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

  auxClientsList = this->store->getClients();
  auxClientsList->insert(newClient);
  this->store->setClients(auxClientsList);

  cout << "Cliente registrado correctamente" << endl;
  cout << endl;
}

void menuClass::showRooms() {
  helpersClass::clearScreen();
  this->showAppTitle();

  helpersClass::gotoxy(20, 5);
  cout << "Lista de todos los clientes de la empresa:" << endl << endl;

  if (this->store->getProducts()->getLength() == 0) {
    cout << "No hay ningún cliente registrado" << endl;
    cout << "Primero registre al menos un cliente" << endl;
    return;
  }

  this->showRoomsTableHeader(7);

  this->store->getProducts()->show(8);

  cout << endl << endl;
}

void menuClass::showClients() {
  productClass* auxRoom;
  clientNodeClass* auxClientNode;

  helpersClass::clearScreen();
  this->showAppTitle();

  helpersClass::gotoxy(20, 5);
  cout << "Lista de todos los autos en la empresa:" << endl << endl;

  if (this->store->getProducts()->getLength() == 0) {
    cout << "No hay ningún cliente registrado" << endl;
    cout << "Primero registre al menos un cliente" << endl;
    return;
  }

  this->showClientsTableHeader(7);

  int i = 1;
  for (int x = 0; x < this->store->getProducts()->getLength(); x++) {
    auxRoom = this->store->getProducts()->getHead() + x;

    auxClientNode = this->store->getClients()->getHead();
    while (auxClientNode != NULL) {
      auxClientNode->getClient()->show(8 + i, i);
      i++;
      auxClientNode = auxClientNode->getNext();
    }
  }

  cout << endl << endl;
}

void menuClass::calculateProfits() {
  productClass* auxRoom;
  float profits = 0;
  int occupiedRooms = 0;

  helpersClass::clearScreen();
  this->showAppTitle();

  if (this->store->getProducts()->getLength() == 0) {
    cout << "No hay ninguna habitación registrada, por lo que no hay ganancias";
    cout << endl << endl;
    return;
  }

  helpersClass::gotoxy(20, 5);
  cout << "Ganancias actuales" << endl;

  for (int x = 0; x < this->store->getProducts()->getLength(); x++) {
    auxRoom = this->store->getProducts()->getHead() + x;

    if (this->store->getClients()->getLength() > 0) {
      profits += auxRoom->getPrice();
      occupiedRooms++;
    }
  }

  cout << endl;
  cout << "Las ganancias son de S/" << profits;
  cout << " con " << occupiedRooms;
  cout << " habitaciones ocupadas.";
  cout << endl << endl;
}

menuClass::~menuClass() {}
menuClass::menuClass(storeClass*& store) { this->store = store; }

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
        case 7:
          this->calculateProfits();
          helpersClass::pauseProcess();
          break;
      }
    }
  } while (!(selectedOption == 0));

  cout << "Gracias por usar la app, tenga un buen día!" << endl;
}
