#include <string>

#include "clientsListClass.h"

using namespace std;

class productClass {
 private:
  static int counter;
  string code;
  unsigned short roomNumber;
  float price;
  unsigned short floor;
  string roomType;
  string status;

  clientsListClass *clients;

 public:
  ~productClass();
  productClass();
  productClass(unsigned short roomNumber, float price, unsigned short floor,
               string roomType, string status);

  string getCode();

  unsigned short getRoomNumber();
  void setRoomNumber(unsigned short value);

  float getPrice();
  void setPrice(float value);

  unsigned short getFloor();
  void setFloor(unsigned short value);

  string getRoomType();
  void setRoomType(string value);

  string getStatus();
  void setStatus(string value);

  clientsListClass *getClients();
  void setClients(clientsListClass *value);

  void show(int rowNumber, int itemNumber);
};