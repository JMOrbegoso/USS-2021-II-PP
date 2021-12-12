#ifndef SUBJECTCLASS_H
#define SUBJECTCLASS_H

#include <string>

using namespace std;

class subjectClass
{
private:
    static int counter;
    string code;
    string name;
    unsigned short credits;
public:
    ~subjectClass();
    subjectClass();
    subjectClass(string name, unsigned short credits);

    string getCode();

    string getName();
    void setName(string value);

    unsigned short getCredits();
    void setCredits(unsigned short value);
};

#endif // SUBJECTCLASS_H
