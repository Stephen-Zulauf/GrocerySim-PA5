#include "tests.h"

//enqueue on empty queue
bool Test::tEnqueue() {
	//create empty queue
	Queue tQueue(0);
	//enqueue
	if (tQueue.enqueue()) {
		tQueue.printQueue();
		return true;
	}
	else {
		return false;
	}
}
////enqueue on queue with one node
bool Test::tEnqueueM() {
	//create empty queue
	Queue tQueue(0);
	//enqueue
	if (tQueue.enqueue()) {
		tQueue.enqueue();
		tQueue.enqueue();
		tQueue.printQueue();
		return true;
	}
	else {
		return false;
	}
}

//dequeue on one node queue
bool Test::tDequeue() {
	//create empty queue
	Queue tQueue(0);
	//enqueue
	if (tQueue.enqueue()) {
		tQueue.printQueue();
		if (tQueue.isEmpty() == false) {
			tQueue.dequeue();
			if (tQueue.isEmpty() == true) {
				cout << "queue is empty" << endl;
				return true;
			}
		}
	}
	else {
		return false;
	}
}
//dequeue on two node queue
bool Test::tDequeueM() {
	//create empty queue
	Queue tQueue(0);
	//enqueue
	if (tQueue.enqueue()) {
		tQueue.enqueue();
		tQueue.enqueue();
		cout << "init queue" << endl;
		tQueue.printQueue();

		if (tQueue.isEmpty() == false) {
			tQueue.dequeue();
			cout << "dequeue 1" << endl;
			tQueue.printQueue();
			return true;
		}
		
	}
	else {
		return false;
	}
}

////run simulation for 24 hours
//bool tRunM();
////run util functions w/out simulation
//void runtUtilSuite();
////run all test functions
//void runTestSuite();