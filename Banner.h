#pragma once
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

class Banner{
	string contents;
public:
	Banner(string _contents);
	~Banner();

	string getContents();
	virtual void showWithParen();
	virtual void showWithAster();
};
