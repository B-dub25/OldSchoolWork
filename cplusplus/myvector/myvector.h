/*
 * myvector.h
 *
 *  Created on: Apr 18, 2013
 *      Author: brian
 */

#ifndef MYVECTOR_H_
#define MYVECTOR_H_
#include <iostream>
using namespace std;
template<typename Type>
class myvector {
public:
	const Type& operator[](int i)const { return prt[i];}
	Type& operator[](int i){ return prt[i];}
    void reserve(int n, bool copy);
    void pop_back() {size--;};
    int sizes() const { return this->size;}
    void push_back(const Type& );
    const Type& front() const {return prt[0];};
    const Type& back() const {return prt[size-1];};
	bool empty();
    myvector<Type>(int s = 0 ) : prt(NULL), size(0),camp(s)
	{
		if(s == 0)
			return;
		reserve( s , false);
		size = s;
		for(int i = 0; i < size; ++i)
			prt[i] = Type();
	}

private:
	Type *prt;
	int size;
	int camp;
};
template<typename Type>
bool myvector<Type>::empty(){
	return(size == 0);
}
template<typename Type>
void myvector<Type>::reserve(int s, bool copy){

	Type *nprt;
	nprt = new Type[s];

	if(copy)
	{
		for(int i = 0; i < size; ++i)
			nprt[i] = prt[i];
	}
	if(prt != NULL)
		delete [] prt;
	prt = nprt;
	camp = s;
}
template<typename Type>
void myvector<Type>::push_back(const Type& item){

	if(size == camp)
	{
		if(camp == 0)
			reserve(1, false);
		else
		reserve(camp*2, true);
	}
	prt[size] = item;
	size++;
}

#endif /* MYVECTOR_H_ */
