/*
 * Distance.h
 *
 *  Created on: Mar 13, 2013
 *      Author: brian
 */

#ifndef DISTANCE_H_
#define DISTANCE_H_
#include  <iostream>
using namespace std;

class Distance
{
    int feet, inches;
public:
    Distance(int f=0, int i=0): feet(f), inches(i){}
    //static int getFeet() { return(feet); }
    void display (ostream & s, Distance & d) const;
};

void Distance::display (ostream & s, Distance & d) const
{
    s << d.feet << " - " << d.inches;
}


#endif /* DISTANCE_H_ */
