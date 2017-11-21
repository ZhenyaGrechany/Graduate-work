#pragma once
#include <vector>
#include "Product.h"
#include "LiveProduct.h"
#include <typeinfo>
#include <iostream>
#include "SingleText.h"
using namespace std;

class BaseInput
{
public:
	virtual ~BaseInput(){}

	virtual void input(vector<Product*>& vpProd) = 0;
};

