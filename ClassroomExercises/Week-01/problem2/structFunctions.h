#include "helpers.h"
#include "structs.h"

using namespace std;

void collectionsInitialization(professionsList &professions) {
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

void grow(professionsList &professions, int growIn) {
  professionStruct *aux = new professionStruct[professions.quantity + growIn];

  for (int i = 0; i < professions.quantity; i++) {
    *(aux + i) = *(professions.head + i);
  }

  if (professions.head != NULL) {
    delete professions.head;
  }

  professions.head = aux;
  professions.max += growIn;
}

void insert(professionsList &professions, professionStruct profession) {
  if (professions.quantity == professions.max) {
    grow(professions, 3);
  }

  *(professions.head + professions.quantity) = profession;
  professions.quantity++;
}

void dataInitialization(professionsList &professions) {
  professionStruct profession1, profession2, profession3;

  profession1 = buildProfession("sis", "Ing. Sistemas", "Jose Guerrero", 10);
  profession2 = buildProfession("ind", "Ing. Industrial", "Laura Rojas", 10);
  profession3 = buildProfession("mec", "Ing. Mecanica", "Pedro Gomez", 10);

  insert(professions, profession1);
  insert(professions, profession2);
  insert(professions, profession3);
}
