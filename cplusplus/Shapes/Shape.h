/*
 * Shape.h
 *
 *  Created on: Mar 4, 2013
 *      Author: brian
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>
using namespace std;

class Shape {
public:
	  virtual void draw() = 0;
	  virtual int calcArea() const = 0;
	  virtual ~Shape() { }
private:
};

#endif /* SHAPE_H_ */
