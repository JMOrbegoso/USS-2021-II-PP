#include "orderDetailNodeClass.h"

using namespace std;

orderDetailNodeClass::~orderDetailNodeClass() {}
orderDetailNodeClass::orderDetailNodeClass() {
  this->orderDetail = NULL;
  this->next = NULL;
  this->previous = NULL;
}

orderDetailClass* orderDetailNodeClass::getOrderDetail() {
  return this->orderDetail;
}
void orderDetailNodeClass::setOrderDetail(orderDetailClass* value) {
  this->orderDetail = value;
}

orderDetailNodeClass* orderDetailNodeClass::getNext() { return this->next; }
void orderDetailNodeClass::setNext(orderDetailNodeClass* value) {
  this->next = value;
}

orderDetailNodeClass* orderDetailNodeClass::getPrevious() {
  return this->previous;
}
void orderDetailNodeClass::setPrevious(orderDetailNodeClass* value) {
  this->previous = value;
};
