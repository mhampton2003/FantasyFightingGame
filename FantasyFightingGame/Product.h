#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class Product {
private:
	std::string name;
	int strength;
public:
	Product();
	Product(std::string, int);
	void setName(std::string);
	void setStrength(int);
	std::string getName() const;
	int getStrength() const;
	friend std::ostream& operator<<(std::ostream&, Product&);
};

#endif