#pragma once


class Data {
private:
	int customerNumber; // Unique identifier; starts at 1; after 24 hours should be reset to 1
	int serviceTime; // Random time; varies between express and normal lanes; units in minutes //1-5 mins(e)3-8(n)
	int totalTime; // totalTime = serviceTime + sum of serviceTimes of customers in line before this customer; 
	              //units in minutes
				 //This memory needs to be allocated on the heap!
public:

	//contructor
	Data() {

	}

	Data(int cNum, int sTime, int tTime ) {
	}

	/*setters*/ 
	//assign customer number
	int setID(int currentID);

	//Generate random service time 1-5 units(minutes)
	int setTime();

	//sum prev sum to service time and return new sum
	int setTotal(int prevSum);

	/*getters*/

	int getID();

	int getTime();

	int getTotal();

};