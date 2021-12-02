#include "menuClass.h"

#include <iostream>

#include "helpersClass.h"

#define row 9

using namespace std;

void menuClass::showAppTitle() {
  cout << endl;
  cout << "-----------------------------------------------------------";
  cout << endl;
  cout << "\t\t Sistema virtual del mall";
  cout << " ";
  cout << this->mall->getName();
  cout << endl << endl;
  cout << "Dirección: ";
  cout << this->mall->getAddress();
  cout << ".";
  cout << endl;
  cout << "RUC: ";
  cout << this->mall->getRuc();
  cout << ".";
  cout << endl;
  cout << "Capacidad: ";
  cout << this->mall->getCapacity();
  cout << " personas.";
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

  cout << "[1] Registrar nueva tienda" << endl;
  cout << "[2] Registrar nuevo empleado" << endl;
  cout << "[3] Registrar nuevo cliente" << endl;
  cout << endl;
  cout << "[4] Listar todas las tiendas" << endl;
  cout << "[5] Listar todos los empleados" << endl;
  cout << "[6] Listar todos los clientes" << endl;
  cout << endl;
  cout << "[7] Buscar tienda por código" << endl;
  cout << "[8] Buscar empleado por DNI" << endl;
  cout << "[9] Buscar cliente por DNI" << endl;

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

void menuClass::showStoresTableHeader(int rowNumber) {
  helpersClass::gotoxy(0, rowNumber);
  cout << "#";
  helpersClass::gotoxy(5, rowNumber);
  cout << "Código";
  helpersClass::gotoxy(15, rowNumber);
  cout << "Dueño";
  helpersClass::gotoxy(35, rowNumber);
  cout << "Rubro";
  helpersClass::gotoxy(60, rowNumber);
  cout << "# Empleados";
  helpersClass::gotoxy(80, rowNumber);
  cout << "# Clientes";
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
  helpersClass::gotoxy(65, rowNumber);
  cout << "Genero";
}

void menuClass::showEmployeesTableHeader(int rowNumber) {
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
  helpersClass::gotoxy(65, rowNumber);
  cout << "Salario (S/)";
}

void menuClass::registerNewStore() {
  storeClass* newStore;
  storesListClass* auxStoresList;
  string owner;
  string specialization;

  helpersClass::clearScreen();
  this->showAppTitle();

  cout << "Registrar nueva tienda en el mall:" << endl << endl;

  owner = helpersClass::requestText(
      "Ingrese los nombres del dueño de la nueva tienda", 2);
  specialization =
      helpersClass::requestText("Ingrese el rubro de la nueva tienda", 2);

  newStore = new storeClass(owner, specialization);

  auxStoresList = this->mall->getStores();
  auxStoresList->insert(newStore);
  this->mall->setStores(auxStoresList);

  cout << "Tienda registrada correctamente" << endl;
  cout << endl;
}

void menuClass::registerNewEmployee() {
  employeeClass* newEmployee;
  storeClass* auxStore;
  employeesListClass* auxEmployeesList;
  string firstName;
  string lastName;
  string dni;
  float salary;

  helpersClass::clearScreen();
  this->showAppTitle();

  cout << "Registrar nuevo empleado:" << endl << endl;

  auxStore = this->mall->getStores()->pickStore(
      "Seleccione la tienda a la que desea asignar el nuevo empleado");

  if (auxStore == NULL) {
    cout << "Eligió una tienda no valida o no hay tiendas registradas";
    cout << endl << endl;
    return;
  }

  firstName =
      helpersClass::requestText("Ingrese el nombre del nuevo empleado", 2);
  lastName =
      helpersClass::requestText("Ingrese el apellido del nuevo empleado", 2);
  dni = helpersClass::requestText("Ingrese el DNI del nuevo empleado", 8, 8);
  salary = helpersClass::requestFloatNumber(
      "Ingrese el salario del nuevo empleado",
      "Por favor ingrese un salario mayor o igual a 800.", 800);

  newEmployee = new employeeClass(firstName, lastName, dni, salary);

  auxEmployeesList = auxStore->getEmployees();
  auxEmployeesList->insert(newEmployee);
  auxStore->setEmployees(auxEmployeesList);

  cout << "Empleado registrado correctamente" << endl;
  cout << endl;
}

void menuClass::registerNewClient() {
  clientClass* newClient;
  storeClass* auxStore;
  clientsListClass* auxClientsList;
  string firstName;
  string lastName;
  string dni;
  bool genre;

  helpersClass::clearScreen();
  this->showAppTitle();

  cout << "Registrar nuevo cliente:" << endl << endl;

  auxStore = this->mall->getStores()->pickStore(
      "Seleccione la tienda a la que desea asignar el nuevo cliente");

  if (auxStore == NULL) {
    cout << "Eligió una tienda no valida o no hay tiendas registradas";
    cout << endl << endl;
    return;
  }

  firstName =
      helpersClass::requestText("Ingrese el nombre del nuevo cliente", 2);
  lastName =
      helpersClass::requestText("Ingrese el apellido del nuevo cliente", 2);
  dni = helpersClass::requestText("Ingrese el DNI del nuevo cliente", 8, 8);
  genre = helpersClass::requestGenre("Ingrese el genero del nuevo cliente");

  newClient = new clientClass(firstName, lastName, dni, genre);

  auxClientsList = auxStore->getClients();
  auxClientsList->insert(newClient);
  auxStore->setClients(auxClientsList);

  cout << "Cliente registrado correctamente" << endl;
  cout << endl;
}

void menuClass::showStores() {
  helpersClass::clearScreen();
  this->showAppTitle();

  helpersClass::gotoxy(20, row);
  cout << "Lista de todas las tiendas del mall:" << endl << endl;

  if (this->mall->getStores()->getLength() == 0) {
    cout << "No hay ninguna tienda registrada" << endl;
    cout << "Primero registre al menos una tienda" << endl;
    return;
  }

  this->showStoresTableHeader(row + 2);

  this->mall->getStores()->show(row + 3);

  cout << endl << endl;
}

void menuClass::showEmployees() {
  storeClass* auxStore;
  employeeNodeClass* auxEmployeeNode;

  helpersClass::clearScreen();
  this->showAppTitle();

  helpersClass::gotoxy(20, row);
  cout << "Lista de todos los empleados en las tiendas:" << endl << endl;

  if (this->mall->getStores()->getLength() == 0) {
    cout << "No hay ninguna tienda registrada" << endl;
    cout << "Primero registre al menos una tienda" << endl;
    return;
  }

  this->showEmployeesTableHeader(row + 2);

  int i = 1;
  for (int x = 0; x < this->mall->getStores()->getLength(); x++) {
    auxStore = this->mall->getStores()->getHead() + x;

    auxEmployeeNode = auxStore->getEmployees()->getHead();
    while (auxEmployeeNode != NULL) {
      auxEmployeeNode->getEmployee()->show(row + 3 + i, i);
      i++;
      auxEmployeeNode = auxEmployeeNode->getNext();
    }
  }

  cout << endl << endl;
}

void menuClass::showClients() {
  storeClass* auxStore;
  clientNodeClass* auxClientNode;

  helpersClass::clearScreen();
  this->showAppTitle();

  helpersClass::gotoxy(20, row);
  cout << "Lista de todos los clientes en las tiendas:" << endl << endl;

  if (this->mall->getStores()->getLength() == 0) {
    cout << "No hay ninguna tienda registrada" << endl;
    cout << "Primero registre al menos una tienda" << endl;
    return;
  }

  this->showClientsTableHeader(row + 2);

  int i = 1;
  for (int x = 0; x < this->mall->getStores()->getLength(); x++) {
    auxStore = this->mall->getStores()->getHead() + x;

    auxClientNode = auxStore->getClients()->getHead();
    while (auxClientNode != NULL) {
      auxClientNode->getClient()->show(row + 3 + i, i);
      i++;
      auxClientNode = auxClientNode->getNext();
    }
  }

  cout << endl << endl;
}

void menuClass::findStoreByCode() {
  storeClass* auxStore;
  string codeToFind;

  codeToFind =
      helpersClass::requestText("Ingrese el código de la tienda a buscar", 1);

  helpersClass::clearScreen();
  this->showAppTitle();

  auxStore = this->mall->getStores()->findStoreByCode(codeToFind);

  if (auxStore == NULL) {
    cout << "No se encontró una tienda con el código ingresado";
    cout << endl << endl;
    return;
  }

  helpersClass::gotoxy(20, row);
  cout << "Tienda con el código: " << codeToFind;

  this->showStoresTableHeader(row + 2);

  auxStore->show(row + 4, 1);

  cout << endl << endl;
}

void menuClass::findEmployeeByDni() {
  employeeClass* auxEmployee;
  string dniToFind;

  dniToFind =
      helpersClass::requestText("Ingrese el DNI del empleado a buscar", 8, 8);

  helpersClass::clearScreen();
  this->showAppTitle();

  auxEmployee = this->mall->getStores()->findEmployeeByDni(dniToFind);

  if (auxEmployee == NULL) {
    cout << "No se encontró un empleado con el DNI ingresado";
    cout << endl << endl;
    return;
  }

  helpersClass::gotoxy(20, row);
  cout << "Empleado con DNI: " << dniToFind;

  this->showEmployeesTableHeader(row + 2);

  auxEmployee->show(row + 4, 1);

  cout << endl << endl;
}

void menuClass::findClientByDni() {
  clientClass* auxClient;
  string dniToFind;

  dniToFind =
      helpersClass::requestText("Ingrese el DNI del cliente a buscar", 8, 8);

  helpersClass::clearScreen();
  this->showAppTitle();

  auxClient = this->mall->getStores()->findClientByDni(dniToFind);

  if (auxClient == NULL) {
    cout << "No se encontró un cliente con el DNI ingresado";
    cout << endl << endl;
    return;
  }

  helpersClass::gotoxy(20, row);
  cout << "Cliente con DNI: " << dniToFind;

  this->showClientsTableHeader(row + 2);

  auxClient->show(row + 4, 1);

  cout << endl << endl;
}

menuClass::~menuClass() {}
menuClass::menuClass(mallClass*& mall) { this->mall = mall; }

void menuClass::showMenu() {
  int selectedOption;

  do {
    selectedOption = this->requestMenuOption();

    if (selectedOption != 0) {
      switch (selectedOption) {
        case 1:
          this->registerNewStore();
          helpersClass::addDelay(1.5);
          break;
        case 2:
          this->registerNewEmployee();
          helpersClass::addDelay(1.5);
          break;
        case 3:
          this->registerNewClient();
          helpersClass::addDelay(1.5);
          break;
        case 4:
          this->showStores();
          helpersClass::pauseProcess();
          break;
        case 5:
          this->showEmployees();
          helpersClass::pauseProcess();
          break;
        case 6:
          this->showClients();
          helpersClass::pauseProcess();
          break;
        case 7:
          this->findStoreByCode();
          helpersClass::pauseProcess();
          break;
        case 8:
          this->findEmployeeByDni();
          helpersClass::pauseProcess();
          break;
        case 9:
          this->findClientByDni();
          helpersClass::pauseProcess();
          break;
      }
    }
  } while (!(selectedOption == 0));

  cout << "Gracias por usar la app, tenga un buen día!" << endl;
}
