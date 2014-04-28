/*
 * base.h
 *
 *  Created on: Feb 26, 2013
 *      Author: brian
 */

#ifndef BASE_H_
#define BASE_H_

#include <iostream>
#include <string>
using namespace std;

class base {
      friend ostream& operator<<(ostream& , const base&);
      friend istream& operator>>(istream& , base&);
public:
    static int counter;
    static const int MAX = 10;

    virtual bool operator==(const base& obj) {return this == &obj;}
    virtual bool operator!=(const base& obj) {return this != &obj;}
    virtual bool operator> (const base& obj) {return this > &obj; }
    virtual string& operator[](int n) {return names[n];}
    virtual const string& operator[](int n) const {return names[n];}


	void Getnames(istream& );
	virtual string what() const = 0;
	string GetName() const;
	virtual ~base() { delete [] names; }
	void Swap(int,int);
	base();
	base(const base&);

private:
	string* names;

};

#endif /* BASE_H_ */