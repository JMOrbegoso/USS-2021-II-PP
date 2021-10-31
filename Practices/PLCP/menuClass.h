#include "dataSeedClass.h"

using namespace std;

class menuClass {
 private:
  storeClass* store;

  void showAppTitle();

  int requestMenuOption();

  void showRoomsTableHeader(int rowNumber);
  void showClientsTableHeader(int rowNumber);

  void registerNewRoom();
  void registerNewClient();
  void showClients();
  void showRooms();
  void calculateProfits();

 public:
  ~menuClass();
  menuClass(storeClass*& hotel);

  void showMenu();
};
