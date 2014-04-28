/*
 * main.cpp
 *
 *  Created on: Feb 16, 2013
 *      Author: Brian Rundel
 */
#include <iostream>
#include "book.h"
#include "tape.h"

using namespace std;

int main() {

	publication* mydata[5];
    mydata[0] = new book();
    mydata[1] = new tape();
    mydata[0]->readData();
    cout << string(3,'\n');
    mydata[1]->readData();
    cout << endl;

    mydata[0]->displayData();
    cout << endl;
    mydata[1]->displayData();

}


