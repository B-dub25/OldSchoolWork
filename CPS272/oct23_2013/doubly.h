/*
 * doubly.h
 *
 *  Created on: Oct 23, 2013
 *      Author: brian
 */

#ifndef DOUBLY_H_
#define DOUBLY_H_

#include <iostream>
#include <string>
using namespace std;

template<typename T>
class doubly{

public:

	doubly<T>(T data = NULL, doubly *before = NULL, doubly *next = NULL){
		this->item = data;
		previousLink = before;
		nextLink = next;
	}

	doubly<T>(const T& h){
		item = h;
		previousLink = this;
		nextLink = this;
	}

private:
	T item;
	doubly<T> *nextLink;
	doubly<T> *previousLink;
};


#endif /* DOUBLY_H_ */
