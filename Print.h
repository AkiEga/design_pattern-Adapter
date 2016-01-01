#pragma once
#include "Banner.h"

class Print
{
	Banner *b;
public:
	Print(string _contents);
	~Print();

	void printWeak();
	void printStrong();
};

