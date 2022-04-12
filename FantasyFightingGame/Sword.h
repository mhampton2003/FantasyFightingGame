#ifndef SWORD_H
#define SWORD_H

#include "Weapon.h"

class Sword : public Weapon {
public:
	Sword();
	Sword(std::string, int);
};

Sword::Sword() {
	setName("");
	setStrength(0);
}

Sword::Sword(std::string name, int strength) {
	setName(name);
	setStrength(strength);
}

#endif