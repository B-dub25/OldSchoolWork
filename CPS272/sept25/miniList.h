/*
 * miniList.h
 *
 *  Created on: Oct 2, 2013
 *      Author: brian
 */

#ifndef MINILIST_H_
#define MINILIST_H_

#include "linkIterator.h"
#include <iostream>
using namespace std;

class miniList {

public:
	void push(int g = 0);
	void push_back(int g = 0);
	void reverse();
	node* getnode() {
		return headNode;
	}
	;
    void f();
	linkIterator begin() {
		linkIterator temp(headNode);
		return temp;
	}
	linkIterator end() {
		linkIterator temp(NULL);
		return temp;
	}
	void insert(int g = 0);
	void remove(int g);
	void print();
	void pop_back();
	void sort();
	void pop();
	int size();
	miniList() :
			headNode(NULL), total(0) {
	}
	;

private:
	void printList(node* current);
	node* headNode;
	int total;

};

void miniList::push(int g) {

	headNode = new node(g, headNode);
	this->total++;
}

void miniList::push_back(int g) {

	if (headNode == NULL)
		headNode = new node(g, headNode);
	else {

		node* current = headNode;
		while (current->nextLink != NULL) {
			current = current->nextLink;

		}

		current->nextLink = new node(g, current->nextLink);
		this->total++;

	}
}

void miniList::insert(int g) {

	if (headNode == NULL || headNode->data > g)
		push(g);
	else {

		node* previous = NULL;
		node* current = headNode;

		while (current != NULL && (current->data < g)) {
			previous = current;
			current = current->nextLink;
		}
		previous->nextLink = new node(g, current);
		this->total++;
	}

}

void miniList::print() {

	if (headNode == NULL)
		return;
	else {
		node* current = headNode;
		while (current != NULL) {

			cout << current->data << endl;
			current = current->nextLink;
		}
	}
}

void miniList::sort() {

	if (headNode == NULL)
		return;
	else {
		miniList* mylist = new miniList;
		node* current = headNode;

		while (current != NULL) {
			mylist->insert(current->data);
			current = current->nextLink;
		}
		headNode = mylist->headNode;
	}
}

void miniList::printList(node * current) {

	if (current != NULL) {
		printList(current->nextLink);
		cout << *current << " ";
	}

}
void miniList::pop_back() {

	if (headNode != NULL) {

		node* current = headNode;
		node* previous = headNode;
		while (current->nextLink != NULL) {
			previous = current;
			current = current->nextLink;

		}
		previous->nextLink = current->nextLink;
		current = NULL;
		total--;
	}

}
void miniList::remove(int g) {

	if (headNode == NULL)
		throw new exception();
	if (headNode->data == g)
		pop();
	else {

		node* previous = headNode;
		node* current = headNode->nextLink;

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
void miniList::reverse() {

	printList(headNode);

}
void miniList::pop() {

	if (headNode == NULL)
		throw new exception();
	headNode = headNode->nextLink;
}
int miniList::size() {
	return total;
}

void miniList::f(){

	node* prev, *curr, *p;

	curr = headNode->nextLink;
	prev = headNode;

	if(headNode != NULL || headNode->nextLink != NULL){
		{
			do {
				p = curr->nextLink;
				curr->nextLink = prev;

				if(p != NULL){
					prev = curr;
					curr = p;

				}


			} while ( p != NULL);

		}
		headNode->nextLink = NULL;
		headNode = curr;


	}

}
#endif /* MINILIST_H_ */
