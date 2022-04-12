#include "Store.h"

Store::Store() {
	inventory.push_back(Weapon("sword", 10));
	inventory.push_back(Weapon("bow", 12));
	inventory.push_back(Weapon("axe", 15));
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
		std::cout << "Weapon " << i + 1 << ":" << std::endl;
		std::cout << inventory[i] << std::endl;
	}
}
