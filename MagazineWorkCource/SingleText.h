#pragma once
#include <stdio.h>
#include <conio.h>
#include <windows.h>

class SingleText
{
	SingleText(){}

	SingleText(const SingleText &R) = delete;
public:

	
	static HANDLE& getInstance()
	{
		static HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
		return console;
	}
};

