#pragma once
#include "I_ShopAbstractFactory.h"
class LiveFactory :
	public I_ShopAbstractFactory
{
public:
	LiveFactory();


	virtual Product* createProduct();
	virtual BaseInput* createInput();
	virtual BaseOutput* createOutPut();

	virtual void delInput(BaseInput* input);
	virtual void delOutput(BaseOutput* output);

	~LiveFactory();
};

