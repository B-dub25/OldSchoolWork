/*
 * listlib.h
 *
 *  Created on: Apr 11, 2013
 *      Author: brian
 */

#ifndef LISTLIB_H_
#define LISTLIB_H_
#include <iostream>
using namespace std;

template<class T>
class Node {
public:
	T data;
	Node<T> *link;
	Node(T value) : data(value), link(NULL){ }
};
template<typename T>
class myList {
public:
	myList() :
			head(NULL),len(0) {
	}
	void remove();
	void insertFront(T item);
	void insertBack(T item);
	void display();
private:
	Node<T> *head;
	int len;
};
template<class T>
void myList<T>::remove(){

	if(head->link != NULL)
	{
	    Node<T> *p = head;
		head = head->link;
		p->link = NULL;
	}
}
template<class T>
void myList<T>::insertFront(T item) {

	if (head == NULL)
		head = new Node<T>(item);
	else {
		Node<T> *n = new Node<T>(item);
		n->link = head;
		head = n;
	}
}
template<typename T>
void myList<T>::insertBack(T item) {
	if (head == NULL)
		head = new Node<T>(item);
	else {
		Node<T> *n;
		while (n->link != NULL)
				n = n->link;
		n->link =  new Node<T>(item);
	}
}
template<class T>
void myList<T>::display() {

	Node<T> *p = head;
	while (p != NULL) {
		cout << p->data << ' ';
		p = p->link;
	}
}

#endif /* LISTLIB_H_ */
