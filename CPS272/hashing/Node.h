/*
 * Node.h
 *
 *  Created on: Sep 25, 2013
 *      Author: brian
 */

#ifndef NODE_H_
#define NODE_H_

#include <iostream>
#include <string>
#include <exception>
using namespace std;

template<typename T> class miniList;
template<typename T>
class node{


	friend class miniList<T>;
	friend ostream& operator<<(ostream& os, const node<T>& obj) {

		return os << obj.data;
	}
	node<T> operator=(T o){
		this->data = o;
		return this;

	}
public:
	node<T>(T info, node* link = NULL) :
			data(info), nextLink(link) {
	}
	;
private:
	T data;
	node<T>* nextLink;
};



#endif /* NODE_H_ */