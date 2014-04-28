/*
 * driver.cpp
 *
 *  Created on: Mar 4, 2013
 *      Author: brian
 */

#include "diamond.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <vector>

int main(int argc, char **argv) {
	int choice = 0;
	Shape*  myd;
	Shape*  myr;
	Shape*  myt;
    vector <Shape *> myShapes;
    cout << "Enter a choice  1- Diamond, 2- Equilateral Triangle, 3- Rectangle: 0 = quit" ;
    cin >> choice;

    do {

	 switch(choice){
	 case 1: myd = new Diamond(); myShapes.push_back(myd); break;
	 case 2: myt = new Triange ; myShapes.push_back(myt);   break;
	 case 3: myr = new Rectangle; myShapes.push_back(myr); break;
	   default:
		  break;
				    }
    cout << "Enter a choice  1- Diamond, 2- Equilateral Triangle, 3- Rectangle: " ;
	cin >> choice;
	cout << endl;
    //delete myd; delete myt; delete myr;
    } while (choice != 0);

    cout << endl;
	for(unsigned i = 0 ; i < myShapes.size(); i++){
		myShapes[i]->draw();
	}
}




