#include "Enemy.h"

Enemy::Enemy()
{
}

Enemy::Enemy(std::string name, int health) {
	setName(name);
	setHealth(health);
}

void Enemy::attack() {
	setDamage(rand() % 20);
	determineHealth(getDamage());
	std::cout << "Enemy's damage: " << getDamage() << std::endl;
}