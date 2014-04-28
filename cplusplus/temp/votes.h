/*
 * votes.h
 *
 *  Created on: Feb 26, 2013
 *      Author: brian
 */

#ifndef VOTES_H_
#define VOTES_H_

#include <iostream>
#include <iomanip>
#include "base.h"

using namespace std;

class votes : public base{

	    friend ostream& operator<<(ostream& , const votes&);
	    friend istream& operator>>(istream& , votes&);

public:

	    virtual bool operator==(const votes& obj) {return this == &obj;}
	    virtual bool operator!=(const votes& obj) {return this != &obj;}
	    virtual bool operator> (const votes& obj) {return this > &obj; }
	    virtual string what() const ;
        ~votes() { delete [] the_votes;}

        votes();
	    votes(const votes&);
        virtual void Swap(votes&,int,int);
        void sort(votes&);
        void select();
private:
	 int ** the_votes;
	 int*   total;

};

#endif /* VOTES_H_ */