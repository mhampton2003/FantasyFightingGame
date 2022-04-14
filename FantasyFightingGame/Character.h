#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <random>
#include <vector>
#include "Product.h"

class Character {
private:
	int damage;
	int health;
	std::string name;

public:
	void getCustomization();
	Product customization[3];
	Character();
	Character(std::string, int);
	virtual void attack() = 0;
	bool isDead();
	void determineHealth(int);
	int getDamage() const;
	int getHealth() const;
	std::string getName() const;
	void setDamage(int);
	void setHealth(int);
	void setName(std::string);
};


#endif