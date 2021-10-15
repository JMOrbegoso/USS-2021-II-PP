#include "clientClass.h";

using namespace std;

class clientsListClass {
 private:
  int capacity;
  int length;
  clientClass* head;

  void grow(int growIn);

 public:
  ~clientsListClass();
  clientsListClass();

  int getCapacity();
  void setCapacity(int value);

  int getLength();
  void setLength(int value);

  clientClass* getHead();
  void setHead(clientClass* value);

  void show(int rowNumber);

  carClass* findStudentByDni(string dni);

  void insert(clientClass* newClassRoom);

  clientClass* pickClassRoom(string message);
};
