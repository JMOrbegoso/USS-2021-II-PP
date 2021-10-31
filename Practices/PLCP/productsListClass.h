#include "productClass.h"

using namespace std;

class productsListClass {
 private:
  int capacity;
  int length;
  productClass* head;

  void grow(int growIn);

 public:
  ~productsListClass();
  productsListClass();

  int getCapacity();
  void setCapacity(int value);

  int getLength();
  void setLength(int value);

  productClass* getHead();
  void setHead(productClass* value);

  void show(int rowNumber);

  void insert(productClass* newProduct);

  productClass* pickProduct(string message);
};
