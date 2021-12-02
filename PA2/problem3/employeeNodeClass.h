#include "employeeClass.h"

class carNodeClass {
 private:
  carClass* car;
  carNodeClass* next;
  carNodeClass* previous;

 public:
  ~carNodeClass();
  carNodeClass();

  carClass* getCar();
  void setCar(carClass* value);

  carNodeClass* getNext();
  void setNext(carNodeClass* value);

  carNodeClass* getPrevious();
  void setPrevious(carNodeClass* value);
};
