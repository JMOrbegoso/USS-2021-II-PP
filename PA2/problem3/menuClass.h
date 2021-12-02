#include "dataSeedClass.h"

using namespace std;

class menuClass {
 private:
  mallClass* mall;

  void showAppTitle();

  int requestMenuOption();

  void showStoresTableHeader(int rowNumber);
  void showClientsTableHeader(int rowNumber);
  void showEmployeesTableHeader(int rowNumber);

  void registerNewStore();
  void registerNewEmployee();
  void registerNewClient();
  void showStores();
  void showEmployees();
  void showClients();
  void findStoreByCode();
  void findEmployeeByDni();
  void findClientByDni();

 public:
  ~menuClass();
  menuClass(mallClass*& mall);

  void showMenu();
};
