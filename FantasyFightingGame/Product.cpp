#include "Product.h"
#include "Weapon.h"

Product::Product() {
	name = "no weapon";
	strength = 0;
}

Product::Product(std::string name, int strength) {
	this->name = name;
	this->strength = strength;
}

void Product::setName(std::string name)
{
	this->name = name;
}

void Product::setStrength(int strength)
{
	this->strength = strength;
}

std::string Product::getName() const
{
	return name;
}

int Product::getStrength() const
{
	return strength;
}

std::ostream& operator<<(std::ostream& out, Product& rhs)
{
	out << rhs.name << "\n" << rhs.strength << "\n";

	return out;
}