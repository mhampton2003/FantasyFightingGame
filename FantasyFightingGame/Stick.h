#ifndef STICK_H
#define STICK_H

#include "Weapon.h"

class Stick : public Weapon {
public:
	Stick();
	Stick(std::string, int);
};

Stick::Stick() {
	setName("stick");
	setStrength(5);
}

Stick::Stick(std::string name, int strength) {
	setName(name);
	setStrength(strength);
}

#endif