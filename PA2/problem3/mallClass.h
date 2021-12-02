#include <string>

#include "storesListClass.h"

using namespace std;

class mallClass {
 private:
  string name;
  storesListClass *stores;

 public:
  ~mallClass();
  mallClass();

  string getName();
  void setName(string value);

  storesListClass *getStores();
  void setStores(storesListClass *value);
};
