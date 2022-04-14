#include "Character.h"
#include "Product.h"
#include "Weapon.h"
#include "Armor.h"
#include "Potion.h"

Character::~Character() {
	for (int i = 0; i < 3; i++) {
		delete customization[i];
	}
}

void Character::addBP(int bp) {
	this->bank += bp;
	std::cout << "You gained " << bp << " brownie points!" << std::endl;
	std::cout << "You now have " << this->bank << " brownie points total" << std::endl;
}

int Character::getBank() const {
	return this->bank;
}

void Character::setBank(int bp) {
	this->bank = bp;
}

void Character::getCustomization() {
	for (int i = 0; i < 3; ++i) {
		std::cout << customization[i] << std::endl;
	}
}

Character::Character()
{
	this->name = "";
	this->health = 0;
	customization[0] = new Weapon("sword", 8, 10);
	customization[1] = new Armor("helmet", 5, 20);
	customization[2] = new Potion("health", 50);
}

Character::Character(std::string name, int health) {
	this->name = name;
	this->health = health;
	customization[0] = new Weapon();
	customization[1] = new Armor();
	customization[2] = new Potion();
}

/*
void Character::attack(Character&)
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
	//std::cout << this->getName() << " has " << this->getHealth() << " HP" << std::endl;
	this->health = this->health - damage;
	if (this->health < 0) {
		this->health = 0;
	}
	//std::cout << this->getName() << " now has " << this->getHealth() << " HP" << std::endl;
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