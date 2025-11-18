#include <cstdlib>

void TestFunction() {
	exit(0);
}
#include "TestFunction.h"

int main() {

	TestFunction();

	return 0;
}