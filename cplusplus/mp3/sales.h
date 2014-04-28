/*
 * sales.h
 *
 *  Created on: Feb 16, 2013
 *      Author: brian
 */

#ifndef SALES_H_
#define SALES_H_

class sales {
public:
	   sales() { month = new double[3];}
	   ~sales() { delete [] month;}
	   void readData();
	   void displayData() const;

private:
	double* month;

};


#endif /* SALES_H_ */
