#ifndef ARENA_H
#define ARENA_H

#include "Enemy.h"
#include "Hero.h"
#include "Store.h"

class Arena {
private:
	bool playAgain = true;
public:
	Arena();
	void start();
	void addBP(int);
	int bank = 0;
};

void Arena::addBP(int bp) {
	bank += bp;
	std::cout << "You gained " << bp << " brownie points!" << std::endl;
	std::cout << "You now have " << bank << " brownie points total" << std::endl;
}

Arena::Arena() {}

void Arena::start() {
	std::cout << "Welcome to the cafeteria! Press 0 to start the food fight" << std::endl;
	int start;
	std::cin >> start;
	if (start == 0) {
		do {
			Hero player("p1", 100);
			Enemy enemy("marsh", 100);

			/*
			std::cout << player.customization[0] << std::endl;
			std::cout << player.customization[1] << std::endl;
			std::cout << player.customization[2] << std::endl;
			*/

			while (!player.isDead() && !enemy.isDead()) {
				player.attack();
				enemy.attack();

				if (player.isDead()) {
					std::cout << "your hero has fallen" << std::endl;
				}
				if (enemy.isDead()) {
					std::cout << "you defeated the marshmallow!" << std::endl;
					addBP(10);
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
			}
			else if (input == 0) {
				playAgain = false;
			}
			else {
				std::cout << "Error in restarting" << std::endl;
			}
		} while (playAgain);
	}
}

#endif