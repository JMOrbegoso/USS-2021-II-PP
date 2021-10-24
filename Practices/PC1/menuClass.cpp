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

void menuClass::registerNewClient() {
  roomClass* newClient;
  roomsListClass* auxClientsList;
  string firstName;
  string lastName;
  string dni;
  unsigned short age;
  bool genre;

  helpersClass::clearScreen();
  this->showAppTitle();

  cout << "Registrar nuevo cliente de la empresa:" << endl << endl;

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

  newClient = new roomClass(firstName, lastName, dni, age, genre);

  auxClientsList = this->automotive->getRooms();
  auxClientsList->insert(newClient);
  this->automotive->setRooms(auxClientsList);

  cout << "Cliente registrado correctamente" << endl;
  cout << endl;
}

void menuClass::registerNewCar() {
  clientClass* newCar;
  roomClass* auxClient;
  clientsListClass* auxCarsList;
  string brand;
  string model;
  float price;
  string plate;
  string color;
  string status;

  helpersClass::clearScreen();
  this->showAppTitle();

  cout << "Registrar nuevo auto:" << endl << endl;

  auxClient = this->automotive->getRooms()->pickRoom(
      "Seleccione el cliente al que desea asignar el auto");

  if (auxClient == NULL) {
    cout << "Eligió un cliente no valido o no hay clientes registrados";
    cout << endl << endl;
    return;
  }

  brand = helpersClass::requestText("Ingrese la marca del nuevo auto", 2);
  model = helpersClass::requestText("Ingrese el modelo del nuevo auto", 2);
  price = helpersClass::requestFloatNumber(
      "Ingrese el precio del nuevo auto",
      "Por favor ingrese un precio mayor o igual a 1.", 1);
  plate = helpersClass::requestText("Ingrese la placa del nuevo auto", 2);
  color = helpersClass::requestText("Ingrese el color del nuevo auto", 2);
  status = helpersClass::requestText("Ingrese el estado del nuevo auto", 2);

  newCar = new clientClass(brand, model, price, plate, color, status);

  auxCarsList = auxClient->getClients();
  auxCarsList->insert(newCar);
  auxClient->setClients(auxCarsList);

  cout << "Auto registrado correctamente" << endl;
  cout << endl;
}

void menuClass::showClients() {
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

void menuClass::showCars() {
  roomClass* auxClient;
  clientNodeClass* auxCarNode;

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
    auxClient = this->automotive->getRooms()->getHead() + x;

    auxCarNode = auxClient->getClients()->getHead();
    while (auxCarNode != NULL) {
      auxCarNode->getCar()->show(8 + i, i);
      i++;
      auxCarNode = auxCarNode->getNext();
    }
  }

  cout << endl << endl;
}

void menuClass::findClientByDni() {
  roomClass* auxClient;
  string dniToFind;

  dniToFind =
      helpersClass::requestText("Ingrese el DNI del cliente a buscar", 8, 8);

  helpersClass::clearScreen();
  this->showAppTitle();

  auxClient = this->automotive->getRooms()->findRoomByDni(dniToFind);

  if (auxClient == NULL) {
    cout << "No se encontró un cliente con el DNI ingresada";
    cout << endl << endl;
    return;
  }

  helpersClass::gotoxy(20, 5);
  cout << "Cliente con el DNI: " << dniToFind << endl;

  this->showClientsTableHeader(7);

  auxClient->show(9, 1);

  cout << endl << endl;
}

void menuClass::findCarByPlate() {
  clientClass* auxCar;
  string plateToFind;

  plateToFind =
      helpersClass::requestText("Ingrese la placa del auto a buscar", 4);

  helpersClass::clearScreen();
  this->showAppTitle();

  auxCar = this->automotive->getRooms()->findClientByDni(plateToFind);

  if (auxCar == NULL) {
    cout << "No se encontró un autor con la placa ingresada";
    cout << endl << endl;
    return;
  }

  helpersClass::gotoxy(20, 5);
  cout << "Auto con la placa: " << plateToFind << endl;

  this->showCarsTableHeader(7);

  auxCar->show(9, 1);

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
          this->registerNewClient();
          helpersClass::addDelay(1.5);
          break;
        case 2:
          this->registerNewCar();
          helpersClass::addDelay(1.5);
          break;
        case 3:
          this->showClients();
          helpersClass::pauseProcess();
          break;
        case 4:
          this->showCars();
          helpersClass::pauseProcess();
          break;
        case 5:
          this->findClientByDni();
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
