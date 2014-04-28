/*
 * lenght.h
 *
 *  Created on: Oct 17, 2013
 *      Author: brian
 */

#ifndef LENGHT_H_
#define LENGHT_H_

#include <iostream>
using namespace std;

class length{
    inline
	friend ostream& operator<<(ostream& os, const length& obj)
	{ os << obj.feet << " " << obj.inches; return os;}
	friend bool operator==(const length& rhs, const length& lhs);
	friend bool operator<(const length& rhs, const length& lhs);
	friend length operator+(const length& rhs, const length& lhs);
	friend length operator-(const length& rhs, const length& lhs);

public:
	int getFeet() const;
	int getInch() const;
	double getLength() const;
    length& operator+= (const length& rhs);
    length(int f = 0, int i = 0): feet(f), inches(i) {}
private:
    int feet;
    int inches;
};

length& length::operator+=(const length& rhs){

	if(this->inches + rhs.inches >= 12)
		{
		this->feet += rhs.feet + 1;
		this->inches += rhs.inches -12;
		}
	else
		{
		this->feet += rhs.feet;
		this->inches += rhs.inches;
		}
	return *this;
}


#endif /* LENGHT_H_ */
