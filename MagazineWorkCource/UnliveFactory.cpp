#include "UnliveFactory.h"
#include "Product.h"
#include "UnliveProduct.h"
#include "UnliveInput.h"
#include "UnliveOutput.h"

UnliveFactory::UnliveFactory()
{
}

Product * UnliveFactory::createProduct()
{
	Product *live_p = new UnliveProduct;
	return live_p;
}

BaseInput * UnliveFactory::createInput()
{
	BaseInput *BI = new UnliveInput;
	return BI;
}

BaseOutput * UnliveFactory::createOutPut()
{
	BaseOutput *BO = new UnliveOutput;
	return BO;
}

void UnliveFactory::delInput(BaseInput * input)
{
	if (input != nullptr)
		delete input;
}

void UnliveFactory::delOutput(BaseOutput * output)
{
	if (output != nullptr)
		delete output;
}

UnliveFactory::~UnliveFactory()
{
}
