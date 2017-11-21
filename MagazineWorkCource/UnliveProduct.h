#pragma once
#include "Product.h"
class UnliveProduct :
	public Product
{
	string material;
	int weight;
public:
	UnliveProduct();
	~UnliveProduct();

	void setWeight(int weight_);
	int getWeight();

	void setMaterial(string material_);
	string getMaterial();
};

