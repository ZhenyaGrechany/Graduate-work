#include "UnliveOutput.h"



UnliveOutput::UnliveOutput()
{
}

void UnliveOutput::output(Product *& prod)
{
	UnliveProduct *lp = dynamic_cast<UnliveProduct *>(prod);
	if (lp == nullptr)return;

	cout << endl;
	SetConsoleTextAttribute(SingleText::getInstance(), FOREGROUND_BLUE);
	cout << "---OUTPUT---" << endl;
	SetConsoleTextAttribute(SingleText::getInstance(), FOREGROUND_INTENSITY);
	cout << " Name: " << lp->getName() << endl
		<< " Price: " << lp->getPrice() << endl
		<< " Weight: " << lp->getWeight() << endl
		<< " Material: " << lp->getMaterial() << endl;
}


UnliveOutput::~UnliveOutput()
{
}
