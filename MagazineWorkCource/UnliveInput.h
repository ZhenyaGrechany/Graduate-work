#pragma once
#include "BaseInput.h"
#include "LProducts.h"
class UnliveInput :
	public BaseInput
{
public:
	UnliveInput();

	void input(vector<Product*>& vpProd);

	~UnliveInput();
};

