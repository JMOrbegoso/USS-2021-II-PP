#include "academyClass.h"

using namespace std;

academyClass::~academyClass(){

}
academyClass::academyClass(){
    this->groups = new groupsListClass();
    this->students = new studentsListClass();
}

string academyClass::getName(){
    return this->name;
}
void academyClass::setName(string value){
    this->name = value;
}

string academyClass::getAddress(){
    return this->address;
}
void academyClass::setAddress(string value){
    this->address = value;
}

string academyClass::getRuc(){
    return this->ruc;
}
void academyClass::setRuc(string value){
    this->ruc = value;
}

groupsListClass *academyClass::getGroups(){
    return this->groups;
}
void academyClass::setGroups(groupsListClass *value){
    this->groups = value;
}

studentsListClass *academyClass::getStudents(){
    return this->students;
}
void academyClass::setStudents(studentsListClass *value){
    this->students = value;
}
