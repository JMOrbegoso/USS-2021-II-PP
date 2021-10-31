#include "dataSeedClass.h"

using namespace std;

void dataSeedClass::seed(storeClass *&store) {
  productClass *room_1, *room_2, *room_3;
  clientClass *client_1, *client_2, *client_3;

  store->setName("SIN COMENTARIOS");
  store->setAddress("Calle Lora y Cordero 867, Chiclayo");
  store->setRuc("20167834567");

  room_1 = new productClass(101, 35, 1, "clasica", "ocupada");
  room_2 = new productClass(102, 60, 1, "matrimonial", "ocupada");
  room_3 = new productClass(201, 90, 2, "vip", "en mantenimiento");

  client_1 =
      new clientClass("Ricardo", "Flores", "10117618", "av. Bolognesi 711",
                      "901088920", 21, true, "20 de Octubre del 2021");
  client_2 = new clientClass("Susana", "Rioja", "80121607", "av. Heroes 111",
                             "911028920", 20, false, "24 de Octubre del 2021");
  client_3 = new clientClass("Roberto", "Diaz", "52421620", "av. Heroes 111",
                             "951028920", 35, true, "24 de Octubre del 2021");

  store->getClients()->insert(client_1);
  store->getClients()->insert(client_2);
  store->getClients()->insert(client_3);

  store->getProducts()->insert(room_1);
  store->getProducts()->insert(room_2);
  store->getProducts()->insert(room_3);
}
