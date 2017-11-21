#include "Product.h"


void Product::setName(string input)
{
	name = input;
}

void Product::setPrice(double input)
{
	price = input;
}



string Product::getName()
{
	return name;
}

double Product::getPrice()
{
	return price;
}
