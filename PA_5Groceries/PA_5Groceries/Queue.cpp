#include "Queue.h"

/*members*/
bool Queue::isEmpty() {
	if (this->pHead == nullptr) {
		return true;
	}
	else {
		return false;
	}
}

bool Queue::enqueue() {
	//If empty set head and tail to new node
	if (this->isEmpty() == true) {
		this->pHead = new (std::nothrow) QueueNode;
		if (pHead) {
			return true;
		}
	}
	else {
		//set current tail next to new node then set tail to new node
		QueueNode* temp = new (std::nothrow) QueueNode;
		if (temp) {
			this->pTail->setNext(temp);
			this->pTail = temp;
			return true;
		}
		else {
			return false;
		}
		
	}
}