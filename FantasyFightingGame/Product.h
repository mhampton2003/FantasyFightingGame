#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class Product {
private:
	std::string name;
	int strength;
	int defense;
	int price;
public:
	Product();
	Product(std::string, int, int);
	void setName(std::string);
	void setStrength(int);
	void setDefense(int);
	void setPrice(int);
	std::string getName() const;
	int getStrength() const;
	int getDefense() const;
	int getPrice() const;
	virtual std::string getType() = 0;
	friend std::ostream& operator<<(std::ostream&, Product*&);
	~Product();
};

#endif