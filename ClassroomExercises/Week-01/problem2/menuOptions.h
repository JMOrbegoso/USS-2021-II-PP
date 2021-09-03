#include "structFunctions.h"

void showAppTitle() {
    cout << endl;
    cout << "-----------------------------------------------------------";
    cout << endl;
    cout << "\t\t Sistema virtual de la universidad ";
    cout << endl;
    cout << "-----------------------------------------------------------";
    cout << endl;
}

void registerNewProfession(professionsList& professions) {
    professionStruct newProfession;
    string code, master, name;
    int cyclesQuantity;

    clearScreen();
    showAppTitle();

    gotoxy(20, 8);
    cout << "Registrar nueva profesión de la universidad:" << endl;

    code = requestText("Ingrese el codigo del la nueva profesión", 2);
    name = requestText("Ingrese el nombre de la profesión", 2);
    master = requestText("Ingrese el nombre completo del director", 5);
    cyclesQuantity =
        requestIntegerNumber("Ingrese el numero de ciclos de la profesión",
            "Por favor ingrese un numero igual o mayor a 1", 1);

    newProfession = buildProfession(code, name, master, cyclesQuantity);

    insert(professions, newProfession);

    cout << "La profesión fue añadida correctamente";

    cout << endl << endl;
}

void listProfessions(professionsList professions) {
    clearScreen();
    showAppTitle();

    gotoxy(20, 5);
    cout << "Lista de profesiones de la universidad:" << endl;

    showProfessionsListHeader(7);

    for (int x = 0; x < professions.quantity; x++) {
        showProfession(*(professions.head + x), 9, x);
    }

    cout << endl << endl;
}

void findProfessions(professionsList professions) {
    string textToFind;
    bool foundProfession;

    textToFind = requestText("Ingrese el texto a buscar", 3, 3);

    clearScreen();
    showAppTitle();

    gotoxy(20, 5);
    cout << "Lista de profesiones de la universidad con un nombre similar a "
        << textToFind << ":" << endl;

    showProfessionsListHeader(7);

    for (int x = 0; x < professions.quantity; x++) {
        if (containsText((professions.head + x)->name, textToFind)) {
            foundProfession = true;
            showProfession(*(professions.head + x), 9, x);
        }
    }

    if (!foundProfession) {
        gotoxy(20, 10);
        cout
            << "No se encontró ninguna profesión con un nombre similar al buscado.";
    }

    cout << endl << endl;
}

void registerNewSubject(professionsList& professions) {
    professionStruct newProfession;
    string code, master, name;
    int cyclesQuantity;

    clearScreen();
    showAppTitle();

    gotoxy(20, 8);
    cout << "Registrar nueva profesión de la universidad:" << endl;

    code = requestText("Ingrese el codigo del la nueva profesión", 2);
    master = requestText("Ingrese el nombre completo del director", 5);
    name = requestText("Ingrese el nombre de la profesión", 2);
    cyclesQuantity =
        requestIntegerNumber("Ingrese el numero de ciclos de la profesión",
            "Por favor ingrese un numero igual o mayor a 1", 1);

    newProfession = buildProfession(code, name, master, cyclesQuantity);

    insert(professions, newProfession);

    cout << "La profesión fue añadida correctamente";

    cout << endl << endl;
}