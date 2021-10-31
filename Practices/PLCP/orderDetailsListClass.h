#include "orderDetailNodeClass.h"

using namespace std;

class orderDetailsListClass {
 private:
  orderDetailNodeClass* head;
  int length;

 public:
  ~orderDetailsListClass();
  orderDetailsListClass();

  int getLength();
  void setLength(int value);

  orderDetailNodeClass* getHead();
  void setHead(orderDetailNodeClass* value);

  void show(int rowNumber);

  void insert(orderDetailClass* newOrderDetail);
};
