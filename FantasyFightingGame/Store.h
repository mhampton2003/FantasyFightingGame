#ifndef STORE_H
#define STORE_H

#include "Weapon.h"
#include "Product.h"
#include "Hero.h"
#include <vector>

class Store {
private:
	int numProducts;
	Product* inventory[15];

public:
	Store();
	void start(Hero&);
	void sell(Hero&);
	void buy(Hero&, Product*&);
	void showInventory();
	~Store();
};

#endif;