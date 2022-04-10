#ifndef HERO_H
#define HERO_H

#include "Character.h"
#include <iostream>
#include <random>

class Hero : public Character {
private:

public:
	Hero();
	Hero(std::string, int);
};

#endif