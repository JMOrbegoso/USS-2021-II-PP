#include "subjectClass.h"

int subjectClass::counter = 1;

subjectClass::~subjectClass(){

}
subjectClass::subjectClass(){

}
subjectClass::subjectClass(string name, unsigned short credits){
    this->code = "cur-" + to_string(subjectClass::counter);
    subjectClass::counter++;

    this->name = name;
    this->credits = credits;
}

string subjectClass::getCode(){
    return this->code;
}

string subjectClass::getName(){
    return this->name;
}
void subjectClass::setName(string value){
    this->name = value;
}

unsigned short subjectClass::getCredits(){
    return this->credits;
}
void subjectClass::setCredits(unsigned short value){
    this->credits = value;
}
