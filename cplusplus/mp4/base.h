/*
 * base.h
 *
 *  Created on: Mar 9, 2013
 *      Author: Brian Rundel CPS 271
 */

#ifndef BASE_H_
#define BASE_H_


#include <iostream>
#include <string>
using namespace std;

class base {
//      friend ostream& operator<<(ostream& , const base&);
//      friend istream& operator>>(istream& , base&);
public:
    static int rowCounter;
    static const int MAX = 10;

    virtual bool operator==(const base& obj) {return (this == &obj);}
    virtual bool operator!=(const base& obj) {return (this != &obj);}
    virtual bool operator> (const base& obj) {return (this > &obj); }
    virtual string& operator[](int n) {return (names[n]);}
    virtual const string& operator[](int n) const {return (names[n]);}
	virtual string what() const throw() = 0;
	string getName() const;

	virtual ~base() { delete [] names; }
    base();
	base(const base&);

private:
	string* names;

};


#endif /* BASE_H_ */
