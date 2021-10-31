#include <string>

using namespace std;

class orderDetailClass {
 private:
  string code;
  string name;
  float price;
  unsigned short quantity;

 public:
  ~orderDetailClass();
  orderDetailClass();
  orderDetailClass(string code, string name, float price,
                   unsigned short quantity);

  string getCode();
  void setCode(string value);

  string getName();
  void setName(string value);

  float getPrice();
  void setPrice(float value);

  unsigned short getQuantity();
  void setQuantity(unsigned short value);
};
