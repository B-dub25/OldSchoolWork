/*
 * main.cpp
 *
 *  Created on: Oct 5, 2013
 *      Author: brian
 */



#include <list>
#include <iostream>

using namespace std;

int main(){

	list<char> mylist;
    list<char>::iterator iter;
    cout << "it";
	mylist.push_back('t');
    mylist.push_back('r');
    mylist.push_back('a');
    mylist.push_back('i');
    mylist.push_back('n');
    iter = mylist.begin();

    iter++;
    mylist.erase(iter++);
    mylist.erase(iter);
    mylist.push_back('t');

    for (iter = mylist.begin(); iter != mylist.end(); ++iter) {
		cout << *iter;
	}

    return 0;
}

