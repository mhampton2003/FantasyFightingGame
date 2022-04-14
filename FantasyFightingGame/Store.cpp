#include "Store.h"

Store::Store() {
	numProducts = 0;
	inventory[numProducts++] = new Weapon("stick", 10, 20);
	inventory[numProducts++] = new Weapon("bow", 12, 50);
	inventory[numProducts++] = new Weapon("axe", 15, 100);
}

void Store::start(Hero& h) {
	
	std::cout << "Welcome to the Marshmallow Haters Guild! Does anything interest you?" << std::endl;
	std::cout << "[0] Exit" << std::endl;
	showInventory();
	int input;
	std::cin >> input;
	if (input == 0) {

	}
	else if (input == 1) {
		std::cout << "You selected the marshmallow roasting stick!" << std::endl;
		std::cout << "Stats:" << std::endl;
		std::cout << *inventory[0] << std::endl;
		std::cout << "Would you like to purchase it?" << std::endl;
		std::cout << "[1] Yes" << std::endl;
		std::cout << "[2] No" << std::endl;
		int purchase;
		std::cin >> purchase;
		if (purchase == 1) {
			h.customization[0] = *inventory[0];
			std::cout << "The stick was added to your inventory!" << std::endl;
			std::cout << "Current inventory: " << std::endl;
			h.getCustomization();
		}
		else if (purchase == 2) {

		}
		else {

		}
	}
	else if (input == 2) {

	}
	else if (input == 3) {

	}
	else {

	}
}

void Store::sell()
{
}

void Store::buy()
{

}

void Store::showInventory()
{
	for (int i = 0; i < numProducts; i++) {
		std::cout << "[" << i + 1 << "] ";
		//not necessary but keep?
		if (inventory[i]->getType() == "weapon") {
			std::cout << inventory[i]->getName() << std::endl;
		}
		else if (inventory[i]->getType() == "armor") {
			std::cout << inventory[i]->getName() << std::endl;
		}
		else if (inventory[i]->getType() == "potion") {
			std::cout << inventory[i]->getName() << std::endl;
		}
		else {
			std::cout << "Did not detect weapon type (in showInventory)" << std::endl;
		}
		
	}
}
