#include "Store.h"

Store::Store() {
	inventory[0] = Weapon("sword", 27);
}

void Store::sell()
{
}

void Store::buy()
{
}

void Store::showInventory()
{
	for (int i = 0; i < inventory.size(); i++) {
		std::cout << inventory[i] << std::endl;
	}
}
