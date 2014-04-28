/*
 * driver.cpp
 *
 *  Created on: Apr 26, 2013
 *      Author: Brian Rundel CPS 271 Final program.
 */
#include "phoneNumber.h"



int main(int argc, char **argv) {

	phoneNumber myNumber;

	char ch = 'y',ch1;
	while(ch == 'y'){ // loop just to run through all the numbers you asked for.
	do {
	   try{
		cout << "Enter your phone number ";
		   cin >> myNumber;
		cout << myNumber;
		break;
	   }catch (invalidFormat& e) {
		  cout << e.what() << endl;
		  cin.clear();
		  cout << "Press enter to try again " << endl;
		  cin.ignore(10,'\n');

	}

	} while (true);
	cin >> ch;
	cin.get(ch1);
	}
}




