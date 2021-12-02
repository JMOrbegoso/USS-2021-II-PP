#include <string>

#include "storesListClass.h"

using namespace std;

class mallClass {
 private:
  string name;
  string address;
  string ruc;
  unsigned int capacity;
  storesListClass *stores;

 public:
  ~mallClass();
  mallClass();

  string getName();
  void setName(string value);

  string getAddress();
  void setAddress(string value);

  string getRuc();
  void setRuc(string value);

  unsigned int getCapacity();
  void setCapacity(unsigned int value);

  storesListClass *getStores();
  void setStores(storesListClass *value);
};
