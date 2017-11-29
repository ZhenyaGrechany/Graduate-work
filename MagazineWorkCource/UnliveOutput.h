#pragma once
#include "BaseOutput.h"
#include "LProducts.h"
class UnliveOutput :
	public BaseOutput
{
public:
	UnliveOutput();

	virtual void output(Product *& prod);

	~UnliveOutput();
};

