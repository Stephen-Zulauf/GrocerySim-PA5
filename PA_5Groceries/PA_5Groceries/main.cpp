
#include <time.h>
#include "tests.h"

int main() {
	srand(time(NULL));
	Test newTest;
	//newTest.tEnqueue();
	//newTest.tEnqueueM();
	newTest.tDequeueM();

	return 0;
}