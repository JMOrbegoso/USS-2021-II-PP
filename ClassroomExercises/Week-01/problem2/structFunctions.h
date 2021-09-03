#include "helpers.h"
#include "structs.h"

using namespace std;

void collectionsInitialization(professionsList& professions) {
  professions.head = NULL;
  professions.capacity = 0;
  professions.length = 0;
}

professionStruct buildProfession(string code, string name, string master,
                                 unsigned short cyclesQuantity) {
  professionStruct profession;

  profession.code = code;
  profession.name = name;
  profession.master = master;
  profession.cyclesQuantity = cyclesQuantity;

  profession.subjects.head = NULL;
  profession.subjects.capacity = 0;
  profession.subjects.length = 0;

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
  professionStruct* aux = new professionStruct[professions.length + growIn];

  for (int i = 0; i < professions.length; i++) {
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
  professions.capacity += growIn;
}

void grow(subjectsList& subjects, int growIn) {
  subjectStruct* aux = new subjectStruct[subjects.length + growIn];

  for (int i = 0; i < subjects.length; i++) {
    *(aux + i) = *(subjects.head + i);
  }

  subjects.head = aux;
  subjects.capacity += growIn;
}

void insert(professionsList& professions, professionStruct newProfession) {
  if (professions.length == professions.capacity) {
    grow(professions, 2);
  }

  *(professions.head + professions.length) = newProfession;
  professions.length++;
}

void insert(subjectsList& subjects, subjectStruct newSubject) {
  if (subjects.length == subjects.capacity) {
    grow(subjects, 2);
  }

  *(subjects.head + subjects.length) = newSubject;
  subjects.length++;
}

void dataInitialization(professionsList& professions) {
  subjectStruct subject1, subject2, subject3, subject4, subject5, subject6,
      subject7, subject8, subject9;
  professionStruct profession1, profession2, profession3;

  subject1 = buildSubject("mat", "Geometria", 4);
  subject2 = buildSubject("est", "Estadistica", 3);
  subject3 = buildSubject("eng", "Ingles", 2);
  subject4 = buildSubject("qui", "Quimica", 2);
  subject5 = buildSubject("inv", "Investigación", 1);
  subject6 = buildSubject("alg", "Algebra", 4);
  subject7 = buildSubject("dib", "Dibujo", 4);
  subject8 = buildSubject("rel", "Religion", 2);
  subject9 = buildSubject("fil", "Filosofía", 2);

  profession1 = buildProfession("sis", "Ing. Sistemas", "Jose Guerrero", 10);
  profession2 = buildProfession("ind", "Ing. Industrial", "Laura Rojas", 10);
  profession3 = buildProfession("mec", "Ing. Mecanica", "Pedro Gomez", 10);

  insert(profession1.subjects, subject1);
  insert(profession1.subjects, subject2);
  insert(profession1.subjects, subject3);

  insert(profession2.subjects, subject4);
  insert(profession2.subjects, subject5);
  insert(profession2.subjects, subject6);

  insert(profession3.subjects, subject7);
  insert(profession3.subjects, subject8);
  insert(profession3.subjects, subject9);

  insert(professions, profession1);
  insert(professions, profession2);
  insert(professions, profession3);
}

professionStruct* requestProfession(professionsList professions,
                                    string message) {
  int selectedOption;

  cout << endl
       << message << "." << endl
       << "Escoja entre las " << professions.length
       << " carreras siguientes:" << endl
       << endl;

  for (int x = 0; x < professions.length; x++) {
    cout << "[" << x + 1 << "]";
    cout << " - Carrera: ";
    cout << (*(professions.head + x)).name;
    cout << " - Con ";
    cout << (*(professions.head + x)).subjects.length;
    cout << " Cursos registrados.";
    cout << endl;
  }

  cout << endl << "Introduzca la opción deseada:" << endl;
  cin >> selectedOption;

  while (!(1 <= selectedOption && selectedOption <= professions.length)) {
    cout << "Por favor, introduzca un valor entre 1 y " << professions.length
         << "." << endl;
    fflush(stdin);
    cin >> selectedOption;
  }

  return (professions.head + selectedOption - 1);
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