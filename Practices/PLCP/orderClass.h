#include <string>

#include "orderDetailsListClass.h"

using namespace std;

class orderClass {
 private:
  static int counter;
  string code;
  string date;
  string clientFullName;

  orderDetailsListClass *orderDetails;

 public:
  ~orderClass();
  orderClass();
  orderClass(string date, string clientFullName);

  string getCode();

  string getDate();
  void setDate(string value);

  string getClientFullName();
  void setClientFullName(string value);

  orderDetailsListClass *getOrderDetails();
  void setOrderDetails(orderDetailsListClass *value);

  void show(int rowNumber, int itemNumber);
};
