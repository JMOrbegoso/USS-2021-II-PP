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

  return profession;
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

void insert(professionsList& professions, professionStruct newProfession) {
  if (professions.quantity == professions.max) {
    grow(professions, 2);
  }

  *(professions.head + professions.quantity) = newProfession;
  professions.quantity++;
}

void dataInitialization(professionsList& professions) {
  professionStruct profession1, profession2, profession3;

  profession1 = buildProfession("sis", "Ing. Sistemas", "Jose Guerrero", 10);
  profession2 = buildProfession("ind", "Ing. Industrial", "Laura Rojas", 10);
  profession3 = buildProfession("mec", "Ing. Mecanica", "Pedro Gomez", 10);

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