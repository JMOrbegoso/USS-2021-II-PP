#include "dataSeedClass.h"

using namespace std;

class menuClass {
 private:
  storeClass* store;

  void showAppTitle();

  int requestMenuOption();

  void showProductsTableHeader(int rowNumber);
  void showClientsTableHeader(int rowNumber);
  void showOrdersTableHeader(int rowNumber);

  void registerNewProduct();
  void showProducts();

  void registerNewClient();
  void showClients();

  void registerNewOrder();
  void showOrders();

 public:
  ~menuClass();
  menuClass(storeClass*& store);

  void showMenu();
};
