/*
 * miniVector.h
 *
 *  Created on: Sep 4, 2013
 *      Author: brian
 */

#ifndef MINIVECTOR_H_
#define MINIVECTOR_H_

#include <iostream>
#include <string>
#include <exception>
using namespace std;

template<typename T>
class miniVector {

	friend ostream& operator<<(ostream& os, const miniVector& v) {
		cout << v.prt[1];
		return os;
	}

public:
	miniVector(size_t = 0);
	void push_back(const T& );
	T& back();
	void pop_back();
	size_t size() const;
	T& operator[](int);
	void insert(int pos, const T& item);
	void erase(int pos);
private:
	T *prt;
	size_t vSize;
	size_t compass;

};
template<typename T>
void miniVector<T>::insert(int pos, const T& item) {

	if (pos-1 > vSize + 1)
		throw exception();

	T *nprt = new T[2 * vSize];
	pos--;
	for (int i = 0; i < vSize; ++i) {
		if(i == pos)
			nprt[i+1] = prt[i];
		else
			nprt[i] = prt[i];
	 compass *= 2;
	}

	nprt[pos] = item;
	if (prt != NULL) {
		delete[] prt;
		prt = nprt;
	}
	prt = nprt;

}
template<typename T>
T& miniVector<T>::back() {
	if (vSize == 0)
		throw exception("empty");
	return prt[vSize - 1];
}
template<typename T>
miniVector<T>::miniVector(size_t sz) { //: size(0), compass(0), prt(NULL) {}

	vSize = 0;
	compass = 0;
	if (sz == 0)
		return;
	prt = new T[vSize];
	vSize = sz;

	for (int i = 0; i < vSize; ++i) {
		prt[i] = T();
	}
}

template<typename T>
void miniVector<T>::pop_back() {
	if (vSize == 0)
		throw exception("vector is empty");
	vSize--;
}

template<typename T>
size_t miniVector<T>::size() const {
	return vSize;
}

template<typename T>
T& miniVector<T>::operator[](int i) {
	return prt[i];
}
template<typename T>
void miniVector<T>::push_back(const T& object) {

	if (vSize == compass) {
		if (compass == 0) {
			compass = 1;
			prt = new T[1];
		} else {
			T *nprt = new T[2 * vSize];
			for (int i = 0; i < vSize; ++i) {
				nprt[i] = prt[i];
				compass *= 2;
			}
			if (prt != NULL)
				delete[] prt;
			prt = nprt;
		}
	}
	prt[vSize++] = object;
}

#endif /* MINIVECTOR_H_ */
