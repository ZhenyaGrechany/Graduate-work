#pragma once
#include "Product.h"
class LiveProduct :
	public Product
{
	int old;
public:
	LiveProduct();
	~LiveProduct();

	int getOld();
	void setOld(int input);
};

