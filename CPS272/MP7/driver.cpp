/*
 * driver.cpp
 *
 *  Created on: Nov 30, 2013
 *      Author: brundel
 */



#include <iostream>
#include "up.h"


using namespace std;

int main(){

	up<int> obj(3);

	cout << obj(5) << endl;
	cout << up<double>() (2.718);

}

