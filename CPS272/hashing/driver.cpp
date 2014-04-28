/*
 * driver.cpp
 *
 *  Created on: Dec 7, 2013
 *      Author: brundel
 */
//#include "miniList.h"
#include "hashing.h"

int main(){

	miniList<string> list;
    hashing<string, int> h();

	list.insert("HI");
    list.insert("Bye");
	list.print();
    cout << h.hash("eoj") % 10;
    h["brina"] = 15;
    return 0;
}