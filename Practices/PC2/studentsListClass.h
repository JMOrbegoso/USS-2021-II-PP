#ifndef STUDENTSLISTCLASS_H
#define STUDENTSLISTCLASS_H

#include <string>
#include "studentClass.h"

using namespace std;

class studentsListClass
{
private:
    int capacity;
    int length;
    studentClass* head;

    void grow(int growIn);
public:
    ~studentsListClass();
    studentsListClass();

    int getCapacity();
    void setCapacity(int value);

    int getLength();
    void setLength(int value);

    studentClass* getHead();
    void setHead(studentClass* value);

    void insert(studentClass* newStudent);
};

#endif // STUDENTSLISTCLASS_H
