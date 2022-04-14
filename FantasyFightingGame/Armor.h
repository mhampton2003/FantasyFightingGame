#ifndef ARMOR_H
#define ARMOR_H

#include "Product.h"

class Armor : public Product {
private:

public:
	Armor();
	Armor(std::string, int, int);
	std::string getType();
};

std::string Armor::getType() {
	return "armor";
}

Armor::Armor() {
	setName("");
	setDefense(0);
	setPrice(0);
}

Armor::Armor(std::string name, int defense, int price) {
	setName(name);
	setDefense(defense);
	setPrice(price);
}

#endif