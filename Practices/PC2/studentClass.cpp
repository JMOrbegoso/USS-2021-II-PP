#include "studentClass.h"

int studentClass::counter = 1;

studentClass::~studentClass(){

}
studentClass::studentClass(){

}
studentClass::studentClass(string firstName, string lastName, string dni){
    this->code = "std-" + to_string(studentClass::counter);
    studentClass::counter++;

    this->firstName = firstName;
    this->lastName = lastName;
    this->dni = dni;
}

string studentClass::getCode(){
    return this->code;
}

string studentClass::getFirstName(){
    return this->firstName;
}
void studentClass::setFirstName(string value){
    this->firstName = value;
}

string studentClass::getLastName(){
    return this->lastName;
}
void studentClass::setLastName(string value){
    this->lastName = value;
}

string studentClass::getDni(){
    return this->dni;
}
void studentClass::setDni(string value){
    this->dni = value;
}

