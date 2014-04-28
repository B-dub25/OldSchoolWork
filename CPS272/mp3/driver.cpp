/*
 * driver.cpp
 *
 *  Created on: Oct 1, 2013
 *      Author: Brian Rundel
 *      CPS 272 MP3
 */

#include "intEntery.h"
#include <list>
#include <cmath>
#include <iostream>
using namespace std;



bool isIn(const list<intEntery>& primeList,int number ){
	if(primeList.empty())
		return false;
	list<intEntery>::const_iterator iter;
	for(iter = primeList.begin(); iter != primeList.end(); ++iter){
		if(number == *iter)
			return true;
	}
	return false;

}

void loadPrimes(list<intEntery>& primes, int n) {

	int counter = 2;
	int x = n;
	while(counter < n){
		while( x % counter == 0){
			if(isIn(primes,counter))
			{
				intEntery prime(counter);
				primes.remove(prime);
				prime.increamt();
				primes.push_back(prime);
			}
			else{
			intEntery prime(counter);
            primes.push_back(prime);
			}
		x = x / counter;
		} // end of inner while loop
		counter++;
	} // end of outer while(counter < n )
}

int gcd(int n, int m) {

	int greatestCommon = 0;
	for (int i = 1; i < m; ++i)
		if (m % i == 0 && n % i == 0)
			greatestCommon = i;
	return greatestCommon;

}
void print(const list<intEntery>& primeList){
	list<intEntery>::const_iterator iter;
	for (iter = primeList.begin(); iter != primeList.end(); ++iter)
		cout << *iter << " ";
	cout << endl;
}
int main(int argc, char **argv) {

	list<intEntery> mylist;
	list<intEntery>::iterator it;
	int firstPrimeFactor = 0, secondPrimeFactor = 0;
    int commonDenominator = 0;
    cout << "Enter a number to get the prime factors of " << endl;
    cin >> firstPrimeFactor;

    loadPrimes(mylist, firstPrimeFactor);
	cout << "number : " << firstPrimeFactor << " ";
	print(mylist);

	mylist.clear();

	cout << "Enter another number to get the prime factors of " << endl;
	cin >> secondPrimeFactor;
	cout << "number : " << secondPrimeFactor << " ";
	loadPrimes(mylist,secondPrimeFactor);

	print(mylist);

	commonDenominator = gcd(firstPrimeFactor,secondPrimeFactor);
    cout << "Greatest common denominator of " << firstPrimeFactor << " "
    	 << secondPrimeFactor << " is " << commonDenominator << endl;
	mylist.clear();
    cout << "Getting the prime number of the greatest common denominator "
    	 << " of the numbers " << endl
         << "number : " << commonDenominator << " ";

    loadPrimes(mylist,commonDenominator);

    print(mylist);



    return 0;
}
