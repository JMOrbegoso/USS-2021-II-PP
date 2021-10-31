#include <string>

#include "productsListClass.h"

using namespace std;

class storeClass {
 private:
  string name;
  string address;
  string ruc;
  productsListClass *rooms;

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
};
