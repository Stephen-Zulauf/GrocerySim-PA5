#pragma once

#include <iostream>
#include "QueueNode.h"

class Queue
{
private:
	int currentID;
	int accumulatedTime;
	int queueType;
	QueueNode* pHead;
	QueueNode* pTail;

public:
	//constructor
	Queue(int type) {
		this->currentID = 0;
		this->accumulatedTime = 0;
		this->queueType = type;
		this->pHead = nullptr;
		this->pTail = nullptr;
	}
	//destructor

	~Queue() {
		if (this->pHead) {
			delete this->pHead;
		}

	}

	/*members*/

	//returns true if queue is empty
	bool isEmpty();

	//returns true if allocated node and enqueued it. 
	//passes current id to QueueNode constructor
	bool enqueue();

	//currently need to check if queue is empty or else 
	Data dequeue();

	//print queue members
	void printQueue();

};