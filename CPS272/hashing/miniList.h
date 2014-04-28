/*
 * miniList.h
 *
 *  Created on: Oct 2, 2013
 *      Author: brian
 */

#ifndef MINILIST_H_
#define MINILIST_H_

#include <string>
#include <iostream>
#include "Node.h"
#include "hashing.h"

using namespace std;

template<typename T>
class miniList {

public:

	void push(T g = 0);
	void push_back(T g = 0);
	void reverse();
	node<T>* getnode() {
		return headNode;
	}
	;

	void insert(T g = 0);
	void remove(T g);
	void print();
	void pop_back();
	void sort();
	void pop();
	int size();
	miniList<T>() :
			headNode(NULL), total(0) {
	}
	;

protected:
	void printList(node<T>* current);
	node<T>* headNode;
	int total;

};

template<typename T>
void miniList<T>::push(T g) {

	headNode = new node<T>(g, headNode);
	this->total++;
}
template<typename T>
void miniList<T>::push_back(T g) {

	if (headNode == NULL)
		headNode = new node<T>(g, headNode);
	else {

		node<T>* current = headNode;
		while (current->nextLink != NULL) {
			current = current->nextLink;

		}

		current->nextLink = new node<T>(g, current->nextLink);
		this->total++;

	}
}
template<typename T>
void miniList<T>::insert(T g) {

	if (headNode == NULL || headNode->data > g)
		push(g);
	else {

		node<T>* previous = NULL;
		node<T>* current = headNode;

		while (current != NULL && (current->data < g)) {
			previous = current;
			current = current->nextLink;
		}
		previous->nextLink = new node<T>(g, current);
		this->total++;
	}

}
template<typename T>
void miniList<T>::print() {

	if (headNode == NULL)
		return;
	else {
		node<T>* current = headNode;
		while (current != NULL) {

			cout << current->data << '\n';
			current = current->nextLink;
		}
	}
}
template<typename T>
void miniList<T>::sort() {

	if (headNode == NULL)
		return;
	else {
		miniList<T>* mylist = new miniList;
		node<T>* current = headNode;

		while (current != NULL) {
			mylist->insert(current->data);
			current = current->nextLink;
		}
		headNode = mylist->headNode;
	}
}
template<typename T>
void miniList<T>::printList(node<T> * current) {

	if (current != NULL) {
		printList(current->nextLink);
		cout << *current << " ";
	}

}
template<typename T>
void miniList<T>::pop_back() {

	if (headNode != NULL) {

		node<T>* current = headNode;
		node<T>* previous = headNode;
		while (current->nextLink != NULL) {
			previous = current;
			current = current->nextLink;

		}
		previous->nextLink = current->nextLink;
		current = NULL;
		total--;
	}

}
template<typename T>
void miniList<T>::remove(T g) {

	if (headNode == NULL)
		throw new exception();
	if (headNode->data == g)
		pop();
	else {

		node<T>* previous = headNode;
		node<T>* current = headNode->nextLink;

		while (current != NULL && (current->data != g)) {
			previous = current;
			current = current->nextLink;
		}

		if (current != NULL) {
			previous->nextLink = current->nextLink;
			current = current->nextLink;
			total--;
		}
	}

}
template<typename T>
void miniList<T>::reverse() {

	printList(headNode);

}
template<typename T>
void miniList<T>::pop() {

	if (headNode == NULL)
		throw new exception();
	headNode = headNode->nextLink;
}
template<typename T>
int miniList<T>::size() {
	return total;
}

#endif /* MINILIST_H_ */