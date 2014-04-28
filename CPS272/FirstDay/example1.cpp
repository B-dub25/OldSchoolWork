/*
 * example1.cpp
 *
 *  Created on: Aug 28, 2013
 *      Author: brian
 */
#include "Time.h"
#include "store.h"
#include <string>
int main(){

	store<int> wallmart;
	store<string> mystore;
	store<time24> clocks;
	time24 timeEntered, timeExited, parkingTime ;
	wallmart.display(5);
	mystore.display("something");
	clocks.display(timeEntered);
	string pathname , filename , path, newfilename;
	cout << " Enter path name " << endl;
	cin >> pathname;
	int slash = pathname.find_last_of('\\');
	filename = pathname.substr(slash+1);
	path = pathname.substr(0,slash);

	int period = filename.find_last_of('.');
	if (period != -1)
	{
		newfilename = filename;
		newfilename.erase(period+1,3);
		newfilename += "exe";
	}
	cout << "enter the times the car entered and exited the garage\n";
	cin >> timeEntered;
	cin >> timeExited;
	parkingTime = timeEntered;
	cout << parkingTime << endl;
	return 0;
}






