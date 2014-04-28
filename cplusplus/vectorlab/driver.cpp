/*
 * driver.cpp
 *
 *  Created on: Mar 21, 2013
 *      Author: brian
 */
#include <vector>
#include <iostream>

using namespace std;

void print(vector<int> v){

	vector<int>::const_iterator it;
	for (it = v.end() ; it >= v.begin(); it--)
		cout << *it << endl;
}

int main(int argc, char **argv) {

//	vector<int>::iterator it;
//	int arr[5] = {99,67,82,90};
//	vector<int> vGr(4);
//	vector<int> v(arr, arr+5);

//  it = vGr.begin() + 2;
//	vGr.assign(5,5);
//	vGr.at(2) = 99;
//	vGr.erase(it);
//	cout << vGr.size();
//	vGr.push_back(100);
//	vGr.push_back(85);
//	cout << vGr.size();
//	cout << v.size();
	print(vGr);

}






