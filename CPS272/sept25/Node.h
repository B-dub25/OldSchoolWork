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
#include "linkIterator.h"
using namespace std;

class node {

	friend ostream& operator<<(ostream& os, const node& obj);
	friend class miniList;
	friend class linkIterator;
public:
	node(int info = 0, node* link = NULL) :
			data(info), nextLink(link) {
	}
	;
private:
	int data;
	node* nextLink;
};

ostream& operator<<(ostream& os, const node& obj) {

	return os << obj.data;
}

#endif /* NODE_H_ */