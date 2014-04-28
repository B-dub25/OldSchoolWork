/*
 * Time.h
 *
 *  Created on: Aug 28, 2013
 *      Author: brian
 *
 *      addTime throws exception if time = t < 0 or t > 23
 */

#ifndef TIME_H_
#define TIME_H_
#include <iostream>
#include <iomanip>
using namespace std;
class time24 {
	friend ostream& operator << (ostream& os , const time24& ti);
	friend istream& operator >> (istream& is , time24& ti);
	//friend bool operator == (const time& ti);
public:

	  time24(int h = 0, int  m = 0 , int s = 0);

	  time24(const time24& ti){
		  this->hours = ti.hours;
		  this->minutes = ti.minutes;
		  this->seconds = ti.seconds;
	  }


      int getHours() const { return hours; }
      int getMinutes() const { return minutes; }
      int getSeconds() const {return seconds; }
      void setHours(int h =0) { hours = h;}
      void setMinutes(int m =0 ){ minutes = m;}
      void setSeconds(int s = 0){ seconds = s ;}
      void addTime(int h = 0, int m = 0, int s = 0);
      bool isEqual(const time24& ) const;
      time24 operator-(const time24& ti);
	  time24& operator=(const time24& ti)
	  {

		  hours = ti.hours;
		  minutes = ti.minutes;
		  seconds = ti.seconds;
		  return *this;
	  }
private:
	int hours;
	int minutes;
	int seconds;
	void normalize();
};


#endif /* TIME_H_ */
