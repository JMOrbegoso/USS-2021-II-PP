#include <string>

using namespace std;

class clientClass {
 private:
  static int counter;
  string code;
  string firstName;
  string lastName;
  string dni;
  string address;
  string phone;
  unsigned short age;
  bool genre;
  string arrivalDate;

 public:
  ~clientClass();
  clientClass();
  clientClass(string firstName, string lastName, string dni, string address,
              string phone, unsigned short age, bool genre, string arrivalDate);

  string getCode();

  string getFirstName();
  void setFirstName(string value);

  string getLastName();
  void setLastName(string value);

  string getDni();
  void setDni(string value);

  string getAddress();
  void setAddress(string value);

  string getPhone();
  void setPhone(string value);

  unsigned short getAge();
  void setAge(unsigned short value);

  bool getGenre();
  void setGenre(bool value);
  string getGenreAsString();

  string getArrivalDate();
  void setArrivalDate(string value);

  void show(int rowNumber, int itemNumber);
};
