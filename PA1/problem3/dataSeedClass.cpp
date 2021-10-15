#include "dataSeedClass.h"

using namespace std;

void dataSeedClass::seed(automotiveClass *&automotive) {
  clientClass *client_1, *client_2;
  carClass *car_1, *car_2, *car_3, *car_4, *car_5, *car_6;

  automotive->setName("USS");

  client_1 = new clientClass("Ricardo", "Flores", "10117618", 19, true);
  client_2 = new clientClass("Susana", "Diaz", "80121607", 20, false);

  car_1 =
      new carClass("toyota", "strinter", 40000, "ab-128", "blanco", "nuevo");
  car_2 =
      new carClass("toyota", "strinter", 40000, "ab-128", "blanco", "nuevo");
  car_3 =
      new carClass("toyota", "strinter", 40000, "ab-128", "blanco", "nuevo");
  car_4 =
      new carClass("toyota", "strinter", 40000, "ab-128", "blanco", "nuevo");
  car_5 =
      new carClass("toyota", "strinter", 40000, "ab-128", "blanco", "nuevo");
  car_6 =
      new carClass("toyota", "strinter", 40000, "ab-128", "blanco", "nuevo");

  client_1->getCars()->insert(car_1);
  client_1->getCars()->insert(car_2);
  client_1->getCars()->insert(car_3);
  client_1->getCars()->insert(car_4);
  client_2->getCars()->insert(car_5);
  client_2->getCars()->insert(car_6);

  automotive->getClassRooms()->insert(client_1);
  automotive->getClassRooms()->insert(client_2);
}
