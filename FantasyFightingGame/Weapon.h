#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include "Product.h"

class Weapon : public Product {
public:
	Weapon();
	Weapon(std::string, int, int);
	std::string getType();
};

#endif