#include "subjectsListClass.h"

void subjectsListClass::grow(int growIn){
    subjectClass* aux = new subjectClass[this->length + growIn];

    for (int i = 0; i < this->length; i++) {
        *(aux + i) = *(this->head + i);
    }

    this->head = aux;
    this->capacity += growIn;
}

subjectsListClass::~subjectsListClass(){

}
subjectsListClass::subjectsListClass(){
    this->capacity = 0;
    this->length = 0;
    this->head = NULL;
}

int subjectsListClass::getCapacity(){
    return this->capacity;
}
void subjectsListClass::setCapacity(int value){
    this->capacity = value;
}

int subjectsListClass::getLength(){
    return this->length;
}
void subjectsListClass::setLength(int value){
    this->length = value;
}

subjectClass* subjectsListClass::getHead(){
    return this->head;
}
void subjectsListClass::setHead(subjectClass* value){
    this->head = value;
}

void subjectsListClass::insert(subjectClass* newSubject){
    if (this->length == this->capacity) {
        this->grow(2);
    }

    *(this->head + this->length) = *newSubject;
    this->length++;
}
