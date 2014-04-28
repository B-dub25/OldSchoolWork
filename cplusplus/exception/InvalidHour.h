/*
 * InvalidHour.h
 *
 *  Created on: Mar 23, 2013
 *      Author: brian
 */

#ifndef INVALIDHOUR_H_
#define INVALIDHOUR_H_
#include  <exception>
#include <cstring>
#include  <string>
using namespace std;

class InvalidHour {
public:
	string what() {
		return (error);
	}
	InvalidHour() {

		error = "Invalid Hour";
	}
	;
	InvalidHour(string message) {
		error = message;
	}

private:
	string error;
};

class InvalidDay {
public:
	string what() {
		return (error);
	}
	InvalidDay() {
		error = "Invalid Day";
	}
	InvalidDay(string message) {
		error = message;
	}


private:
	string error;
};

class InvalidMinute {
public:
	string what() {
		return (error);
	}
	InvalidMinute() {
		error = "Invalid Minute";
	}
	InvalidMinute(char* message) {
		error = message;
	}


private:
	string error;
};
class InvalidSecond {
public:
	string what() {
		return (error);
	}
	InvalidSecond() {
		error = "Invalid Second";
	}
	InvalidSecond(char* message) {
		error = message;
	}


private:
	string error;
};
class InvalidMonth: public exception {
public:
	virtual const char* what() {
		return (error);
	}
	InvalidMonth() {
		error = new char[20];
		strcpy(error, "Invalid Month");
	}
	InvalidMonth(char* message) {
		error = message;
	}
	virtual ~InvalidMonth() throw () {
		delete error;
	}
private:
	char* error;

};
class InvalidEntry {
public:
	virtual const char* what() {
		return (error);
	}
	InvalidEntry() {
		error = new char[20];
		strcpy(error, "Invalid Month");
	}
	InvalidEntry(char* message) {
		error = message;
	}
	virtual ~InvalidEntry() throw () {
		delete error;
	}

private:
	char* error;
};
class InvalidYear {
public:
	virtual const char* what() {
		return (error);
	}
	InvalidYear() {
		error = new char[20];
		strcpy(error, "Invalid Year");
	}
	InvalidYear(char* message) {
		error = message;
	}
	virtual ~InvalidYear()  {
		delete error;
	}

private:
	char* error;
};
class InvalidTimePeriod {
public:
	string what() {
		return (error);
	}
	InvalidTimePeriod() {
		error = "Invalid Time Period";

	}
	InvalidTimePeriod(string message) {
		error = message;
	}
private:
	string error;
};
#endif /* INVALIDHOUR_H_ */
