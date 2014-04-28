/*
 * intEntery.h
 *
 *  Created on: Oct 1, 2013
 *      Author: Brian Rundel CPS 272
 */

#ifndef INTENTERY_H_
#define INTENTERY_H_

#include <iostream>

using namespace std;


class intEntery{

	friend bool operator< (const intEntery& lhs, const intEntery& rhs){
		return lhs.value > rhs.value;
	}

	friend bool operator==(const intEntery& lhs, const intEntery rhs){
		return lhs.value == rhs.value;
	}

	friend ostream& operator<<(ostream& os, const intEntery& obj){
		os << obj.value <<  "," << obj.count << ' ';
		return os;
	}
public:
	intEntery(int v, int c = 1): value(v), count(c) {};
	int getValue() const {return value;}
	int getCount() const { return count; }
	void increamt() { ++count;}

private:
	int value;
	int count;
};



#endif /* INTENTERY_H_ */
