#include <string>

#include "carsListClass.h"

using namespace std;

class roomClass {
 private:
  static int counter;
  string code;
  string firstName;
  string lastName;
  string dni;
  unsigned short age;
  bool genre;
  clientsListClass *cars;

 public:
  ~roomClass();
  roomClass();
  roomClass(string firstName, string lastName, string dni, unsigned short age,
            bool genre);

  string getCode();

  string getFirstName();
  void setFirstName(string value);

  string getLastName();
  void setLastName(string value);

  string getDni();
  void setDni(string value);

  unsigned short getAge();
  void setAge(unsigned short value);

  bool getGenre();
  void setGenre(bool value);
  string getGenreAsString();

  clientsListClass *getCars();
  void setCars(clientsListClass *value);

  void show(int rowNumber, int itemNumber);
};