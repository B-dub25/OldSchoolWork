/*
 * diamond.h
 *
 *  Created on: Mar 4, 2013
 *      Author: brian
 */

#ifndef DIAMOND_H_
#define DIAMOND_H_

#include "Shape.h"

class Diamond : public Shape{
public:
	  virtual void draw()  ;
	  int calcArea() const { return (length * width);}
	  Diamond();
private:
	  int length;
	  int width;
	  int row;
	  char character;
};



#endif /* DIAMOND_H_ */
