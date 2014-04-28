/*
 * driver.cpp
 *
 *  Created on: Nov 6, 2013
 *      Author: brundel
 */

#include <iostream>
#include <fstream>
#include <set>

using namespace std;

struct examle
{
bool operator()(const int r, const int l){
	return r > l;
}
};
template<typename T>
void displayContainer(T first , T last , char sep = '\t'){

	T iter = first;
	while(iter  != last){

		cout << *iter << sep;
		iter++;

	}
}

int main(int argc, char **argv) {

	int arr[] = { 11,32 ,23 ,3 ,14 ,5};
	int sz = sizeof(arr) / sizeof(int);
	multiset<int, examle> myset(arr,arr+sz);
	displayContainer(myset.begin(),myset.end());
	set<int> setA, setB(arr, arr+sz);
	displayContainer(setB.begin(),setB.end());
	cout << " size of A is " << setA.size() << endl;
}

