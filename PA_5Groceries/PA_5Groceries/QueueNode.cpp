#include "QueueNode.h"

/*Setters*/
//create new Data returns service time on success return -1 on fail
int QueueNode::setData(int curID, int accTime) {
	this->pData = new (std::nothrow) Data();
	if (pData) {
		//set customer ID

		//set service time

		//set total time
		return this->pData->getTime();
	}
	else {
		return -1;
	}

}

//set pNext
bool setNext(QueueNode* next);