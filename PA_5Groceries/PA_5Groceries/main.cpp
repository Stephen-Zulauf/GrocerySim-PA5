
#include <time.h>
#include "tests.h"

int main() {
	srand(time(NULL));
	Test newTest;
	newTest.runtUtilSuite();

	return 0;
}