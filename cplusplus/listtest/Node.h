/*
 * Node.h
 *
 *  Created on: Apr 14, 2013
 *      Author: brian
 */

#ifndef NODE_H_
#define NODE_H_
#include <iostream>

using namespace std;
template<typename Type>
class Node {
public:
	Node<Type>(Type first) : next(NULL),data(first){}
	Node<Type> *next;
	Type data;
};

template<typename Type>
class MyList {
public:
	 MyList<Type>() : first(NULL) {}
     void push(Type i);
     void push_back(Type i);
     void search(Type s);
     void display();
private:
	 Node<Type>* first;
};
template<typename Type>
void MyList<Type>::search(Type s){
	if (first == NULL) {
		cout << "Can't search a empty list " << endl;
	} else {
		Node<Type>* current = first;
        bool found = false;
        while(current && !found){
        	if (current->data == s)
				found = true;
        	else
        		current = current->next;
        }
        if(found)
        	cout << current->data << " found ";
            cout<< endl;
	}
}
template<typename Type>
void MyList<Type>::push_back(Type i){
	if(first == NULL)
	   first = new Node<Type>(i);
	else{
		Node<Type> *toAdd = new Node<Type>(i);
		Node<Type> *current = first;
		while(current->next != NULL)
			current = current->next;
		current->next = toAdd;

	}
}
template<typename Type>
void MyList<Type>::push(Type i){
	if(first == NULL)
		first = new Node<Type>(i);
	else{
		Node<Type> *toAdd = new Node<Type>(i);
		toAdd->next = first;
		first = toAdd;
	}
}
template<typename Type>
void MyList<Type>::display(){
	if(first == NULL)
		cout << "Empty list " << endl;
	else{
		Node<Type> *current = first;
		while(current){
			cout << current->data ;
			cout << endl;
			current = current->next;
		}
	}
}
#endif /* NODE_H_ */
