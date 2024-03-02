#pragma once

#include <iostream>
#include "Data.h"

class QueueNode {
private:
	Data* pData; // The memory for Data will need to be allocated on the heap as well!
	QueueNode* pNext;
public:
	/*constructor*/
	QueueNode() {
		this->pData = nullptr;
		this->pNext = nullptr;
	}
	/*destructor*/

	/*Setters*/
	//create new Data returns service time on success
	int setData(int curID, int accTime);

	//set pNext
	bool setNext(QueueNode* next);

	/*members*/
	//Get service time
	int getServiceTime();

};