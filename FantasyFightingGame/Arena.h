#ifndef ARENA_H
#define ARENA_H

#include "Enemy.h"
#include "Hero.h"
#include "Store.h"

class Arena {
private:
	bool playAgain;
public:
	Arena();
	void start();
};

Arena::Arena() {}

void Arena::start() {

	do {
		Hero player("p1", 100);
		Enemy enemy("p2", 100);

		while (!player.isDead() && !enemy.isDead()) {
			player.attack();
			enemy.attack();

			if (player.isDead()) {
				std::cout << "your hero has fallen" << std::endl;
			}
			if (enemy.isDead()) {
				std::cout << "you defeated the enemy" << std::endl;
				player.addGold(10);
			}
		}

		std::cout << "Would you like to play again?" << std::endl;
		int input;
		std::cin >> input;
		if (input == 1) {
			playAgain = true;
		}
		else {
			playAgain = false;
		}
	} while (playAgain);
}

#endif