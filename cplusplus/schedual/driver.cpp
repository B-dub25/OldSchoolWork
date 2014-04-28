/*
 * driver.cpp
 *
 *  Created on: Mar 3, 2013
 *      Author: brian
 */


#include "Schedule.h"
using namespace std;
int main()
{
	Schedule s1(10);
	s1.addEntry(1,20,"Feed Cat");
	s1.addEntry(2,40,"Feed Dog");
	s1.addEntry(2,50,"Walk Dog");
	s1.addEntry(4,0, "Fix Dinner");
	s1.addEntry(5,15,"Eat Dinner");
	s1.printSchedule();
	Schedule s2(s1); // Note this uses the copy constructor
	cout << endl << "Output from s2 " << endl;
	s2.printSchedule();
}
