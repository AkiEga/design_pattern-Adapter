#include "Print.h"

Print::Print(string _contents){
	b = new Banner(_contents);
}

Print::~Print(){
	delete b;
}

void Print::printWeak(){
	b->showWithParen();
}

void Print::printStrong(){
	b->showWithAster();
}
