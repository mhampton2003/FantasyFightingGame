#include "Hero.h"

Hero::Hero()
{
}

Hero::Hero(std::string name, int health) {
	setName(name);
	setHealth(health);
}

void Hero::attack() {
	if (customization[0].getName() == "stick") {
		setDamage(20);
	}
	else {
		setDamage(10);
	}
	std::cout << "Player's damage: " << getDamage() << std::endl;
	determineHealth(getDamage());
}

//player is attacking self and marsh is attacking self