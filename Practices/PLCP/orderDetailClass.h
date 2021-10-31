#include <string>

using namespace std;

class orderDetailClass {
 private:
  string code;
  string name;
  float price;

 public:
  ~orderDetailClass();
  orderDetailClass();
  orderDetailClass(string code, string name, float price);

  string getCode();
  void setCode(string value);

  string getName();
  void setName(string value);

  float getPrice();
  void setPrice(float value);

  void show(int rowNumber, int itemNumber);
};
