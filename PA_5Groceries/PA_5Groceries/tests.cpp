#include "tests.h"

//enqueue on empty queue
bool Test::tEnqueue() {
	//create empty queue
	Queue tQueue;
	//enqueue
	tQueue.enqueue();
}
//enqueue on queue with one node
bool tEnqueueM();
//dequeue on one node queue
bool tDequeue();
//dequeue on two node queue
bool tDequeueM();
//run simulation for 24 hours
bool tRunM();
//run util functions w/out simulation
void runtUtilSuite();
//run all test functions
void runTestSuite();