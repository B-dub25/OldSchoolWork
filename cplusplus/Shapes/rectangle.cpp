/*
 * rectangle.cpp
 *
 *  Created on: Mar 4, 2013
 *      Author: brian
 */
#include "Rectangle.h"

Rectangle::Rectangle(){
	    cout << "Enter the length and width\n";
	    cin >> length;
	    cin >> width;
	    cout << "What character do you want to use ? " << endl;
	    cin >> character;
	    this->row=width;
	    this->columns=length;
}
void Rectangle::draw(){
    cout << "Drawing a " << width << " by " << length << " Rectangle " << endl;
    for (int i = 0; i < row; ++i) {
		for (int j = 0; j < columns; ++j) {
			cout << character;
		}
		cout << endl;
	}
    cout << endl << "The area is " << calcArea() << endl;
}
