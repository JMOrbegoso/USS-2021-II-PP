#include "orderDetailClass.h"

class orderDetailNodeClass {
 private:
  orderDetailClass* orderDetail;
  orderDetailNodeClass* next;
  orderDetailNodeClass* previous;

 public:
  ~orderDetailNodeClass();
  orderDetailNodeClass();

  orderDetailClass* getClient();
  void setClient(orderDetailClass* value);

  orderDetailNodeClass* getNext();
  void setNext(orderDetailNodeClass* value);

  orderDetailNodeClass* getPrevious();
  void setPrevious(orderDetailNodeClass* value);
};
