#include "storeClass.h"

using namespace std;

class storesListClass {
 private:
  int capacity;
  int length;
  storeClass* head;

  void grow(int growIn);

 public:
  ~storesListClass();
  storesListClass();

  int getCapacity();
  void setCapacity(int value);

  int getLength();
  void setLength(int value);

  storeClass* getHead();
  void setHead(storeClass* value);

  void show(int rowNumber);

  storeClass* findStoreByCode(string code);
  employeeClass* findEmployeeByDni(string dni);
  clientClass* findClientByDni(string dni);

  void insert(storeClass* newClient);

  storeClass* pickStore(string message);
};
