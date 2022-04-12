#ifndef ARMOR_H
#define ARMOR_H

#include "Product.h"

class Armor : public Product {
private:
	int defense;
public:
	Armor();
	Armor(std::string, int);
	void setDefense(int);
};

Armor::Armor() {
	setName("");
	setDefense(0);
}

Armor::Armor(std::string name, int defense) {
	setName(name);
	setDefense(defense);
}

void Armor::setDefense(int defense) {
	this->defense = defense;
}

#endif