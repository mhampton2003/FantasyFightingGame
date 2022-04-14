#ifndef ENEMY_H
#define ENEMY_H

#include "Character.h"
#include <iostream>
#include <random>

class Enemy : public Character {
private:

public:
	Enemy();
	Enemy(std::string, int);
	void attack();
};

#endif