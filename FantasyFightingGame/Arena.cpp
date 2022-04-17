#include "Enemy.h"
#include "Character.h"
#include "Arena.h"

int main() {
	Arena a;
	std::cout << "Welcome to the cafeteria! Press 0 to start the food fight" << std::endl;
	std::cout << "[1] New Game" << std::endl;
	std::cout << "[2] Continue" << std::endl;
	std::ifstream fin("SaveFile.txt");
	std::ofstream fout("SaveFile.txt");
	int start;
	std::cin >> start;

	if (start == 2) {
		Hero a.saveFromFile(fin);
	}
	else if (start == 1) {
		Hero player("p1", 100);
		Enemy enemy("marsh", 100);
	}

	a.start();

	return 0;
}

/*
* FIRST ORDER OF BUSINESS
* load/save character using file IO
* 
* 
* pokemon as inspiration for gameplay?
* enemy can have selection of attacks contained in array? vector? that is randomly chosen
* player can choose which potions to use?
*/