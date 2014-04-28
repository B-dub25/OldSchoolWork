/*
 * except.cpp
 *
 *  Created on: Mar 21, 2013
 *      Author: brian
 */
#include <iostream>
#include "DateForm.h"
using namespace std;

int main(int argc, char **argv) {
	string dates;
	getline(cin,dates);
	DateForm d(dates);

	try {

		if(!d.convertMonth())
			throw InvalidMonth();

	} catch (InvalidMonth& e) {
		cout << e.what() << " " << d.getBad() << endl;
	}catch (bad_alloc& e) {
		cout << "Invalid input of month mm-dd" << endl;
	}
	try {
		if(!d.convertDay())
			throw InvalidDay();
	} catch (InvalidDay& e) {
		cout << e.what() << " " << d.getBad() << endl;
	} catch (bad_alloc& e) {
		cout << "Invalid input of day mm-dd";
	}
	try {
        if(!d.convertYear())
        	throw InvalidYear();
	} catch (InvalidYear& e) {
              cout << e.what() << " " <<d.getBad() << endl;
	}
	try {
		if(!d.convertHour())
			throw InvalidHour();

	} catch (InvalidHour& e) {
		cout << e.what() << " " <<d.getBad() <<  endl;
	}
	try {
		if(!d.convertMinute())
					throw InvalidMinute();
	} catch (InvalidMinute& e) {
		cout << e.what() << d.getBad()<<endl;
	}
	try {
		if(!d.convertSecond())
			throw InvalidSecond();
	} catch (InvalidSecond& e) {
		cout << e.what() << d.getBad() <<endl;
	}
   try {
 	if(!d.timePeriod())
			throw InvalidHour("Invalid Time Period");

	} catch (InvalidHour& e) {
		cout << e.what() <<   " " << d.getBad() <<endl;
	} catch (bad_alloc& e) {
		cout << "Invalid " << endl;
	}
	d.display();
}

