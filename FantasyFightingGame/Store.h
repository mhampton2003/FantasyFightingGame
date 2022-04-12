#ifndef STORE_H
#define STORE_H

#include "Weapon.h"
#include "Product.h"
#include <vector>

class Store {
private:
	std::vector<Product> inventory;

public:
	Store();
	void sell();
	void buy();
	void showInventory();
};

#endif;