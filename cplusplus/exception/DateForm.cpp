/*
 * DateForm.cpp
 *
 *  Created on: Mar 23, 2013
 *      Author: brian
 */
#include "DateForm.h"
#include <sstream>
bool DateForm::convertMonth() throw (exception) {
	stringstream ss;
	int temp;
	int pos = this->dateForm.find('-');
	if (pos > 0) {
		ss << this->dateForm.substr(0, pos);
		ss >> imount;
		convertYear();
	} else
		throw bad_alloc();
	if (imount > 12) {
		month = ss.str();
		return (false);
	}
	this->month = getMonthToString(imount);
	return (true);

}
bool DateForm::convertDay() {
	stringstream ss;
	int temp = 0;
	int pos = this->dateForm.find('-');
	if (pos > 0) {
		ss << this->dateForm.substr(pos+1,2);
		ss >> temp;
	this->month += " " + ss.str();

	} else
		throw bad_alloc();
	if (temp > daysInMonth) {
		month = ss.str();
	    return (false);
	}
	return (true);
}
bool DateForm::leapYear() {
	if (year % 100 == 0) {
		if (year % 400 == 0)
			return (true);
	} else if (year % 4 == 0)
		return (true);
	return (false);
}
string DateForm::getMonthToString(int mon) {
	switch (mon) {
	case 1:
		daysInMonth = 31;
		return ("January");
	case 2:
		if (leapYear())
			daysInMonth = 29;
		else
			daysInMonth = 28;
		return ("February");
	case 3:
		daysInMonth = 31;
		return ("March");
	case 4:
		daysInMonth = 30;
		return ("April");
	case 5:
		daysInMonth = 31;
		return ("May");
	case 6:
		daysInMonth = 30;
		return ("June");
	case 7:
		daysInMonth = 31;
		return ("July");
	case 8:
		daysInMonth = 31;
		return ("August");
	case 9:
		daysInMonth = 30;
		return ("September");
	case 10:
		daysInMonth = 31;
		return ("October");
	case 11:
		daysInMonth = 30;
		return ("November");
	case 12:
		daysInMonth = 31;
		return ("December");
	}
}
bool DateForm::convertYear() {
	stringstream ss;
	int pos = this->dateForm.find(' ');
	if (pos > 0) {
		ss << this->dateForm.substr(pos - 4, 4);
		ss >> year;
	} else
		throw bad_alloc();
	if (year <= 1900) {
		month = "Unable to read year yyyy format ";
		return(false);
	}
	this->month += " " + ss.str();
	return (true);
}
bool DateForm::convertHour() {
	stringstream ss;

	int pos = this->dateForm.find(':');
	if (pos > 0) {
		ss << this->dateForm.substr(pos - 2, 2);
//		this->dateForm = this->dateForm.substr(pos + 1);
		ss >> hour;
	} else
		throw bad_alloc();
	if (hour > 12) {
		month = ss.str();
		return (false);
	}
	return (true);
}
bool DateForm::convertMinute() {
	stringstream ss;
	int temp = 0;
	int pos = this->dateForm.find(':');
	if (pos > 0) {
		ss << this->dateForm.substr(pos+1, 2);
		ss >> min;

	} else
		throw bad_alloc();
	if (min > 59) {
		month = ss.str();
		return(false);
	}

	return (true);
}
bool DateForm::convertSecond() {
	stringstream ss; int temp = 0;
	int pos = this->dateForm.find(':');
	if (pos > 0) {
		ss << this->dateForm.substr(pos+4,2);
		ss >> sec;
	} else
		throw bad_alloc();
	if ( sec > 59) {
		month = ss.str();
		return (false);
	}
	return (true);
}
bool DateForm::timePeriod(){
		int pos = this->dateForm.find(':');
		cout << "In";
		if (pos > 0) {
			p = dateForm.substr(pos+6);

		}
		if ( hour > 12 ) {
			month = p;
			return (false);
		}
		if((hour + 12 >= 24) &&  p == "pm")
		{	hour += 11;
		   cout << p;
		}
		else if(p == "pm")
			hour += 12;
		else if(p == "am" && hour == 12)
			   hour = 00;
		return (true);

	return (true);
}
void DateForm::display(){
	if(convertMonth() && convertDay() && convertHour() && convertMinute() && convertSecond()
			&& convertYear())
    cout <<"You where born on " << month << " " << hour << ':' << min <<':' << sec << " " <<p;
}
