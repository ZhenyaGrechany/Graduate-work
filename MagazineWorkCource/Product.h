#pragma once
#include <string>
using namespace std;

class Product
{
	string name;
	double price;
public:
	virtual void setName(string input);
	virtual void setPrice(double input);
	
	string getName();
	double getPrice();
};

