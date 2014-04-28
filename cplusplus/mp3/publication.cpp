/*
 * publication.cpp
 *
 *  Created on: Feb 15, 2013
 *      Author: brian
 */
#include "publication.h"
#include <iostream>

void publication::readData(){

	cout << "Please enter the title ";
	getline(cin,title);
    cout << "Please enter the price ";
    cin >> price;
	cin.ignore(10,'\n');
}
