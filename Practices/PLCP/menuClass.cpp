#include "menuClass.h"

#include <iostream>

#include "helpersClass.h"

using namespace std;

void menuClass::showAppTitle() {
  cout << "-------------------------------------------------------------------";
  cout << endl;
  cout << "\t\t Sistema virtual del la tienda ";
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

  cout << "[1] Registrar nuevo cliente" << endl;
  cout << "[2] Registrar nuevo producto" << endl;
  cout << "[3] Realizar venta" << endl;
  cout << "[4] Mostrar lista de ventas realizadas" << endl;
  cout << "[5] Mostrar lista de clientes" << endl;
  cout << "[6] Mostrar lista de productos" << endl;

  cout << endl;
  cout << "[0] Cerrar" << endl;

  cout << endl << "Por favor ingrese una de las opciones:" << endl;
  cin >> selectedOption;
  while (!(0 <= selectedOption && selectedOption <= 6)) {
    cout << "La opcion seleccionada fue inválida, por favor seleccione una "
            "opcion válida:"
         << endl;
    cin >> selectedOption;
  }
  return selectedOption;
}

void menuClass::showProductsTableHeader(int rowNumber) {
  helpersClass::gotoxy(0, rowNumber);
  cout << "#";
  helpersClass::gotoxy(5, rowNumber);
  cout << "Codigo";
  helpersClass::gotoxy(15, rowNumber);
  cout << "Nombre";
  helpersClass::gotoxy(30, rowNumber);
  cout << "Stock";
  helpersClass::gotoxy(45, rowNumber);
  cout << "Precio";
  helpersClass::gotoxy(55, rowNumber);
  cout << "Proveedor";
  helpersClass::gotoxy(75, rowNumber);
  cout << "Category";
}

void menuClass::showClientsTableHeader(int rowNumber) {
  helpersClass::gotoxy(0, rowNumber);
  cout << "#";
  helpersClass::gotoxy(5, rowNumber);
  cout << "DNI";
  helpersClass::gotoxy(15, rowNumber);
  cout << "Cliente";
  helpersClass::gotoxy(50, rowNumber);
  cout << "Direccion";
  helpersClass::gotoxy(75, rowNumber);
  cout << "Telefono";
  helpersClass::gotoxy(85, rowNumber);
  cout << "Email";
}

void menuClass::showOrdersTableHeader(int rowNumber) {
  helpersClass::gotoxy(0, rowNumber);
  cout << "#";
  helpersClass::gotoxy(5, rowNumber);
  cout << "Codigo";
  helpersClass::gotoxy(13, rowNumber);
  cout << "Cliente";
  helpersClass::gotoxy(30, rowNumber);
  cout << "Fecha";
  helpersClass::gotoxy(45, rowNumber);
  cout << "Productos";
  helpersClass::gotoxy(100, rowNumber);
  cout << "Total";
}

void menuClass::registerNewProduct() {
  productClass* newProduct;
  productsListClass* auxProductsList;
  string code, name, supplier, category;
  unsigned short stock;
  float price;

  helpersClass::clearScreen();
  this->showAppTitle();

  cout << "Registrar nuevo producto:" << endl << endl;

  code = helpersClass::requestText("Ingrese el codigo del nuevo producto", 2);
  name = helpersClass::requestText("Ingrese el nombre del nuevo producto", 2);
  supplier =
      helpersClass::requestText("Ingrese el proveedor del nuevo producto", 2);
  category =
      helpersClass::requestText("Ingrese la categoria del nuevo producto", 2);
  stock = helpersClass::requestIntegerNumber(
      "Ingrese el stock del nuevo producto",
      "Por favor ingrese un numero valido.", 0);
  price =
      helpersClass::requestFloatNumber("Ingrese el precio del nuevo producto",
                                       "Por favor ingrese un numero valido", 1);

  newProduct = new productClass(code, name, supplier, stock, price, category);

  auxProductsList = this->store->getProducts();
  auxProductsList->insert(newProduct);
  this->store->setProducts(auxProductsList);

  cout << "Producto registrado correctamente" << endl;
  cout << endl;
}

void menuClass::showProducts() {
  helpersClass::clearScreen();
  this->showAppTitle();

  helpersClass::gotoxy(20, 5);
  cout << "Lista de todos los productos de la empresa:" << endl << endl;

  if (this->store->getProducts()->getLength() == 0) {
    cout << "No hay ningún producto registrado" << endl;
    cout << "Primero registre al menos un producto" << endl;
    return;
  }

  this->showProductsTableHeader(7);

  this->store->getProducts()->show(8);

  cout << endl << endl;
}

void menuClass::registerNewClient() {
  clientClass* newClient;
  clientsListClass* auxClientsList;
  string firstName, lastName, motherLastName, dni, address, phone, email;

  helpersClass::clearScreen();
  this->showAppTitle();

  cout << "Registrar nuevo cliente:" << endl << endl;

  firstName =
      helpersClass::requestText("Ingrese los nombres del nuevo cliente", 2);
  lastName = helpersClass::requestText(
      "Ingrese los apellidos paternos del nuevo cliente", 2);
  motherLastName = helpersClass::requestText(
      "Ingrese los apellidos maternos del nuevo cliente", 2);
  dni = helpersClass::requestText("Ingrese el DNI del nuevo cliente", 8, 8);
  address =
      helpersClass::requestText("Ingrese la direccion del nuevo cliente", 1);
  phone =
      helpersClass::requestText("Ingrese el telefono del nuevo cliente", 9, 9);
  email = helpersClass::requestText("Ingrese el email del cliente", 2);

  newClient = new clientClass(firstName, lastName, motherLastName, dni, address,
                              phone, email);

  auxClientsList = this->store->getClients();
  auxClientsList->insert(newClient);
  this->store->setClients(auxClientsList);

  cout << "Cliente registrado correctamente" << endl;
  cout << endl;
}

void menuClass::showClients() {
  helpersClass::clearScreen();
  this->showAppTitle();

  helpersClass::gotoxy(20, 5);
  cout << "Lista de todos los clientes de la empresa:" << endl << endl;

  if (this->store->getClients()->getLength() == 0) {
    cout << "No hay ningún cliente registrado" << endl;
    cout << "Primero registre al menos un cliente" << endl;
    return;
  }

  this->showClientsTableHeader(7);

  this->store->getClients()->show(8);

  cout << endl << endl;
}

void menuClass::registerNewOrder() {
  orderClass* newOrder;
  ordersListClass* auxOrdersList;
  orderDetailClass* newOrderDetail;
  orderDetailsListClass* auxOrderDetailsList;
  clientClass* auxClient;
  productClass* auxProduct;
  string date, clientFullName;

  helpersClass::clearScreen();
  this->showAppTitle();

  cout << "Registrar nueva orden de compra:" << endl << endl;

  date = helpersClass::requestText("Ingrese la fecha de la orden de compra", 2);

  auxClient = this->store->getClients()->pickClient(
      "Seleccione el cliente de esta orden de compra");

  if (auxClient == NULL) {
    cout << "Eligió un cliente no valido o no hay clientes registrados";
    cout << endl << endl;
    return;
  }

  clientFullName = auxClient->getFirstName() + " " + auxClient->getLastName() +
                   " " + auxClient->getMotherLastName();
  newOrder = new orderClass(date, clientFullName);

  // TODO: Add products as order details to the order

  auxOrdersList = this->store->getOrders();
  auxOrdersList->insert(newOrder);
  this->store->setOrders(auxOrdersList);

  cout << "Orden de compra registrada correctamente" << endl;
  cout << endl;
}

void menuClass::showOrders() {
  helpersClass::clearScreen();
  this->showAppTitle();

  helpersClass::gotoxy(20, 5);
  cout << "Lista de todas las ordenes de la empresa:" << endl << endl;

  if (this->store->getOrders()->getLength() == 0) {
    cout << "No hay ninguna orden registrada" << endl;
    cout << "Primero registre al menos una orden" << endl;
    return;
  }

  this->showOrdersTableHeader(7);

  this->store->getOrders()->show(8);

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
          this->registerNewClient();
          helpersClass::addDelay(1.5);
          break;
        case 2:
          this->registerNewProduct();
          helpersClass::addDelay(1.5);
          break;
        case 3:
          this->registerNewOrder();
          helpersClass::addDelay(1.5);
          break;
        case 4:
          this->showOrders();
          helpersClass::pauseProcess();
          break;
        case 5:
          this->showClients();
          helpersClass::pauseProcess();
          break;
        case 6:
          this->showProducts();
          helpersClass::pauseProcess();
          break;
      }
    }
  } while (!(selectedOption == 0));

  cout << "Gracias por usar la app, tenga un buen día!" << endl;
}
