#include <string>

#include "personClass.h"

using namespace std;

class clientClass : personClass {
 private:
  static int counter;
  string code;
  bool genre;

 public:
  ~clientClass();
  clientClass();
  clientClass(string firstName, string lastName, string dni, bool genre);

  string getCode();

  bool getGenre();
  void setGenre(bool value);
  string getGenreAsString();

  void show(int rowNumber, int itemNumber);
};
