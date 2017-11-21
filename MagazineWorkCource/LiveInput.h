#pragma once
#include "BaseInput.h"
#include <iostream>
using namespace std;

class LiveInput :
	public BaseInput
{
public:
	LiveInput();

	void input(vector<Product*>& vpProd);

	~LiveInput();
};

