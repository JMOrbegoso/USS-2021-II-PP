#include "orderDetailClass.h"

class orderDetailNodeClass {
 private:
  orderDetailClass* orderDetail;
  orderDetailNodeClass* next;
  orderDetailNodeClass* previous;

 public:
  ~orderDetailNodeClass();
  orderDetailNodeClass();

  orderDetailClass* getOrderDetail();
  void setOrderDetail(orderDetailClass* value);

  orderDetailNodeClass* getNext();
  void setNext(orderDetailNodeClass* value);

  orderDetailNodeClass* getPrevious();
  void setPrevious(orderDetailNodeClass* value);
};
