#include "dataSeedClass.h"

using namespace std;

class menuClass {
 private:
  hotelClass* automotive;

  void showAppTitle();

  int requestMenuOption();

  void showClientsTableHeader(int rowNumber);
  void showCarsTableHeader(int rowNumber);

  void registerNewClient();
  void registerNewCar();
  void showCars();
  void showClients();
  void findClientByDni();
  void findCarByPlate();

 public:
  ~menuClass();
  menuClass(hotelClass*& automotive);

  void showMenu();
};
