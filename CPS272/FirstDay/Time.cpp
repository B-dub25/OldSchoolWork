/*
 * Time.cpp
 *
 *  Created on: Aug 28, 2013
 *      Author: brian
 */
#include "Time.h"

time24::time24(int h, int m ,int s){
	hours = h;
	minutes = m;
	seconds = s;
	normalize();
}

void time24::normalize(){
     int hrs;
     hrs = minutes / 60;
     minutes = (minutes % 60);
     hours = (hours + hrs) % 23;
}

bool time24::isEqual(const time24& ti)const {
	return(this->hours == ti.hours &&
			this->minutes == ti.minutes &&
			this->seconds == ti.seconds);
}

time24 time24::operator-(const time24& ti){
	int temp1 = this->hours * 60 + this->minutes;
	int temp2 = ti.hours * 60 + ti.minutes;
	return time24(0,temp1-temp2);
}

ostream& operator<<(ostream& os, const time24& ti){
	os << setfill('0') << setw(2) << ti.hours
	   <<':'<< setw(2) << ti.minutes << ':'
	   << setw(2) << ti.seconds;
	return os;
}

istream& operator>>(istream& is,time24& ti){

	is >> ti.hours;  is.get();
	is >> ti.minutes;
	return is;

}
