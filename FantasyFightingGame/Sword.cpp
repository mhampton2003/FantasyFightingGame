#include "Sword.h"

Sword::Sword() {
	setName("");
	setStrength(0);
}

Sword::Sword(std::string name, int strength) {
	setName(name);
	setStrength(strength);
}