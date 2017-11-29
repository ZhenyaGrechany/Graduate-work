#include "LiveFactory.h"
#include "LProducts.h"
#include "LiveInput.h"
#include "LiveOutput.h"

LiveFactory::LiveFactory()
{
}

Product * LiveFactory::createProduct()
{
    Product *live_p = new LiveProduct;
	return live_p;
}

BaseInput * LiveFactory::createInput()
{
	BaseInput *BI = new LiveInput;
	return BI;
}

BaseOutput * LiveFactory::createOutPut()
{
	BaseOutput *BO = new LiveOutput;
	return BO;
}

void LiveFactory::delInput(BaseInput * input)
{
	if (input != nullptr)
		delete input;
}

void LiveFactory::delOutput(BaseOutput * output)
{
	if (output != nullptr)
		delete output;
}


LiveFactory::~LiveFactory()
{
}
