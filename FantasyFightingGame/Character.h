#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <random>

class Character {
private:
	int damage;
	int health;
	std::string name;

public:
	Character();
	Character(std::string, int);
	void attack();
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