#include <string>

using namespace std;

class clientClass {
 private:
  string code;
  string firstName;
  string lastName;
  string dni;
  unsigned short age;
  float heigh;

 public:
  ~clientClass();
  clientClass();
  clientClass(string code, string firstName, string lastName, string dni,
              unsigned short age, float heigh);

  string getCode();
  void setCode(string value);

  string getFirstName();
  void setFirstName(string value);

  string getLastName();
  void setLastName(string value);

  string getDni();
  void setDni(string value);

  unsigned short getAge();
  void setAge(unsigned short value);

  float getHeigh();
  void setHeigh(float value);

  void show(int rowNumber, int itemNumber);
};
