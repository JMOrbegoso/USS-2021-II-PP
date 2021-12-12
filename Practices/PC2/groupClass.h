#ifndef GROUPCLASS_H
#define GROUPCLASS_H

#include <string>
#include <iostream>
#include "studentsListClass.h"

using namespace std;

class groupClass
{
private:
    static int counter;
    string code;
    string startDate;
    string endDate;
    string duration;
    studentsListClass *students;
public:
    ~groupClass();
    groupClass();
    groupClass(string startDate, string endDate, string duration);

    string getCode();

    string getStartDate();
    void setStartDate(string value);

    string getEndDate();
    void setEndDate(string value);

    string getDuration();
    void setDuration(string value);

    studentsListClass *getStudents();
    void setStudents(studentsListClass *value);
};

#endif // GROUPCLASS_H
