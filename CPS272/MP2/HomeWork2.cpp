/*
 * HomeWork2.cpp
 *
 *  Created on: Sep 4, 2013
 *      Author: Brian Rundel
 *      Course CPS 272
 */

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cmath>

using namespace std;

const int ARRSIZE = 50000;
const int RANDOMVALUES = 100000, RANDOMLIMIT = 200000;

template<typename T>
int binarySearch(const T arr[], int first, int last, const T& target) {

	int mid = 0, comparision = 0;

	while (first < last) {

		mid = (first + last) / 2;
		if (arr[mid] == target)
			return ++comparision;
	    else if (arr[mid] < target)
			first = mid + 1;
		 else
			last = mid - 1;
		comparision += 2;
	}
	return -comparision;
}
void decToBin(int num, int base = 2) {
	if (num > 0) {
		decToBin(num / base, base);
		cout << num % base;
	}
}
template<typename T>
void selectioSort(T arr[], int size){

    int min, inner, outer;
    T temp;
	for (outer = 0; outer < size-1; ++outer) {
	      min = outer;
		 for (inner = outer+1; inner < size; ++inner){
		     if(arr[inner] < arr[min])
		    	 min = inner;
		}

	 if(min != outer){
     temp = arr[outer];
     arr[outer] = arr[min];
     arr[min] = temp;
	 }
   }

}

int main() {
	int table[ARRSIZE], x = 0, num = 0;
	int sumBinSearchSuccess = 0, sumBinSearchFail = 0, success = 0;
    srand(unsigned(time(0)));
	for (int i = 0; i < ARRSIZE; ++i) {
		 table[i] = rand() ;
	}
    selectioSort(table, ARRSIZE);
	while(x < RANDOMVALUES){

		int search = rand() % RANDOMVALUES;
        int compare = binarySearch(table,0,ARRSIZE-1, search);
		if( compare > 0){
			success++;
			sumBinSearchSuccess += compare;

		}
		else
			sumBinSearchFail -= compare;

		x++;
	}
	cout << "Empirical average case: " << sumBinSearchSuccess / static_cast<double>(success) << endl;
	cout << "Empirical worse case: "   << sumBinSearchFail / static_cast<double>( RANDOMVALUES - success ) << endl;
	cout << "Empirical bound for worse case: " << 2.0 *(1.0 + int(log(static_cast<double>(ARRSIZE) / log(2.0)))) << endl;

	for (int i = 0; i < 6; ++i) {
		cout << "Enter a number to change to binary ";
		cin >> num;
		decToBin(num);
		cout << endl;
	}

}

