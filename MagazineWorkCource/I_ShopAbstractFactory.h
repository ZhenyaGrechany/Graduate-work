#pragma once
#include "BaseOutput.h"
#include "BaseInput.h"
#include "LProducts.h"

class I_ShopAbstractFactory
{
public:

	virtual Product* createProduct() = 0;
	virtual BaseInput* createInput() = 0;
	virtual BaseOutput* createOutPut() = 0;

	virtual void delInput(BaseInput* input) = 0;
	virtual void delOutput(BaseOutput* output) = 0;

	virtual ~I_ShopAbstractFactory()
	{
	}
};

