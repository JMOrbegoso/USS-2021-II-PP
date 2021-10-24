#include "dataSeedClass.h"

using namespace std;

class menuClass {
 private:
  hotelClass* automotive;

  void showAppTitle();

  int requestMenuOption();

  void showClientsTableHeader(int rowNumber);
  void showCarsTableHeader(int rowNumber);

  void registerNewRoom();
  void registerNewClient();
  void showClients();
  void showRooms();
  void findRoomByNumber();
  void findCarByPlate();

 public:
  ~menuClass();
  menuClass(hotelClass*& automotive);

  void showMenu();
};
