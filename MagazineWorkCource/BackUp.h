#pragma once
#include <vector>
#include <conio.h>
#include "Product.h"
using namespace std;

class BackUp
{
	BackUp() {}

	BackUp(const BackUp& obj) = delete;
public:

	static BackUp& getInstance()
	{
		static BackUp wrt;

		return wrt;
	}

	void save(vector<Product *> vp,const char* file_name)
	{
		FILE *file;
		fopen_s(&file, file_name, "w");

		for each (auto &obj in vp)
		{
			fwrite(*&obj, sizeof(Product), 1 , file);
		}

		fclose(file);
	}

	void load(vector<Product *> vp,const char* file_name)
	{
		FILE *file;
		fopen_s(&file, file_name, "r");

		

		fclose(file);
	}
};

