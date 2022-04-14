#include "Product.h"

std::string Product::getType() {
	return "product";
}

Product::Product() {
	name = "no weapon";
	strength = 0;
	price = 0;
}

Product::Product(std::string name, int strength, int price) {
	this->name = name;
	this->strength = strength;
	this->price = price;
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

void Product::setDefense(int defense) {
	this->defense = defense;
}

void Product::setPrice(int price) {
	this->price = price;
}

int Product::getDefense() const {
	return this->defense;
}

int Product::getPrice() const {
	return this->price;
}

std::ostream& operator<<(std::ostream& out, Product& rhs)
{
	if (rhs.getType() == "weapon") {
		out << "Name: " << rhs.name << "\n" << "Strength: " << rhs.strength << "\n" << "Price: " << rhs.price;
	}
	else if (rhs.getType() == "armor") {
		out << "Name: " << rhs.name << "\n" << " Defense: " << rhs.defense << "\n" << "Price: " << rhs.defense;
	}
	else if (rhs.getType() == "potion") {
		out << "Name: " << rhs.name << "\n" << "Price: " << rhs.price;
	}
	else if (rhs.getType() == "potion") {
		out << "product";
	}
	else {
		out << "Did not detect weapon type (in <<)";
	}

	return out;
}