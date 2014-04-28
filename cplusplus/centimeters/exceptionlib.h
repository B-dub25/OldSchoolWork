/*
 * exceptionlib.h
 *
 *  Created on: Mar 28, 2013
 *      Author: brian
 */

#ifndef EXCEPTIONLIB_H_
#define EXCEPTIONLIB_H_

#include <iostream>
#include <string>

using namespace std;

class negativeNumber {
public:
	negativeNumber() :
			message("Negative number exception") {
	}
	negativeNumber(string mes) :
			message(mes) {
	}
	string what() {
		return (message);
	}
private:
	string message;
};

class nonNumberInput {
public:
	nonNumberInput() : message("Non-number exception") {}
	nonNumberInput(string mes) : message(mes) {}
	string what() {
		return (message);
	}
private:
	string message;
};

#endif /* EXCEPTIONLIB_H_ */
