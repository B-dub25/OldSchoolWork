/*
 * Date.h
 *
 *  Created on: Mar 23, 2013
 *      Author: brian
 */

#ifndef DATE_H_
#define DATE_H_
#include "InvalidHour.h"
#include <string>
#include <iostream>
using namespace std;

class DateForm {
public:
	DateForm() {
		dateForm = " ";
		month = " ";
		daysInMonth = 0;
		year = 0;
		hour = 0,min = 0, sec = 0;
		p = "";

	}
	DateForm(string Dates) {
		dateForm = Dates;
		month = "";
		daysInMonth = 0;
		year = 0;
		hour = 0,min = 0, sec = 0;

	}
	bool convertMonth() throw(exception);
	string getBad() { return (month);}
	bool convertHour();
	bool convertDay();
	bool convertYear();
	bool convertMinute();
	bool convertSecond();
	bool timePeriod();
	string getMonthToString(int);
    void display();
private:
	bool leapYear();
	string dateForm;
	string month,p;
	int imount;
	int daysInMonth;
	int year;
	int hour,min,sec;

};

#endif /* DATE_H_ */
