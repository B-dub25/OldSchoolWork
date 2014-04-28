/*
 * flight.h
 *
 *  Created on: Apr 12, 2013
 *      Author: brian
 */

#ifndef FLIGHT_H_
#define FLIGHT_H_
#include "Node.h"
#include <algorithm>
#include <iterator>
#include <iomanip>
template<typename T>
class flight {
public:
	flight() : plane(NULL), len(0) { }
	void reserveFlight();
	void display();
	void cancelFlight();
	void displayAllPass();
	void findPassenger();
	int  getTotalPassengers() { return (len);}
private:
	Node<T> *plane;
	int len;
};

template<typename T>
void flight<T>::reserveFlight() {
	string name , place;
	cout << "Please enter the passengers name ";
    getline(cin,name);
    cout <<  name << " enter the destination you are going ";
    getline(cin,place);
	if (plane == NULL)
		plane = new Node<T>(name,place);
	else {
		Node<T> *n = new Node<T>(name,place);
		n->link = plane;
		plane = n;
	}
	len++;
}
template<typename T>
void flight<T>::cancelFlight() {
	string name; bool found = false;

	cout << "Enter passengers name please ";
	getline(cin,name);
	Node<T> *myPlane = plane;
    Node<T> *pass = plane;

    while(myPlane != NULL && !found){
	     if(myPlane->data != name){
	  	     myPlane = myPlane->link;
	      }
	      else
	    	 found = true;
	    }
	      if(found){
	    	pass = myPlane->link;
	    	myPlane->link = pass->link;
	    	len--;
	    	delete pass;
	        }
}
template<typename T>
void flight<T>::findPassenger() {
	string name; bool found = false;
    cout << "Enter passengers name please ";
	getline(cin,name);
	Node<T> *myPlane = plane;

    while(!found && myPlane != NULL){
    	 if(myPlane->data != name){
    		 myPlane = myPlane->link;

    	 }
    	 else
    		 found = true;
    }
    if(found){
    	cout << "Reservation found for " << myPlane->data;
    	cout << endl << "Ticket reserved for " << myPlane->destanation;
    	cout << endl;
    }
    else
    	cout << "No reservation found for " << name;
        cout << endl;
}
template<class T>
void flight<T>::display() {
	char choice, junk;
	cout << "What would you like to do? Press q to quit " << endl;
	do {
		cout << "a ) reserve a flight " << endl
			 << "b ) cancel a reservation " << endl
		     << "c ) check whether a ticket is reserved for a person " << endl
		     << "d ) display the passengers " << endl
			 << "q ) quit the program " << endl;
		cin >> choice;
		cin.get(junk);
		switch (choice) {
		case 'a':  reserveFlight();
			break;
		case 'b':  cancelFlight();
			break;
		case 'c':  findPassenger();
			break;
		case 'd':  displayAllPass();
			break;
		default:
			break;
		}
	} while (choice != 'q');
}
template<typename T>
void flight<T>::displayAllPass() {
	Node<T> *p = plane;
	cout << left << setw(15) <<"Name " << "Destination " << endl;
	while (p != NULL) {
		cout << left <<setw(15) << p->data;
		cout << p->destanation;
		cout << endl;
		p = p->link;

	}
	cout << endl;
}
#endif /* FLIGHT_H_ */
