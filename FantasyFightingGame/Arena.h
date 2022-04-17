#ifndef ARENA_H
#define ARENA_H

#include "Enemy.h"
#include "Hero.h"
#include "Store.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Arena {
private:
	bool playAgain = true;
public:
	Arena();
	void start();
	void saveToFile(std::ostream&, Hero&);
	void saveFromFile(std::istream&, Hero&);
};

Arena::Arena() {}

void Arena::saveToFile(std::ostream& out, Hero& h) {
	out << h.getName() << std::endl;
	for (int i = 0; i < 3; i++) {
		if (h.customization[i]->getType() == "weapon") {
			out << h.customization[i]->getName() << std::endl;
			out << h.customization[i]->getStrength() << std::endl;
			out << h.customization[i]->getPrice() << std::endl;
		}
		else if (h.customization[i]->getType() == "armor") {
			out << h.customization[i]->getName() << std::endl;
			out << h.customization[i]->getDefense() << std::endl;
			out << h.customization[i]->getPrice() << std::endl;
		}
		else if (h.customization[i]->getType() == "potion") {
			out << h.customization[i]->getName() << std::endl;
			out << h.customization[i]->getPrice() << std::endl;
		}

	}
	out << h.getBank() << std::endl;
}

void Arena::saveFromFile(std::istream& in, Hero& h) {
	std::string line;
	while (in) {
		//istream& getLine(in);
		line = in.get();
		h.setName(line);
		h.customization[0]->setName(getLine(line, in));
		h.customization[0]->setStrength((int)line);
		std::cout << line;
	}
}

void Arena::start() {
	do{
		player.setHealth(100);
		enemy.setHealth(100);

		while (!player.isDead() && !enemy.isDead()) {
			player.attack(enemy);
			enemy.attack(player);

			if (player.isDead()) {
				std::cout << "your hero has fallen" << std::endl;
			}
			if (enemy.isDead()) {
				std::cout << "you defeated the marshmallow!" << std::endl;
				player.addBP(10);
			}
		}

		std::cout << "Would you like to play again?" << std::endl;
		std::cout << "[0] Give up" << std::endl;
		std::cout << "[1] Fight again" << std::endl;
		std::cout << "[2] Store" << std::endl;
		int input;
		std::cin >> input;
		if (input == 1) {
			playAgain = true;
		}
		else if (input == 2) {
			Store s;
			s.start(player);
			std::cout << "Re enter the cafeteria?" << std::endl;
			std::cout << "[1] Yes" << std::endl;
			std::cout << "[2] No" << std::endl;
			int cont;
			std::cin >> cont;
			if (cont == 1) {
				playAgain = true;
			}
			else if (cont == 2) {
				playAgain = false;
			}
			else {
				std::cout << "There was an error with your selection" << std::endl;
			}
		}
		else if (input == 0) {
			playAgain = false;
			saveToFile(fout, player);
		}
		else {
			std::cout << "Continue error" << std::endl;
		}
	} while (playAgain);
}

#endif