/*
 * driver.cpp
 *
 *  Created on: Sep 4, 2013
 *      Author: brian
 */




#include "miniVector.h"
#include <iterator>
#include <vector>
#include <list>
#include <stack>
int gcd(int a , int b){

	if(b == 0)
		return a;

	return gcd(b,a % b);
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

template<typename T>
list<T> f(const list<T>& alist){
	list<T> cop = alist;
	typename list<T>::iterator it;
	it = cop.begin();
	typename list<T>::iterator bit;

	while(it != cop.end()){
		bit = it;
		bit++;
		while(bit != cop.end())
			if(*bit == *it){
				cop.erase(bit++);
				cop.insert(it,*it);
			}
			else
				bit++;

	 it++;
	}
	return cop;
}
void f2(list<char>& alist, const char i){

	stack<char> s;
	list<char>::iterator iter = alist.begin();

	while(iter != alist.end()){
		if(*iter < i){
			s.push(*iter);
			alist.erase(iter++);
		}
		else
			iter++;

	}
	while(!s.empty()){
		alist.push_front(s.top());
		s.pop();
	}
}
int ds(int i){
	if(i > 0)
		return i+ds(i-1);
	else
		return 0;
}
void split(const list<int>& alist, list<int>& one, list<int>& two) {

	list<int>::const_iterator iter = alist.begin();
	int n = 1;
	while(iter != alist.end()){
		if(n % 2 == 1)
			one.push_back(*iter);
		else
			two.push_back(*iter);
		iter++;
		n++;
	}

}

int const SIZE = 10;

int main(){

	stack<int> stk;
   cout <<  ds(4);
    cout<< string(3,'\n');
	//cout << stk.top() << endl;
	int arr[] = {5,1,2,5,3,1,5,3,9};
	//int sz = sizeof(arr)/sizeof(int);
	list<char> alist;
	list<int>::iterator it;
	alist.push_back('g');
	alist.push_back('t');
	alist.push_back('a');
	alist.push_back('d');
	alist.push_back('p');
	alist.push_back('f');
	alist.push_back('k');
	alist.push_back('w');
	f2(alist,'g');
	while(!alist.empty()){
	    	cout<< alist.front() << endl;
	    	alist.pop_front();
	    }
	/*alist.push_back(4);
	alist.push_back(31);
	alist.push_back(10);
	alist.push_back(12);
	it = alist.begin();*/
	//split(alist,one,two);
	/*alist = f(alist);
	string s[] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
	//int szs = sizeof(s)/sizeof(string);
    list<string> weekList;
    list<string>::iterator strIterA , strIterB;
    weekList.push_front("tom");
    weekList.push_front("sue");
    strIterA = weekList.begin();
    strIterA++;
    weekList.insert(strIterA,"dave");
    weekList.insert(strIterA,"bill");*/
    //cout << endl << "died "<< endl<<endl;
    /*while(!two.empty()){
    	cout<< two.front() << endl;
    	two.pop_front();
    }*/

	/*alist.pop_front(); // 5
	cout << alist.back() << endl;
	cout << alist.front() << endl;
	alist.pop_back(); // 7
	cout << alist.back() << endl;
	alist.pop_front(); // 9
	alist.push_front(7);
    alist.back() = alist.front();
    cout << endl;*/





	miniVector<int> myVector;
    myVector.push_back(2);
    myVector.insert(2,5);
   //cout << myVector.size();

	miniVector<double> myGrades;
	myGrades.push_back(5);
	//cout << myGrades<<'\n';

	myGrades.push_back(6);


	/* for(size_t i = 0 ; i < myVector.size(); i++)
		cout << myVector;
   */


	//string states[SIZE] = {"NY","MI","CA","MA","MO","AL","ND","IN","NH","OH"};



}
