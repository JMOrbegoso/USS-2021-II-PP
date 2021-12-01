#include "dataSeedClass.h"

using namespace std;

class menuClass {
 private:
  automotiveClass* automotive;

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
  menuClass(automotiveClass*& automotive);

  void showMenu();
};
