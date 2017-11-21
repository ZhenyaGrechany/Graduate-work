#pragma once
#include <vector>


using namespace std;

class I_ShopAbstractFactory;
class BaseInput;
class BaseOutput;
class Product;
class Holder
{
	I_ShopAbstractFactory *pFactory;

	BaseInput *pInput;
	BaseOutput *pOutput;
	vector<Product*> vpProducts;
public:
	Holder();
	~Holder();

	void crtProduct();
	void showLastProduct();
	void showByFactory(I_ShopAbstractFactory *pFactory_);

	void saveProductsToFile();
	void loadProductsFromFile();

	void setFactory(I_ShopAbstractFactory *pFactory_);
private:
	void setInput(I_ShopAbstractFactory *pFactory_);
	void setOutput(I_ShopAbstractFactory *pFactory_);
	void deleteInput();
	void deleteOutput();
};

