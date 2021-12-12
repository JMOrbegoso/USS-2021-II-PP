#include "studentsListClass.h"

void studentsListClass::grow(int growIn){
    studentClass* aux = new studentClass[this->length + growIn];

    for (int i = 0; i < this->length; i++) {
        *(aux + i) = *(this->head + i);
    }

    this->head = aux;
    this->capacity += growIn;
}

studentsListClass::~studentsListClass(){

}
studentsListClass::studentsListClass(){
    this->capacity = 0;
    this->length = 0;
    this->head = NULL;
}

int studentsListClass::getCapacity(){
    return this->capacity;
}
void studentsListClass::setCapacity(int value){
    this->capacity = value;
}

int studentsListClass::getLength(){
    return this->length;
}
void studentsListClass::setLength(int value){
    this->length = value;
}

studentClass* studentsListClass::getHead(){
    return this->head;
}
void studentsListClass::setHead(studentClass* value){
    this->head = value;
}

void studentsListClass::insert(studentClass* newStudent){
    if (this->length == this->capacity) {
        this->grow(2);
    }

    *(this->head + this->length) = *newStudent;
    this->length++;
}

studentsListClass *studentsListClass::findByDni(string dniToFind){
    studentsListClass* temp = new studentsListClass();

    for (int x = 0; x < this->getLength(); x++){
        studentClass *student = this->getHead() + x;

        if (student->getDni().find(dniToFind, 0) != string::npos)
            temp->insert(student);
    }

    return temp;
}
