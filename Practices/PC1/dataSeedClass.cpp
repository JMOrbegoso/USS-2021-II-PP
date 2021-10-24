#include "dataSeedClass.h"

using namespace std;

void dataSeedClass::seed(hotelClass *&hotel) {
  roomClass *room_1, *room_2, *room_3;
  clientClass *client_1, *client_2, *client_3;

  hotel->setName("“SIN COMENTARIOS”");

  room_1 = new roomClass(101, 35, 1, "clasica", "ocupada");
  room_2 = new roomClass(102, 60, 1, "matrimonial", "ocupada");
  room_3 = new roomClass(201, 90, 2, "vip", "libre");

  client_1 =
      new clientClass("Ricardo", "Flores", "10117618", "av. Bolognesi 711",
                      "901088920", 21, true, "24 de Octubre del 2021");
  client_2 = new clientClass("Susana", "Rioja", "80121607", "av. Heroes 111",
                             "911028920", 20, false, "25 de Octubre del 2021");
  client_3 = new clientClass("Roberto", "Diaz", "52421620", "av. Heroes 111",
                             "951028920", 35, true, "25 de Octubre del 2021");

  room_1->getClients()->insert(client_1);
  room_2->getClients()->insert(client_2);
  room_2->getClients()->insert(client_3);

  hotel->getRooms()->insert(room_1);
  hotel->getRooms()->insert(room_2);
  hotel->getRooms()->insert(room_3);
}
