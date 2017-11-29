#pragma once
#include <vector>
#include "LProducts.h"
#include <typeinfo>
#include <iostream>
#include "SingleText.h"
using namespace std;

class BaseOutput
{
public:
	virtual ~BaseOutput(){}

	virtual void output(Product *& prod) = 0;
};

