#include <string>

using namespace std;

class personClass {
 private:
  string firstName;
  string lastName;
  string dni;

 public:
  ~personClass();
  personClass();
  personClass(string firstName, string lastName, string dni);

  string getFirstName();
  void setFirstName(string value);

  string getLastName();
  void setLastName(string value);

  string getDni();
  void setDni(string value);
};
