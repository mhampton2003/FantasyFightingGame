#include "Store.h"

Store::~Store() {
	for (int i = 0; i < numProducts; i++) {
		delete inventory[numProducts];
	}
}

Store::Store() {
	numProducts = 0;
	inventory[numProducts++] = new Weapon("stick", 10, 20);
	inventory[numProducts++] = new Weapon("knife", 12, 50);
	inventory[numProducts++] = new Weapon("spatula", 15, 100);
}

void Store::start(Hero& h) {
	bool contStore = true;
	std::cout << "Welcome to the Marshmallow Haters Guild! Does anything interest you?" << std::endl;
	while (contStore) {
		std::cout << "[0] Exit Store" << std::endl;
		std::cout << "[1] Buy" << std::endl;
		std::cout << "[2] Sell" << std::endl;
		int choose;
		std::cin >> choose;
		if (choose == 1) {
			showInventory();
			int input;
			std::cin >> input;
			if (input == 0) {
				contStore = false;
			}
			else if (input == 1) {
				buy(h, *&inventory[0]);
			}
			else if (input == 2) {
				buy(h, *&inventory[1]);
			}
			else if (input == 3) {
				buy(h, *&inventory[2]);
			}
			else {
				//error condition
			}
		}
		else if (choose == 2) {
			sell(h);
		}
		else if (choose == 0) {
			break;
		}
		else {
			std::cout << "there was an error with your selection" << std::endl;
		}

		std::cout << "Do anything else in the store?" << std::endl;
	}
}

void Store::sell(Hero& h)
{
	std::cout << "What would you like to sell?" << std::endl;
	std::cout << "You currently own a " << h.customization[0] << std::endl;
	std::cout << "Would you like to sell it?" << std::endl;
	std::cout << "[1] Yes" << std::endl;
	std::cout << "[2] No" << std::endl;
	int input;
	std::cin >> input;
	if (input == 1) {
		h.setBank(h.getBank() + h.customization[0]->getPrice());
		h.customization[0] = new Weapon();
		std::cout << "New Balance: " << h.getBank() << std::endl;
	}
	else if (input == 2) {
		std::cout << "Understandable!" << std::endl;
	}
	else {
		std::cout << "There was an error with your selection" << std::endl;
	}
}

void Store::buy(Hero& h, Product*& p)
{
	std::cout << "You selected the " << p->getName() << "!" << std::endl;
	std::cout << "Stats:" << std::endl;
	std::cout << p << std::endl;
	std::cout << "Would you like to purchase it?" << std::endl;
	std::cout << "Balance: " << h.getBank() << std::endl;
	std::cout << "[1] Yes" << std::endl;
	std::cout << "[2] No" << std::endl;
	int purchase;
	std::cin >> purchase;
	if (purchase == 1) {
		if (h.getBank() >= p->getPrice()) {
			h.setBank(h.getBank() - p->getPrice());
			h.customization[0] = &*p;
			std::cout << "The " << p->getName() << " was added to your inventory!" << std::endl;
			std::cout << "New balance: " << h.getBank() << std::endl;
			std::cout << "Current inventory: " << std::endl;
			h.getCustomization();
		}
		else {
			std::cout << "You don't have enough brownie points. Fight again to earn more!" << std::endl;
		}
	}
	else if (purchase == 2) {
		//no buy condition
	}
	else {
		//error condition
	}
}

void Store::showInventory()
{
	for (int i = 0; i < numProducts; i++) {
		std::cout << "[" << i + 1 << "] ";
		std::cout << inventory[i]->getName() << std::endl;
		
	}
}