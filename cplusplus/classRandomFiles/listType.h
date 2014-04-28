/*
 * listType.h
 *
 *  Created on: Apr 4, 2013
 *      Author: brian
 */

#ifndef LISTTYPE_H_
#define LISTTYPE_H_

#include <iostream>

using namespace std;
template<class T>
class listType {
public:

	listType(T d) : value(d), p(0) {}

	//void setGpa(T g, listType obj);
    T getValue() const { return (value);}

    void insert(const T& d);

private:
	T value;
	listType *p;
};

template<class T>
void listType<T>::insert(const T& d){
	;
}
#endif /* LISTTYPE_H_ */
