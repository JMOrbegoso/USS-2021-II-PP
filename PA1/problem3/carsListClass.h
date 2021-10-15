#include "carNodeClass.h"

using namespace std;

class carsListClass {
 private:
  carNodeClass* head;
  int length;

 public:
  ~carsListClass();
  carsListClass();

  int getLength();
  void setLength(int value);

  carNodeClass* getHead();
  void setHead(carNodeClass* value);

  void show(int rowNumber);

  void insert(carClass* newStudent);

  carClass* getElementByIndex(int index);
  carClass* pickStudent(string message);
};
