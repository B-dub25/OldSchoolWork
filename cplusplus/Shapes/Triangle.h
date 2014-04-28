/*
 * Triangle.h
 *
 *  Created on: Mar 4, 2013
 *      Author: brian
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include "Shape.h"

class Triange : public Shape{
public:
	  Triange();
	  virtual void draw();
	  int calcArea() const { return length * length; }

private:
	  int length;
      char character;
};

#endif /* TRIANGLE_H_ */
