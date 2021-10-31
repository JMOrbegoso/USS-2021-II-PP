#include "orderClass.h"

using namespace std;

class ordersListClass {
 private:
  int capacity;
  int length;
  orderClass* head;

  void grow(int growIn);

 public:
  ~ordersListClass();
  ordersListClass();

  int getCapacity();
  void setCapacity(int value);

  int getLength();
  void setLength(int value);

  orderClass* getHead();
  void setHead(orderClass* value);

  void show(int rowNumber);

  void insert(orderClass* newClient);
};
