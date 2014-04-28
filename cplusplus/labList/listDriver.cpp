/*
 * listDriver.cpp
 *
 *  Created on: Apr 11, 2013
 *      Author: brian
 */

#include "listlib.h"
#include  <list>
#include <algorithm>
#include <iterator>
#include  <vector>
using namespace std;

int main(int argc, char **argv) {

	myList<string> train;

	vector<int> mtlist(5);
    mtlist.push_back(55);
    mtlist.push_back(99);
    mtlist.push_back(1000);

	train.insertFront("this");
//	train.insertFront(15);
//	train.insertFront(55);
//	train.insertBack(45);
//	train.insertBack(45);
//	sort(mtlist.begin(),mtlist.end());

}
