/*
 * Triangle.cpp
 *
 *  Created on: Mar 4, 2013
 *      Author: brian
 */
#include  "Triangle.h"
Triange::Triange(){

   cout << "Enter the side length ";
   cin >> length;
   cout << "What character do you want to use ? " << endl;
   cin >> character;
}
void Triange::draw(){
		cout << "Drawing a Triangle of side " << length << endl;
		for (int rows = 0; rows <= length; rows++)
		        {
		            for (int spaces = length; spaces >= rows; spaces--)
		            {
		                cout << " ";
		            }
		            for (int stars = 0; stars <= (rows * 2); stars++)
		            {
		                cout << character;
		            }
		           cout << endl;
		        }
		cout << endl << "The area is " << calcArea() << endl;
}
