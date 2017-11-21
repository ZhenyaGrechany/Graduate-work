#pragma once
#include "BaseOutput.h"
class LiveOutput :
	public BaseOutput
{
public:
	LiveOutput();
	~LiveOutput();

	void output(Product *& prod);
};

