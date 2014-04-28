/*
 * main.cpp
 *
 *  Created on: Sep 11, 2013
 *      Author: brian
 */


#include <iostream>
#include <vector>

using namespace std;


template<typename T>
void sort(vector<T>& arr){


}

template<typename T>
void join(vector<T>& arr, vector<T>& arr2){

	int arrsize = arr2.size();

	for (int i = 0; i < arrsize; ++i) {
		arr.push_back(arr2[i]);
	}
}

int main(int argc, char **argv) {

	int x;
	int *ptr;
	ptr = &x;

	*ptr += 2;



}


