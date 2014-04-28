/*
 * book.cpp
 *
 *  Created on: Feb 15, 2013
 *      Author: brian
 */
#include "book.h"
#include <iostream>
#include <iomanip>
using namespace std;

void book::readData(){

	publication::readData();
	cout << "Enter the page count ";
	cin >> pageCount;
	cin.ignore(10,'\n');
	sales::readData();
	cin.ignore(10,'\n');
}

void book::displayData() const{

	cout << fixed << showpoint << setprecision(2);
	cout << "Title : " << getTite() << '\n'
		 << "Price $" << getPrice() << '\n'
		 << "Page Count: " << pageCount << endl;
	sales::displayData();
}
