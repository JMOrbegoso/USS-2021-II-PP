#include "menuOptions.h"

using namespace std;

int requestMenuOption() {
    int selectedOption;

    clearScreen();
    showAppTitle();

    cout << endl
        << "Esta aplicación tiene las siguientes opciones:" << endl
        << endl;

    cout << "[1] Registrar nuevo equipo de futbol" << endl;
    cout << "[2] Registrar nuevo jugador en equipo" << endl;
    cout << "[3] Buscar equipo de futbol" << endl;
    cout << "[4] Listar todos los equipos" << endl;
    cout << "[5] Ver detalle de equipo" << endl;

    cout << endl;
    cout << "[0] Cerrar" << endl;

    cout << endl << "Por favor ingrese una de las opciones:" << endl;
    cin >> selectedOption;
    while (!(0 <= selectedOption && selectedOption <= 5)) {
        cout << "La opcion seleccionada fue inválida, por favor seleccione una "
            "opcion válida:"
            << endl;
        cin >> selectedOption;
    }
    return selectedOption;
}

void mainMenu(sportStruct& sport) {
    int selectedOption;

    do {
        selectedOption = requestMenuOption();

        if (selectedOption != 0) {
            switch (selectedOption) {
            case 1:
                registerNewTeam(sport);
                addDelay(1.5);
                break;
            case 2:
                registerNewPlayer(sport);
                addDelay(1.5);
                break;
            case 3:
                findTeam(sport);
                pauseProcess();
                break;
            case 4:
                showTeams(sport);
                pauseProcess();
                break;
            case 5:
                showTeamDetail(sport);
                pauseProcess();
                break;
            }
        }
    } while (!(selectedOption == 0));

    cout << "Gracias por usar la app, tenga un buen día!";
}