#include <string>

using namespace std;

class carClass {
 private:
  static int counter;
  string code;
  string brand;
  string model;
  float price;
  string plate;
  string color;
  string status;

 public:
  ~carClass();
  carClass();
  carClass(string brand, string model, float price, string plate, string color,
           string status);

  string getCode();

  string getBrand();
  void setBrand(string value);

  string getModel();
  void setModel(string value);

  float getPrice();
  void setPrice(float value);

  string getPlate();
  void setPlate(string value);

  string getColor();
  void setColor(string value);

  string getStatus();
  void setStatus(string value);

  void show(int rowNumber, int itemNumber);
};
