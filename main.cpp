#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "Banner.h"
#include "Print.h"

using namespace std;

int main(char *argv[], int argc) {
	Print p("test");

	p.printWeak();
	p.printStrong();

	return 0;
}