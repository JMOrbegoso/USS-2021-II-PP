#include "dataSeedClass.h"

using namespace std;

class menuClass {
 private:
  hotelClass* hotel;

  void showAppTitle();

  int requestMenuOption();

  void showRoomsTableHeader(int rowNumber);
  void showClientsTableHeader(int rowNumber);

  void registerNewRoom();
  void registerNewClient();
  void showClients();
  void showRooms();
  void findClientByArrivalDate();
  void findClientByDni();
  void calculateProfits();

 public:
  ~menuClass();
  menuClass(hotelClass*& hotel);

  void showMenu();
};
