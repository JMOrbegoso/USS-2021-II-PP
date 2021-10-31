#include "clientNodeClass.h"

using namespace std;

class clientsListClass {
 private:
  clientNodeClass* head;
  int length;
  clientClass* getElementByIndex(int index);

 public:
  ~clientsListClass();
  clientsListClass();

  int getLength();
  void setLength(int value);

  clientNodeClass* getHead();
  void setHead(clientNodeClass* value);

  void show(int rowNumber);

  void insert(clientClass* newClient);

  clientClass* pickClient(string message);
};
