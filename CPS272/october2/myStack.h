/*
 * myStack.h
 *
 *  Created on: Oct 2, 2013
 *      Author: brian
 */

#ifndef MYSTACK_H_
#define MYSTACK_H_

#include <vector>
#include <iostream>
#include <exception>
using namespace std;
template<typename T>
class myStack {

public:

	void push(const T& item) ;
	void pop() ;
	const T& top() const;
	int size() const;
	bool empty() const;
	myStack();
    const myStack<T>& operator=( myStack<T> rhs);
private:
	vector<T> stVector;
};

template<typename T>
myStack<T>::myStack() {}

template<typename T>
void myStack<T>::push(const T& item)  {

	stVector.push_back(item);

}

template<typename T>
void myStack<T>::pop() {

	if (empty())
		throw exception();
	stVector.pop_back();
}
template<typename T>
const T& myStack<T>::top() const {

	if (empty())
		throw exception();
	stVector.back();
}

template<typename T>
int myStack<T>::size() const{

	return stVector.size();
}

template<typename T>
bool myStack<T>::empty() const {

	return stVector.size() == 0;
}

template<typename T>
const myStack<T>& myStack<T>::operator=(myStack rhs){

	stVector.clear();
    myStack<int> temp;
    int sz = rhs.size();
    for (int i = 0; i < sz; ++i) {
		temp.push(rhs.top());
		rhs.pop();
	}
    for (int i = 0; i < sz; ++i) {
		push(temp.top());
		temp.pop();
	}

    return *this;
}


#endif /* MYSTACK_H_ */
