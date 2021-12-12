#ifndef ACADEMYCLASS_H
#define ACADEMYCLASS_H

#include <groupsListClass.h>
#include "string"

using namespace std;

class academyClass
{
private:
    string name;
    string address;
    string ruc;
    groupsListClass *groups;

public:
    ~academyClass();
    academyClass();

    string getName();
    void setName(string value);

    string getAddress();
    void setAddress(string value);

    string getRuc();
    void setRuc(string value);

    groupsListClass *getGroups();
    void setGroups(groupsListClass *value);
};

#endif // ACADEMYCLASS_H
