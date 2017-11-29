#pragma once
#include "Product.h"
#include <iostream>
using namespace std;

class Budget_shop
{
	Budget_shop() {	}

	Budget_shop(const Budget_shop& obj) = delete;
public:
	Budget_shop& getBudget() {
		static Budget_shop bs;
		return bs;
	}

	void sold(Product& prd)
	{
		budget_m += prd.getPrice();
		budget_m -= prd.getPrice() - prd.getPrice() * 0.25;
	}

	void printBudget() {
		cout << "Shop budget is: " << budget_m << endl;
	}
private:
	double budget_m;
};

