#include "Character.h"
#include "Weapon.h"

Character::Character()
{
	this->name = "";
	this->health = 0;
	Weapon weapon;
}

Character::Character(std::string name, int health) {
	this->name = name;
	this->health = health;
	Weapon weapon;
}

void Character::attack()
{
	damage = rand() % 20;
	determineHealth(damage);
}

void Character::determineHealth(int damage) 
{
	std::cout << this->getName() << " has " << this->getHealth() << " HP" << std::endl;
	this->health = this->health - damage;
	if (this->health < 0) {
		this->health = 0;
	}
	std::cout << this->getName() << " now has " << this->getHealth() << " HP" << std::endl;
}

bool Character::isDead()
{
	if (health <= 0) {
		return true;
	}
	else {
		return false;
	}
}

int Character::getDamage() const
{
	return damage;
}

int Character::getHealth() const
{
	return health;
}

std::string Character::getName() const
{
	return name;
}

void Character::setDamage(int d)
{
	this->damage = d;
}

void Character::setHealth(int h)
{
	this->health = h;
}

void Character::setName(std::string n)
{
	this->name = n;
}