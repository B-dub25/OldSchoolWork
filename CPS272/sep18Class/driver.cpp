/*
 * driver.cpp
 *
 *  Created on: Sep 18, 2013
 *      Author: Brian Rundel
 *
 */

#include <iostream>
#include <list>
using namespace std;

int main(){

	list<int> mylist;
	mylist.push_back(3);
	mylist.push_back(4);
	mylist.push_back(9);
	list<int>::const_reverse_iterator it = mylist.rbegin();

    for (it = mylist.rbegin(); it != mylist.rend(); it++) {
      cout << *it << " , ";

	}

}


