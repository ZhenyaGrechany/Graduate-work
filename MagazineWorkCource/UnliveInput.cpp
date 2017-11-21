#include "UnliveInput.h"



UnliveInput::UnliveInput()
{
}

void UnliveInput::input(vector<Product*>& vpProd)
{
	if (vpProd.empty())
		return;

	UnliveProduct *iter = dynamic_cast<UnliveProduct *>(vpProd.back());

	string name;
	double price;
	string material;
	int weight;

	cout << endl;
	SetConsoleTextAttribute(SingleText::getInstance(), FOREGROUND_RED);
	cout << "---INPUT---" << endl;
	SetConsoleTextAttribute(SingleText::getInstance(), FOREGROUND_INTENSITY);
	cout << "Name(string): ";
	cin >> name;
	cout << "Price(double): ";
	cin >> price;
	cout << "Weight(int): ";
	cin >> weight;
	cout << "Material(string): ";
	cin >> material;

	iter->setName(name);
	iter->setPrice(price);
	iter->setWeight(weight);
}


UnliveInput::~UnliveInput()
{
}
