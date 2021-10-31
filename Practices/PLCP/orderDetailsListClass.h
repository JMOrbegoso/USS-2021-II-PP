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

  void insert(orderDetailClass* newOrderDetail);
};
