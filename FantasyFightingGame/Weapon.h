#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon {
private:
	std::string name;
	int strength;
public:
	Weapon();
	Weapon(std::string, int);
	void setName(std::string);
	void setStrength(int);
	std::string getName() const;
	int getStrength() const;
	friend std::ostream& operator<<(std::ostream&, Weapon&);
};

#endif