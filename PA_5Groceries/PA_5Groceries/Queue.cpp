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
		this->pHead = new (std::nothrow) QueueNode(this->queueType);
		if (pHead) {
			this->pTail = this->pHead;
			return true;
		}
	}
	else {
		//set current tail next to new node then set tail to new node
		this->pTail->setNext();
		this->pTail = this->pTail->getNext();

		if (pTail) {
			return true;
		}
		else {
			return false;
		}
		
	}
}

Data Queue::dequeue() {
	QueueNode* temp = this->pHead;
	Data tData = temp->getData();
	this->pHead = pHead->getNext();
	delete temp;

	return tData;
	
}

void Queue::printQueue() {
	QueueNode* temp = this->pHead;

	while (temp != nullptr) {
		temp->printData();
		temp = temp->getNext();
	}
}