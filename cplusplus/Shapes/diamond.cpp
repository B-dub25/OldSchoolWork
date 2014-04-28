/*
 * diamond.cpp
 *
 *  Created on: Mar 4, 2013
 *      Author: brian
 */
#include "diamond.h"
Diamond::Diamond(){

		cout << "Enter the length and width\n";
		cin >> length;
		cin >> width;
		cout << "What character do you want to use ? " << endl;
		cin >> character;
}

void Diamond::draw(){
	cout << "Drawing a  Diamond of side " << width << endl;
	for (int rows = 0; rows <= width; rows++)
	        {
	            for (int spaces = width; spaces >= rows; spaces--)
	            {
	                cout << " ";
	            }
	            for (int stars = 0; stars <= (rows * 2); stars++)
	            {
	                cout << character;
	            }
	           cout << endl;
	        }
	     for (int row = width; row >= 0; row--)
	         {
	             for (int space = width; space >= row; space--)
	                  {
	                      cout << " ";
	                  }
	             for (int star = 0; star <= (row * 2); star++)
	                 {
	                     cout << character;
	                 }
	             cout << endl;
	         }
	     cout << endl << "The area is " << calcArea() << endl;
}
