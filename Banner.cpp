#include "Banner.h"

Banner::Banner(string _contents)
	:contents(_contents){
}

Banner::~Banner(){
}

string Banner::getContents(){
	return contents;
}

void Banner::showWithParen(){
	cout << " ( "<< contents << " ) " << endl;
}
void Banner::showWithAster(){	
	cout << " * " << getContents() << " * " << endl;
}
