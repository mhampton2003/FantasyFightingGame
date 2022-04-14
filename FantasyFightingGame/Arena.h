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
};

Arena::Arena() {}

void Arena::start() {
	std::cout << "Welcome to the cafeteria! Press 0 to start the food fight" << std::endl;
	int start;
	std::cin >> start;
	if (start == 0) {
		Hero player("p1", 100);
		Enemy enemy("marsh", 100);

		do {

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
			}
			else {
				std::cout << "Continue error" << std::endl;
			}
		} while (playAgain);
	}
}

#endif