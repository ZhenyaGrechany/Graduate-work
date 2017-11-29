#pragma once
#include "Holder.h"
#include "LiveFactory.h"
#include "UnliveFactory.h"

class Store
{
	Holder holder;
public:
	Store();
	~Store();

	void run()
	{
		I_ShopAbstractFactory *pFactory = new LiveFactory;
		I_ShopAbstractFactory *puFactory = new UnliveFactory;
		holder.setFactory(pFactory);


		holder.crtProduct();
		holder.crtProduct();

		holder.setFactory(puFactory);

		holder.crtProduct();
		holder.crtProduct();

		holder.saveProductsToFile();
		holder.showByFactory(pFactory);
	}

	
};

