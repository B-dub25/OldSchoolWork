/*
 * tape.cpp
 *
 *  Created on: Feb 16, 2013
 *      Author: brian
 */
#include <iostream>
#include "tape.h"
#include <iomanip>

void tape::setData(string n, double p, double pT){
	publication::setData(n,p);
	this->playTime = pT;
}
void tape::displayData() const{

	cout << fixed << showpoint << setprecision(2);
	cout << "Title: "    << getTite()  << '\n'
		 << "Price : $"  << getPrice() << '\n'
		 << "Play Time:" << playTime   << endl;
	sales::displayData();
}
void tape::readData(){

	publication::readData();
	cout << "Please enter the play time ";
	cin >> playTime;
	cin.ignore(10,'\n');
	sales::readData();
	cin.ignore(10,'\n');
}
