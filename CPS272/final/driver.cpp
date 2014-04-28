/*
 * driver.cpp
 *
 *  Created on: Dec 4, 2013
 *      Author: brundel
 */

#include <iostream>
#include <list>
#include <queue>

using namespace std;

template<typename T>
void f(list<T>& alist, T item){

	queue<T> q;
	typename list<T>::iterator iter = alist.begin();
    while(iter != alist.end()){

    	 if(*iter > item){
    		 q.push(*iter);
    		 alist.erase(iter++);
    	 }
    	 else
    		 iter++;
     }

     while(!q.empty()){
    	 alist.push_back(q.front());
    	 q.pop();
     }

}


int main(){

	list<int> alist;
	alist.push_back(50);
	alist.push_back(15);
	alist.push_back(20);
	alist.push_back(45);
	alist.push_back(35);
	alist.push_back(10);
	alist.push_back(5);
	/*alist.push_back(50);
	alist.push_back(50);
	alist.push_back(50);
	alist.push_back(50);*/

	f(alist,12);
	list<int>::iterator iter = alist.begin();

	while(iter != alist.end())
	{
		cout << *iter << " ";
		iter++;
	}





}

