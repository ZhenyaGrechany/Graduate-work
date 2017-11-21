#pragma once
#include "I_ShopAbstractFactory.h"
class UnliveFactory :
	public I_ShopAbstractFactory
{
public:

	UnliveFactory();

	virtual Product* createProduct();
	virtual BaseInput* createInput();
	virtual BaseOutput* createOutPut();

	virtual void delInput(BaseInput* input);
	virtual void delOutput(BaseOutput* output);

	~UnliveFactory();
};

