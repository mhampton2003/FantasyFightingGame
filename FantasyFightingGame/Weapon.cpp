#include "Weapon.h"

Weapon::Weapon() {
	setName("no weapon");
	setStrength(0);
}

Weapon::Weapon(std::string name, int strength, int price) {
	setName(name);
	setStrength(strength);
	setPrice(price);
}

std::string Weapon::getType() {
	return "weapon";
}