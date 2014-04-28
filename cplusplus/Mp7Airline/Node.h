/*
 * Node.h
 *
 *  Created on: Apr 12, 2013
 *      Author: brian
 */

#ifndef NODE_H_
#define NODE_H_
#include <iostream>
using namespace std;
template<typename T>
class Node {
public:

     Node<T> *link;
     T data;
     T destanation;
     Node(T value,T place) :link(NULL) , data(value) , destanation(place){}
};



#endif /* NODE_H_ */
