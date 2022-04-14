#ifndef POTION_H
#define POTION_H

#include "Product.h"

class Potion : public Product {
public:
	Potion();
	Potion(std::string, int);
	std::string getType();
};

std::string Potion::getType() {
	return "potion";
}

Potion::Potion() {
	setName("");
	setPrice(0);
}

Potion::Potion(std::string name, int price) {
	setName(name);
	setPrice(price);
}

#endif