#include "LiveOutput.h"
#include <iostream>
using namespace std;


LiveOutput::LiveOutput()
{
}


LiveOutput::~LiveOutput()
{
}

void LiveOutput::output(Product *&prod)
{
	LiveProduct *lp =  dynamic_cast<LiveProduct *>(prod);
	if (lp == nullptr)return;

	cout << endl;
	SetConsoleTextAttribute(SingleText::getInstance(), FOREGROUND_GREEN);
	cout << "---OUTPUT---" << endl;
	SetConsoleTextAttribute(SingleText::getInstance(), FOREGROUND_INTENSITY);
	cout<< " Name: " << lp->getName() << endl 
		<<" Price: "<< lp->getPrice() << endl
		<< " Old " << lp->getOld() << endl;

}
