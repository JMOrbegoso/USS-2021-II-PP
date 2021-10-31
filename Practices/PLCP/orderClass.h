#include <string>

#include "orderDetailsListClass.h"

using namespace std;

class orderClass {
 private:
  static int counter;
  string code;
  unsigned short orderNumber;
  float price;
  unsigned short floor;
  string orderType;
  string status;

  orderDetailsListClass *orderDetails;

 public:
  ~orderClass();
  orderClass();
  orderClass(unsigned short orderNumber, float price, unsigned short floor,
             string orderType, string status);

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

  orderDetailsListClass *getOrderDetails();
  void setOrderDetails(orderDetailsListClass *value);

  void show(int rowNumber, int itemNumber);
};
