#include "Holder.h"
#include "LiveFactory.h"
#include "BackUp.h"

Holder::Holder()
{
}


Holder::~Holder()
{
	for each (auto iter in vpProducts)
	{
		delete iter;
	}
}

void Holder::crtProduct()
{
	setInput(pFactory);
	Product *prd = pFactory->createProduct();
	vpProducts.push_back(prd);
	pInput->input(vpProducts);
	deleteInput();
}

void Holder::showLastProduct()
{
	setOutput(pFactory);
	pOutput->output(vpProducts.back());
	deleteOutput();
}

void Holder::showByFactory(I_ShopAbstractFactory *pFactory_)
{
	setOutput(pFactory_);

	auto iter = vpProducts.begin();
	while (iter!=vpProducts.end())
	{
		pOutput->output(*iter);

		iter++;
	}

	deleteOutput();
}

void Holder::saveProductsToFile()
{
	BackUp::getInstance().save(vpProducts,"D:\\file");
}

void Holder::loadProductsFromFile()
{
	BackUp::getInstance().load(vpProducts, "D:\\file");
}

void Holder::setFactory(I_ShopAbstractFactory *pFactory_)
{
	pFactory = pFactory_;
}

void Holder::setInput(I_ShopAbstractFactory *pFactory_)
{
	pInput = pFactory_->createInput();
}

void Holder::setOutput(I_ShopAbstractFactory *pFactory_)
{
	pOutput = pFactory_->createOutPut();
}

void Holder::deleteInput()
{
	pFactory->delInput(pInput);
}

void Holder::deleteOutput()
{
	pFactory->delOutput(pOutput);
}
