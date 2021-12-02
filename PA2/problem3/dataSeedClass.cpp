#include "dataSeedClass.h"

using namespace std;

void dataSeedClass::seed(mallClass *&mall) {
  storeClass *store_1, *store_2;
  employeeClass *employee_1, *employee_2, *employee_3;
  clientClass *client_1, *client_2, *client_3;

  mall->setName("Don Lopez");
  mall->setAddress("Av. Bolognesi 444");
  mall->setRuc("12345678910");
  mall->setCapacity(500);

  employee_1 = new employeeClass("Maria", "Gomez", "90243628", 1200);
  employee_2 = new employeeClass("Roberto", "Díaz", "19211718", 1300);
  employee_3 = new employeeClass("Eva", "Rioja", "82601469", 1100);

  client_1 = new clientClass("Ricardo", "Flores", "10117618", true);
  client_2 = new clientClass("Susana", "Rojas", "90331677", false);
  client_3 = new clientClass("Jose", "Lopez", "89213518", false);

  store_1 = new storeClass("Mario Ramos", "Zapatería");
  store_2 = new storeClass("Luigi Ramirez", "Venta de Celulares");

  store_1->getEmployees()->insert(employee_1);
  store_2->getEmployees()->insert(employee_2);
  store_2->getEmployees()->insert(employee_3);

  store_1->getClients()->insert(client_1);
  store_2->getClients()->insert(client_2);
  store_2->getClients()->insert(client_3);

  mall->getStores()->insert(store_1);
  mall->getStores()->insert(store_2);
}
