/*
 * driver.cpp
 *
 *  Created on: Apr 25, 2013
 *      Author: brian
 */

#include <iostream>
using namespace std;

void decToBin(int num, int base) {
	if (num > 0) {
		decToBin(num / base, base);
		cout << num % base;
	}
}
int main(int argc, char **argv) {

	int decimal = 0, base = 0;
	cout << "Please enter an number to convert ";
	cin >> decimal;
	cout << "Please enter a base number between 2 and 16 ";
	cin >> base;
	if (base > 16 || base < 2)
		cout << "Base has to be between 2 and 16";
	else {
		cout << "Your number " << decimal << " converted at base " << base
			 << "= ";
		if (base == 8) {

			cout << oct;
			decToBin(decimal, base);
		} else if (base == 16) {

			cout << hex;
			decToBin(decimal, base);
		} else{
			  decToBin(decimal,base) ;
		}
		cout << endl;
	}
	return 0;
}


