/*
 * main.cpp
 *
 *  Created on: Sep 3, 2013
 *      Author: Brian Rundel CPS 272
 */

#include "Complex.h"

int main(){
	Complex com1, com2;

	cin >> com1 ;
	cin >> com2;
	cout << com1 << '+' << com2 << " = " << com1+com2 << endl;
	cout << com1 << '*' << com2 << " = " << com1*com2 << endl;
	cout << com1 << '-' << com2 << " = " << com1-com2 << endl;
	cout << com1 << '/' << com2 << " = " << com1/com2 << endl;

	return 0;

}

