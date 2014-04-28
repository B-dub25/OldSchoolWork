/*
 * tape.h
 *
 *  Created on: Feb 16, 2013
 *      Author: brian
 */

#ifndef TAPE_H_
#define TAPE_H_

#include "publication.h"
#include "sales.h"
class tape : public publication , public sales{
public:
	   tape(std::string t = "", double p = 0.0, double pT = 0.0)
       : publication(t,p),sales(), playTime(pT) { }
	   void displayData() const;
	   void setData(string n, double p, double pT);
	   void readData();
private:
	   double playTime;
};

#endif /* TAPE_H_ */
