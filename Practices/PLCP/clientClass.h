#include <string>

using namespace std;

class clientClass {
 private:
  string firstName;
  string lastName;
  string motherLastName;
  string dni;
  string address;
  string phone;
  string email;

 public:
  ~clientClass();
  clientClass();
  clientClass(string firstName, string lastName, string motherLastName,
              string dni, string address, string phone, string email);

  string getFirstName();
  void setFirstName(string value);

  string getLastName();
  void setLastName(string value);

  string getMotherLastName();
  void setMotherLastName(string value);

  string getDni();
  void setDni(string value);

  string getAddress();
  void setAddress(string value);

  string getPhone();
  void setPhone(string value);

  string getEmail();
  void setEmail(string value);

  void show(int rowNumber, int itemNumber);
};
