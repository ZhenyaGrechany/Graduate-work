#include "LiveInput.h"



LiveInput::LiveInput()
{
}

void LiveInput::input(vector<Product*>& vpProd)
{
	if (vpProd.empty())
		return;

	LiveProduct *iter = dynamic_cast<LiveProduct *>(vpProd.back());

	string name;
	double price;
	int old;
	cout << endl;
	

	SetConsoleTextAttribute(SingleText::getInstance(), FOREGROUND_RED);
	cout << "---INPUT---" << endl;
	SetConsoleTextAttribute(SingleText::getInstance(), FOREGROUND_INTENSITY);
	cout << "Name(string): ";
	cin >> name;
	cout << "Price(double): ";
	cin >> price;
	cout << "Old(int): ";
	cin >> old;

	iter->setName(name);
	iter->setPrice(price);
	iter->setOld(old);
}


LiveInput::~LiveInput()
{
}
