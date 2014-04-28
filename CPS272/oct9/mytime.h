/*
 * mytime.h
 *
 *  Created on: Oct 9, 2013
 *      Author: brian
 */

#ifndef MYTIME_H_
#define MYTIME_H_
#include <iostream>
#include <queue>
using namespace std;
class mytime{

	friend istream& operator>>(istream& is , mytime& mtime){
		is >> mtime.hour;
		return is;
	}
    friend ostream& operator<<(ostream& os, const mytime& times){
    	os << times.hour << ":00";
    	return os;
    }
public:

    mytime operator-(const mytime& obj) const {

		return mytime(this->hour - obj.hour);
	}

	bool operator < (const mytime& obj) const {
		return (obj.hour < this->hour);
	}
	mytime(int h = 0): hour(h) {}
	private:
	int hour;
};

#endif /* MYTIME_H_ */
