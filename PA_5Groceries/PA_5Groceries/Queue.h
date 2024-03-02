#pragma once

#include <iostream>
#include "QueueNode.h"

class Queue
{
private:
	int currentID;
	int accumulatedTime;
	QueueNode* pHead;
	QueueNode* pTail;

public:
	//constructor
	Queue() {
		this->currentID = 0;
		this->accumulatedTime = 0;
		this->pHead = nullptr;
		this->pTail = nullptr;
	}
	//destructor

	/*setters*/
	bool setHead();
	bool setTail();

	/*getters*/
	QueueNode* getHead();
	QueueNode* getTail();

	/*members*/

	//returns true if queue is empty
	bool isEmpty();
	//returns true if allocated node and enqueued it. 
	//passes current id to QueueNode constructor
	bool enqueue();
	Data dequeue();

};