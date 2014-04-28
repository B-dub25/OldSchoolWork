/*
 * Rectangle.h
 *
 *  Created on: Mar 4, 2013
 *      Author: brian
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include "Shape.h"
class Rectangle : public Shape{
public:
	  virtual void draw();
	  int calcArea() const { return (length * width);};
	  Rectangle();
private:
    int length;
	int width;
	int row;
	int columns;
	char character;
};


#endif /* RECTANGLE_H_ */
