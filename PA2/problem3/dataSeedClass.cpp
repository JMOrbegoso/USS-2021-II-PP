#include "dataSeedClass.h"

using namespace std;

void dataSeedClass::seed(mallClass *&automotive) {
  storeClass *client_1, *client_2;
  employeeClass *car_1, *car_2, *car_3, *car_4, *car_5, *car_6;

  automotive->setName("Don Lopez");

  client_1 = new storeClass("Ricardo", "Flores", "10117618", 19, true);
  client_2 = new storeClass("Susana", "Rojas", "80121607", 20, false);

  car_1 =
      new employeeClass("Toyota", "Yaris", 40000, "ab-128", "blanco", "nuevo");
  car_2 =
      new employeeClass("Toyota", "Hilux", 40000, "ad-256", "rojo", "nuevo");
  car_3 = new employeeClass("Kia", "Rio", 40000, "cd-512", "negro", "nuevo");
  car_4 =
      new employeeClass("Nissan", "Versa", 40000, "dd-128", "azul", "nuevo");
  car_5 = new employeeClass("Chevrolet", "N300", 40000, "dc-256", "blanco",
                            "nuevo");
  car_6 = new employeeClass("Kia", "Picanto", 40000, "ba-512", "rojo", "nuevo");

  client_1->getEmployees()->insert(car_1);
  client_1->getEmployees()->insert(car_2);
  client_1->getEmployees()->insert(car_3);
  client_1->getEmployees()->insert(car_4);
  client_2->getEmployees()->insert(car_5);
  client_2->getEmployees()->insert(car_6);

  automotive->getStores()->insert(client_1);
  automotive->getStores()->insert(client_2);
}
