#include "Character.h"
#include "Product.h"
#include "Weapon.h"
#include "Armor.h"
#include "Potion.h"

void Character::getCustomization() {
	for (int i = 0; i < 3; ++i) {
		std::cout << customization[i] << std::endl;
	}
}

Character::Character()
{
	this->name = "";
	this->health = 0;
	customization[0] = Weapon("sword", 8, 10);
	customization[1] = Armor("helmet", 5, 20);
	customization[2] = Potion("health", 50);
}

Character::Character(std::string name, int health) {
	this->name = name;
	this->health = health;
	customization[0] = Weapon();
	customization[1] = Armor();
	customization[2] = Potion();
}

/*
void Character::attack()
{
	damage = rand() % 20;
	if (customization[0].getName() == "stick") {
		damage = 20;
	}
	else {
		damage = 10;
	}
	determineHealth(damage);
}
*/

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