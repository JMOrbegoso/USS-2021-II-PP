#include "groupsListClass.h"

void groupsListClass::grow(int growIn){
    groupClass* aux = new groupClass[this->length + growIn];

    for (int i = 0; i < this->length; i++) {
        *(aux + i) = *(this->head + i);
    }

    this->head = aux;
    this->capacity += growIn;
}

groupsListClass::~groupsListClass(){

}
groupsListClass::groupsListClass(){
    this->capacity = 0;
    this->length = 0;
    this->head = NULL;
}

int groupsListClass::getCapacity(){
    return this->capacity;
}
void groupsListClass::setCapacity(int value){
    this->capacity = value;
}

int groupsListClass::getLength(){
    return this->length;
}
void groupsListClass::setLength(int value){
    this->length = value;
}

groupClass* groupsListClass::getHead(){
    return this->head;
}
void groupsListClass::setHead(groupClass* value){
    this->head = value;
}

void groupsListClass::insert(groupClass* newGroup){
    if (this->length == this->capacity) {
        this->grow(2);
    }

    *(this->head + this->length) = *newGroup;
    this->length++;
}
