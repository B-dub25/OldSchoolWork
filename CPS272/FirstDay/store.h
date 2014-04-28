/*
 * store.h
 *
 *  Created on: Aug 28, 2013
 *      Author: brian
 */

#ifndef STORE_H_
#define STORE_H_

#include <iostream>
using namespace std;

template<typename T>
class store {
public:
	void display(T something);
};

template<typename T>
void store<T>::display(T something){

	cout << something;
	cout << endl;
}

#endif /* STORE_H_ */
