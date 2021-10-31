#include <string>

#include "clientsListClass.h"
#include "ordersListClass.h"
#include "productsListClass.h"

using namespace std;

class storeClass {
 private:
  string name;
  string address;
  string ruc;
  productsListClass *products;
  clientsListClass *clients;
  ordersListClass *orders;

 public:
  ~storeClass();
  storeClass();

  string getName();
  void setName(string value);

  string getAddress();
  void setAddress(string value);

  string getRuc();
  void setRuc(string value);

  productsListClass *getProducts();
  void setProducts(productsListClass *value);

  clientsListClass *getClients();
  void setClients(clientsListClass *value);

  ordersListClass *getOrders();
  void setOrders(ordersListClass *value);
};
