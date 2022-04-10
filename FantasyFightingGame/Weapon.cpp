#include "Weapon.h"

Weapon::Weapon() {
	name = "no weapon";
	strength = 0;
}

Weapon::Weapon(std::string name, int strength) {
	this->name = name;
	this->strength = strength;
}

void Weapon::setName(std::string name)
{
	this->name = name;
}

void Weapon::setStrength(int strength)
{
	this->strength = strength;
}

std::string Weapon::getName() const
{
	return name;
}

int Weapon::getStrength() const
{
	return strength;
}

std::ostream& operator<<(std::ostream& out, Weapon& rhs)
{
	out << rhs.name << "\n" << rhs.strength << "\n";

	return out;
}
