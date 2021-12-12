#ifndef SUBJECTSLISTCLASS_H
#define SUBJECTSLISTCLASS_H

#include <iostream>
#include "subjectClass.h"

using namespace std;

class subjectsListClass
{
private:
    int capacity;
    int length;
    subjectClass* head;

    void grow(int growIn);
public:
    ~subjectsListClass();
    subjectsListClass();

    int getCapacity();
    void setCapacity(int value);

    int getLength();
    void setLength(int value);

    subjectClass* getHead();
    void setHead(subjectClass* value);

    void insert(subjectClass* newGroup);
};

#endif // SUBJECTSLISTCLASS_H
