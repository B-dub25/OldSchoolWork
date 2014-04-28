/*
 * driver.cpp
 *
 *  Created on: Mar 30, 2013
 *      Author: Brian Rundel CPS 271
 */
#include "exceptionlib.h"
#include <cmath>
double centimeters() {
	int feet = 0, inch = 0, result = 0;
	try {
		cout << "Enter feet ";
		cin >> feet;
		if (!cin)
			throw nonNumberInput();
		else if (feet < 0)
			throw negativeNumber();
		cout << "Enter the inches please ";
		cin >> inch;
		result = (((feet * 12) + inch)*2.54);
		cout << "centimeters =" << result << endl;
		if (!cin)
			throw nonNumberInput();
		else if (inch < 0)
			throw negativeNumber();
	} catch (negativeNumber& e) {
		throw;
	} catch (nonNumberInput& e) {
		throw;
	}
	return (result);
}
void toFeetAndInchs() {
	int feet = 0, inch = 0 , cent = 0;
	try {
		cout << "Enter centimeters ";
		cin >> cent;
		if (!cin)
			throw nonNumberInput();
		else if (cent < 0)
			throw negativeNumber();

		if (!cin)
			throw nonNumberInput();
		else if (inch < 0)
			throw negativeNumber();
		cent /= 2.54 ;
		feet = cent / 12 + .5;
		inch = ceil(cent % 12 + .5);
		cout << "feet =" << feet << " inches =" << inch << endl;
	} catch (negativeNumber& e) {
		throw;
	} catch (nonNumberInput& e) {
		throw;
	}

}
int main(int argc, char **argv) {
	char y = ' ';
	cout << "Enter c for conversion from centimeters to feet and inches or"
			<< " f for feet and inches to centimeters ";
	cin >> y;
	do {
		try {
			if (y == 'c') {
				centimeters();
				break;
			} else if (y == 'f') {
				toFeetAndInchs();
				break;
			}

		} catch (negativeNumber& e) {
			cout << e.what() << endl;
		} catch (nonNumberInput& e) {
			cout << e.what() << endl;
			cin.clear();
			cin.ignore(10, '\n');
		}
		cout << "Enter f for conversion from centimeters to feet and inches or"
				<< "c for feet and inches to centimeters ";
		cin >> y;
	} while (true);

	return (0);
}
