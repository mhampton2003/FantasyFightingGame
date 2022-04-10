#ifndef ARENA_H
#define ARENA_H

#include "Enemy.h"
#include "Hero.h"
#include "Store.h"

class Arena {
public:
	Arena();
	void start();
	Store store;
	store.showInventory();
};

Arena::Arena() {}

void Arena::start() {
	Hero player("p1", 100);
	Enemy enemy("p2", 100);

	while (!player.isDead() && !enemy.isDead()) {
		enemy.attack();
		player.attack();

		if (player.isDead()) {
			std::cout << "your hero has fallen" << std::endl;
		}
		if (enemy.isDead()) {
			std::cout << "you defeated the enemy" << std::endl;
		}
	}
}

#endif