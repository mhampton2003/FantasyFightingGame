#include "Enemy.h"

Enemy::Enemy()
{
}

Enemy::Enemy(std::string name, int health) {
	setName(name);
	setHealth(health);
}