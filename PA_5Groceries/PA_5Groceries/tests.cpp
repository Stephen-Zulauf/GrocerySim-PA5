#include "tests.h"

//enqueue on empty queue
bool Test::tEnqueue() {
	//create empty queue
	Queue tQueue(0);
	//enqueue
	if (tQueue.enqueue()) {
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
		if (tQueue.enqueue()) {
			return true;
		}
	}
	return false;
}

//dequeue on one node queue
bool Test::tDequeue() {
	//create empty queue
	Queue tQueue(0);
	//enqueue
	if (tQueue.enqueue()) {
		if (tQueue.isEmpty() == false) {
			tQueue.dequeue();
			if (tQueue.isEmpty() == true) {
				return true;
			}
		}
	}
	return false;
	
}
//dequeue on two node queue
bool Test::tDequeueM() {
	//create empty queue
	Queue tQueue(0);
	//enqueue
	if (tQueue.enqueue()) {
		if (tQueue.isEmpty() == false) {
			tQueue.enqueue();
			if (tQueue.isEmpty() == false) {
				tQueue.dequeue();
				if (tQueue.isEmpty() == false) {
					return true;
				}
			}
		}
	}
	return false;
}

////run simulation for 24 hours
//bool tRunM();
//run util functions w/out simulation
void Test::runtUtilSuite() {
	if (this->tEnqueue()) {
		cout << "Enqueue on Empty list: Success" << endl;
	}
	else {
		cout << "Enqueue on Empty list: Failed" << endl;
	}
	if (this->tEnqueueM()) {
		cout << "Enqueue on list with one member: Success" << endl;
	}
	else {
		cout << "Enqueue on list with one member: Failed" << endl;
	}
	if (this->tDequeue()) {
		cout << "Dequeue on list with one member: Success" << endl;
	}
	else {
		cout << "Dequeue on list with one member: Failed" << endl;
	}
	if (this->tDequeueM()) {
		cout << "Dequeue on list with two members: Success" << endl;
	}
	else {
		cout << "Dequeue on list with two members: Failed" << endl;
	}

}
////run all test functions
//void runTestSuite();