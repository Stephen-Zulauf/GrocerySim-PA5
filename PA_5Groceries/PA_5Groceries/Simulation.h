#pragma once

#include <iostream>

using std::cout;
using std::endl;

class Simulation {
private:
	int expQs = 0;
	int regQs = 0;
	int time = 0;
	
public:
	/*constructors*/

	/*destructor*/

	/*members*/
	void menuMain();
	void menuOptions();
	void run();
};