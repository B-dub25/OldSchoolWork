/*
 * node.h
 *
 *  Created on: Dec 7, 2013
 *      Author: brundel
 */

#ifndef NODE_H_
#define NODE_H_
#include <iostream>
#include <string>

using namespace std;

template<typename T>
class node{

	friend class hash;
	friend ostream& operator<<(ostream& os, const node<T>& obj) {

		return os << obj.data;
	}

public:
	node<T>* operator=(T obj){
	    	this->data = obj;
	    	return this;
	    }

	node<T>(T info, node* link = NULL) :
			data(info), nextLink(link) {
	}
	;
private:
	T data;
	node<T>* nextLink;
};

template<typename K, typename T>
class hash{

public:
	 hash<K,T>(K key, T item){

		int sz = 20;
	  list<T>[sz];

	 }
     node<T>* operator[](K key){
    	 return list[0].data;
     }


private:
	node<T>* list[];


};

#endif /* NODE_H_ */