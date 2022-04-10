#include "Hero.h"

Hero::Hero()
{
}

Hero::Hero(std::string name, int health) {
	setName(name);
	setHealth(health);
}