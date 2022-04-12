#include "Weapon.h"

Weapon::Weapon() {
	setName("no weapon");
	setStrength(0);
}

Weapon::Weapon(std::string name, int strength) {
	setName(name);
	setStrength(strength);
}