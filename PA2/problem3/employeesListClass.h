#include "employeeNodeClass.h"

using namespace std;

class carsListClass {
 private:
  carNodeClass* head;
  int length;
  carClass* getElementByIndex(int index);

 public:
  ~carsListClass();
  carsListClass();

  int getLength();
  void setLength(int value);

  carNodeClass* getHead();
  void setHead(carNodeClass* value);

  void show(int rowNumber);

  void insert(carClass* newCar);

  carClass* pickCar(string message);
};
