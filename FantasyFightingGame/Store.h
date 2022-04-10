#ifndef STORE_H
#define STORE_H

#include "Weapon.h"
#include <vector>

class Store {
private:
	std::vector<Weapon> inventory;

public:
	Store();
	void sell();
	void buy();
	void showInventory();
};

#endif;