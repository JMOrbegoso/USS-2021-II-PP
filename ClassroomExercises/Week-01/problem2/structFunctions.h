#include "helpers.h"
#include "structs.h"

using namespace std;

void collectionsInitialization(professionsList& professions) {
  professions.head = NULL;
  professions.quantity = 0;
  professions.max = 0;
}

professionStruct buildProfession(string code, string name, string master,
                                 unsigned short cyclesQuantity) {
  professionStruct profession;

  profession.code = code;
  profession.name = name;
  profession.master = master;
  profession.cyclesQuantity = cyclesQuantity;

  profession.subjects.head = NULL;
  profession.subjects.quantity = 0;
  profession.subjects.max = 0;

  return profession;
}

subjectStruct buildSubject(string code, string name, unsigned short credits) {
  subjectStruct subject;

  subject.code = code;
  subject.name = name;
  subject.credits = credits;

  return subject;
}

void grow(professionsList& professions, int growIn) {
  professionStruct* aux = new professionStruct[professions.quantity + growIn];

  for (int i = 0; i < professions.quantity; i++) {
    *(aux + i) = *(professions.head + i);
  }

  /*
  * https://stackoverflow.com/questions/36229404/invalid-address-specified-to-rtlvalidateheap-when-deleting-pointer-to-derived-cl
  * https://www.learncpp.com/cpp-tutorial/the-stack-and-the-heap/
  * https://www.learncpp.com/cpp-tutorial/dynamic-memory-allocation-with-new-and-delete/
  if (professions.head != NULL) {
      delete professions.head;
  }
  */

  professions.head = aux;
  professions.max += growIn;
}

void grow(subjectsList& subjects, int growIn) {
  subjectStruct* aux = new subjectStruct[subjects.quantity + growIn];

  for (int i = 0; i < subjects.quantity; i++) {
    *(aux + i) = *(subjects.head + i);
  }

  subjects.head = aux;
  subjects.max += growIn;
}

void insert(professionsList& professions, professionStruct newProfession) {
  if (professions.quantity == professions.max) {
    grow(professions, 2);
  }

  *(professions.head + professions.quantity) = newProfession;
  professions.quantity++;
}

void insert(subjectsList& subjects, subjectStruct newSubject) {
  if (subjects.quantity == subjects.max) {
    grow(subjects, 2);
  }

  *(subjects.head + subjects.quantity) = newSubject;
  subjects.quantity++;
}

void dataInitialization(professionsList& professions) {
  subjectStruct subject1, subject2, subject3, subject4, subject5, subject6;
  professionStruct profession1, profession2, profession3;

  subject1 = buildSubject("mat", "Geometria", 4);
  subject2 = buildSubject("est", "Estadistica", 3);
  subject3 = buildSubject("eng", "Ingles", 2);
  subject4 = buildSubject("qui", "Quimica", 2);
  subject5 = buildSubject("inv", "Investigación", 1);
  subject6 = buildSubject("alg", "Algebra", 4);

  profession1 = buildProfession("sis", "Ing. Sistemas", "Jose Guerrero", 10);
  profession2 = buildProfession("ind", "Ing. Industrial", "Laura Rojas", 10);
  profession3 = buildProfession("mec", "Ing. Mecanica", "Pedro Gomez", 10);

  insert(profession1.subjects, subject1);
  insert(profession1.subjects, subject2);
  insert(profession1.subjects, subject3);

  insert(profession2.subjects, subject4);
  insert(profession2.subjects, subject5);
  insert(profession2.subjects, subject6);

  insert(professions, profession1);
  insert(professions, profession2);
  insert(professions, profession3);
}

void showProfessionsListHeader(int y) {
  gotoxy(0, y);
  cout << "#";
  gotoxy(5, y);
  cout << "Codigo";
  gotoxy(15, y);
  cout << "Nombre";
  gotoxy(35, y);
  cout << "Director";
  gotoxy(65, y);
  cout << "Nº Ciclos";
}

void showProfession(professionStruct profession, int y, int itemNumber) {
  gotoxy(0, y + itemNumber);
  cout << itemNumber;
  gotoxy(5, y + itemNumber);
  cout << profession.code;
  gotoxy(15, y + itemNumber);
  cout << profession.name;
  gotoxy(35, y + itemNumber);
  cout << profession.master;
  gotoxy(65, y + itemNumber);
  cout << profession.cyclesQuantity;
}

void showSubjectsListHeader(int y) {
  gotoxy(0, y);
  cout << "#";
  gotoxy(5, y);
  cout << "Codigo";
  gotoxy(15, y);
  cout << "Nombre";
  gotoxy(35, y);
  cout << "Nº Creditos";
}

void showSubject(subjectStruct subject, int y, int itemNumber) {
  gotoxy(0, y + itemNumber);
  cout << itemNumber;
  gotoxy(5, y + itemNumber);
  cout << subject.code;
  gotoxy(15, y + itemNumber);
  cout << subject.name;
  gotoxy(35, y + itemNumber);
  cout << subject.credits;
}