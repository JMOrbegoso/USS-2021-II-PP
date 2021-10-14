#include "studentClass.h"

class studentNodeClass {
 private:
  studentClass* student;
  studentNodeClass* next;
  studentNodeClass* previous;

 public:
  ~studentNodeClass();
  studentNodeClass();

  studentClass* getStudent();
  void setStudent(studentClass* value);

  studentNodeClass* getNext();
  void setNext(studentNodeClass* value);

  studentNodeClass* getPrevious();
  void setPrevious(studentNodeClass* value);
};
