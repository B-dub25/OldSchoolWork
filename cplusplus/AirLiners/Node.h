/*
 * Node.h
 *
 *  Created on: Apr 14, 2013
 *      Author: Brian Rundel CPS 271 MP7
 */


#ifndef NODE_H_
#define NODE_H_
#include <iostream>
#include <iomanip>
#include <string>
//#include <algorithm>
using namespace std;

template<typename Type>
class Node {
public:
	Node<Type>* operator =(const Node<Type> *p) {
		return this->next;
	}
	Node<Type>* next;
	Type info;
	Type data;
	Node<Type>(Type first, Type second) :
			next(NULL), info(first), data(second) {
	}
};
template<typename Type>
class listIterator {
public:
	listIterator() :
			current(NULL) {
	}
	listIterator(Node<Type> *prt) {
		current = prt;
	}
	Type operator*() {
		return current->info;
	}
	listIterator<Type> operator++() {
		current = current->next;
		return *this;
	}
	bool operator !=(const listIterator<Type> *prt) {
		return (current != prt->current);
	}
	bool operator ==(const listIterator<Type> *prt) {
		return (current == prt->current);
	}
	listIterator* operator=(const Node<Type> *prt) {
		current = prt;
		return *this;
	}
private:
	Node<Type> *current;
};
template<typename Type>
class airliner {
public:
	void push_back();
	void push_back(Type n, Type s);
	void push();
	void push(Node<Type>* T);
	//void find(Type T);
	void find();
	void pop_one();
	//void pop_one(Type T);
	void display();
	void menu();
	airliner<Type>() :
			first(NULL), len(0) {
	}
	bool operator>(const Node<Type> *prt) {
		return first->info > prt->info;
	}
	bool operator<(const Node<Type> *prt) {
		return first->info < prt->info;
	}

private:
	Node<Type> *first;
	int len;
};

template<typename Type>
void airliner<Type>::pop_one() {
	string name;
	bool found = false;
	Node<Type> *current;
	Node<Type>* gone;
	cout << "To find a reservation please enter the full name of passenger ";
	getline(cin, name);
	if (first->info == name) {
		current = first;
		first = first->next;
		delete current;
	} else {
		current = first->next;
		gone = first;
		while (current != NULL && !found) {
			if (current->info != name) {
				gone = current;
				current = current->next;
			} else
				found = true;
		}
		if (found) {
			gone->next = current->next;
			current = NULL;
			delete current;
		}
	}

}
template<typename Type>
void airliner<Type>::push_back() {
	string name, place;
	cout << "Please enter passengers name ";
	getline(cin, name);
	cout << name << " enter the flight to reserve i.e Main ";
	getline(cin, place);
	if (first == NULL)
		first = new Node<Type>(name, place);
	else {
		Node<Type>* current = first;
		while (current != NULL)
			current = current->next;
		current->next = new Node<Type>(name, place);
		len++;

	}
}
template<typename Type>
void airliner<Type>::push(Node<Type> *item) {
	if (first == NULL) {
		first = new Node<Type>(item->info, item->data);
	} else {
		Node<Type>* addone = new Node<Type>(item->info, item->data);
		addone->next = first;
		first = addone;
	}
	len++;
}
template<typename Type>
void airliner<Type>::push() {
	string name, place;

	cout << "Please enter passengers name ";
	getline(cin, name);
	cout << name << " enter the flight to reserve i.e Main ";
	getline(cin, place);
	if (first == NULL) {
		first = new Node<Type>(name, place);
	}
	else if(first->info > name) {
			Node<Type>* addone = new Node<Type>(name, place);
			addone->next = first;
			first = addone;
	}
	else{
		Node<Type> *current = first;
		Node<Type> *trail;
		Node<Type> *addone = new Node<Type>(name,place);
		while(current != NULL && current->info < name){
			  trail = current;
			  current = current->next;
		}
		trail->next = addone;
		addone->next = current;
	}

	len++;
}
template<typename Type>
void airliner<Type>::find() {
	string name;
	bool found = false;
	cout << "To find a reservation please enter the full name of passenger ";
	getline(cin, name);
	Node<Type> *current = first;
	while (current != NULL && !found) {
		if (current->info == name)
			found = true;
		else
			current = current->next;
	}
	if (found) {
		cout << "Reservation found for " << current->info;
		cout << endl;
		cout << "Ticket reserved " << current->data;
		cout << endl;
	} else
		cout << "No reservation found under name " << name;
	cout << endl;
}
template<typename Type>
void airliner<Type>::menu() {

	char choice, junk;

	do {
		cout << "What would you like to do today? " << endl;

		cout << " a ) reserve a flight " << endl << " b ) cancel a flight  "
				<< endl << " c ) check reservation " << endl
				<< " d ) display all reservations " << endl
				<< " q ) quit the program " << endl;
		cin >> choice;
		cin.get(junk);
		switch (choice) {
		case 'a':
			push();
			break;
		case 'b':
			pop_one();
			break;
		case 'c':
			find();
			break;
		case 'd':
			display();
			break;
		}

	} while (choice != 'q');
}
template<typename Type>
void airliner<Type>::display() {
	Node<Type> *current = first;

	cout << left << setw(21) << "Name: " << "Destination " << endl;
	while (current != NULL) {
		cout << left << setw(20) << current->info << " " << current->data;
		cout << endl;
		current = current->next;
	}
}

#endif /* NODE_H_ */
