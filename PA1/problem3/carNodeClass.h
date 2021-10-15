#include "carClass.h"

class carNodeClass {
 private:
  carClass* student;
  carNodeClass* next;
  carNodeClass* previous;

 public:
  ~carNodeClass();
  carNodeClass();

  carClass* getStudent();
  void setStudent(carClass* value);

  carNodeClass* getNext();
  void setNext(carNodeClass* value);

  carNodeClass* getPrevious();
  void setPrevious(carNodeClass* value);
};
