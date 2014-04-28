/*
 * main.cpp
 *
 *  Created on: Sep 4, 2013
 *      Author: brian
 */

#include "timer.h"
#include <iterator>

int gcd(int a , int b){

	if(b == 0)
		return a;

	gcd(b,a % b);
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

int const SIZE = 10;

int main(){

	timer t;
	list<int> myNumbers;
	vector<double> myGrades;
	myGrades.push_back(98.7);
	myGrades.push_back(87.3);
	myGrades.push_back(99.9);
	myGrades.push_back(85);
	myNumbers.push_back(1);
	myNumbers.push_back(2);
	myNumbers.push_back(7);
	myNumbers.push_back(1);
	myNumbers.push_back(1);

	 //it = myGrades.begin();
	//for(it = myGrades.begin() ; it != myGrades.end(); it++)
		//cout << *it;

	bool pal = true;
	while(myNumbers.size() > 1)
	{
		if(myNumbers.front() != myNumbers.back())
			pal = false;
		myNumbers.pop_front();
		myNumbers.pop_back();
	}
	if(pal){
		cout << "Its a palindrome " << endl;
	}
	else
		cout << "Not a palindrome " << endl;
	int list[10000] = {0};
	//string states[SIZE] = {"NY","MI","CA","MA","MO","AL","ND","IN","NH","OH"};

	srand((unsigned)time(0));

    for (int i = 0; i < 10000; ++i) {
		list[i] = rand() % 10000;
	}

	t.start();
	selectioSort(list,10000);
	t.stop();
	cout << fixed << showpoint << setprecision(8);
	cout << "It took " << t.getTime() << endl;
	cout << "GDC is =" <<gcd(1234,16) << endl;

}
