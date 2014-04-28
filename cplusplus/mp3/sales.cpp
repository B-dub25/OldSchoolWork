/*
 * sales.cpp
 *
 *  Created on: Feb 16, 2013
 *      Author: brian
 */
#include "sales.h"
#include <iostream>
#include <iomanip>
using namespace std;

void sales::readData(){

	 for (int i = 0; i < 3; ++i) {
		cout << "Please enter sales for month " << i +1;
		cin >> month[i];
		cout << endl;
	}
}
void sales::displayData() const{
	cout << "Sales " << endl;
		for (int i = 0; i < 3; ++i) {
			cout << left << "Month "<< i+1
			     << right<< " $" << month[i] << setw(5) << " ";
		}
		cout << endl;
}


