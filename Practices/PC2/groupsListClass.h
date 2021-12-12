#ifndef GROUPSLISTCLASS_H
#define GROUPSLISTCLASS_H

#include "groupClass.h"
#include <iostream>

class groupsListClass
{
private:
    int capacity;
    int length;
    groupClass* head;

    void grow(int growIn);
public:
    ~groupsListClass();
    groupsListClass();

    int getCapacity();
    void setCapacity(int value);

    int getLength();
    void setLength(int value);

    groupClass* getHead();
    void setHead(groupClass* value);

    void insert(groupClass* newGroup);
};

#endif // GROUPSLISTCLASS_H
