#include "menu.h"

using namespace std;

int main() {
	professionsList professions;

	collectionsInitialization(professions);
	dataInitialization(professions);

	mainMenu(professions);

	return 0;
}