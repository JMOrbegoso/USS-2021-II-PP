#ifndef STUDENTCLASS_H
#define STUDENTCLASS_H

#include <string>

using namespace std;

class studentClass
{
private:
    static int counter;
    string code;
    string firstName;
    string lastName;
    string dni;
public:
    ~studentClass();
    studentClass();
    studentClass(string firstName, string lastName, string dni);

    string getCode();

    string getFirstName();
    void setFirstName(string value);

    string getLastName();
    void setLastName(string value);

    string getDni();
    void setDni(string value);
};

#endif // STUDENTCLASS_H
