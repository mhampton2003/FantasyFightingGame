#include "Enemy.h"

Enemy::Enemy()
{}

Enemy::Enemy(std::string name, int health) {
	setName(name);
	setHealth(health);
}

void Enemy::attack(Character& c) {
	setDamage(rand() % 20);
	c.determineHealth(getDamage());
	//std::cout << "Enemy's damage: " << getDamage() << std::endl;
}