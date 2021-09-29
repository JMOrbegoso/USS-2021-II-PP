#include "dataSeedClass.h"

using namespace std;

void dataSeedClass::seed(amusementParkClass *&amusementPark) {
  gameClass *game_1, *game_2;
  clientClass *client_1, *client_2, *client_3, *client_4, *client_5, *client_6;

  amusementPark->setName("USS");

  game_1 = new gameClass("c01", "Juan Perez");
  game_2 = new gameClass("c02", "Juana Perez");

  client_1 = new clientClass("s01", "Ricardo", "Flores", "10117618", 19, true);
  client_2 = new clientClass("s02", "Susana", "Diaz", "80121607", 20, false);
  client_3 = new clientClass("s03", "Roberto", "Rioja", "71188517", 19, true);
  client_4 = new clientClass("s04", "Marcos", "Garcia", "52421620", 20, true);
  client_5 = new clientClass("s05", "Maria", "Gonzales", "95101014", 21, false);
  client_6 = new clientClass("s06", "Guillermo", "Lopez", "13729607", 22, true);

  game_1->getClients()->insert(client_1);
  game_1->getClients()->insert(client_2);
  game_1->getClients()->insert(client_3);
  game_1->getClients()->insert(client_4);
  game_2->getClients()->insert(client_5);
  game_2->getClients()->insert(client_6);

  amusementPark->getClassRooms()->insert(game_1);
  amusementPark->getClassRooms()->insert(game_2);
}
