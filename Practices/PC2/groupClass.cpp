#include "groupClass.h"

int groupClass::counter = 1;

groupClass::~groupClass(){

}
groupClass::groupClass(){

}
groupClass::groupClass(string startDate, string endDate, string duration){
    this->code = "group-" + to_string(groupClass::counter);
    groupClass::counter++;

    this->startDate = startDate;
    this->endDate = endDate;
    this->duration = duration;

    this->students = new studentsListClass();
}

string groupClass::getCode(){
    return this->code;
}

string groupClass::getStartDate(){
    return this->startDate;
}
void groupClass::setStartDate(string value){
    this->startDate = value;
}

string groupClass::getEndDate(){
    return this->endDate;
}
void groupClass::setEndDate(string value){
    this->endDate = value;
}

string groupClass::getDuration(){
    return this->duration;
}
void groupClass::setDuration(string value){
    this->duration = value;
}

studentsListClass *groupClass::getStudents(){
    return this->students;
}
void groupClass::setStudents(studentsListClass *value){
    this->students = value;
}
