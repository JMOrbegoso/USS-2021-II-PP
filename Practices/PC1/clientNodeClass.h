#include "clientClass.h"

class clientNodeClass {
 private:
  clientClass* client;
  clientNodeClass* next;
  clientNodeClass* previous;

 public:
  ~clientNodeClass();
  clientNodeClass();

  clientClass* getClient();
  void setClient(clientClass* value);

  clientNodeClass* getNext();
  void setNext(clientNodeClass* value);

  clientNodeClass* getPrevious();
  void setPrevious(clientNodeClass* value);
};
