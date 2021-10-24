#include "carClass.h"

class clientNodeClass {
 private:
  clientClass* car;
  clientNodeClass* next;
  clientNodeClass* previous;

 public:
  ~clientNodeClass();
  clientNodeClass();

  clientClass* getCar();
  void setCar(clientClass* value);

  clientNodeClass* getNext();
  void setNext(clientNodeClass* value);

  clientNodeClass* getPrevious();
  void setPrevious(clientNodeClass* value);
};
