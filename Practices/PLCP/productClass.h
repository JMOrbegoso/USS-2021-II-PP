#include <string>

using namespace std;

class productClass {
 private:
  string code;
  string name;
  string supplier;
  unsigned short stock;
  float price;
  string category;

 public:
  ~productClass();
  productClass();
  productClass(string code, string name, string supplier, unsigned short stock,
               float price, string category);

  string getCode();
  void setCode(string value);

  string getName();
  void setName(string value);

  string getSupplier();
  void setSupplier(string value);

  unsigned short getStock();
  void setStock(unsigned short value);

  float getPrice();
  void setPrice(float value);

  string getCategory();
  void setCategory(string value);

  void show(int rowNumber, int itemNumber);
};
