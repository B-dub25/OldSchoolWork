/*
 * main.cpp
 *
 *  Created on: Oct 16, 2013
 *      Author: brian
 */

#include <list>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include "demoClass.h"
#include "inventory.h"
#include "lenght.h"
#include "array.h"

using namespace std;

template<typename T>
void shiftLeft(T arr[],int n){

	int i; T temp = arr[0];
	for(i = 0; i < n-1; ++i)
		arr[i] = arr[i+1];
	arr[n-1] = temp;

}

bool balanced(string pattern){

	stack<char> stk;
	bool flag = true;
	string::size_type position = 1;

	stk.push(pattern[0]);
	while(flag && position < pattern.length()){

			switch(pattern[position]){

			case ')':
			    flag = (stk.top() == '('); stk.pop(); break;
			case '}':
				flag = (stk.top() == '{'); stk.pop();  break;
			case ']':
				flag = (stk.top() == '['); stk.pop(); break;
			case '[':
				 stk.push(pattern[position]); break;
			case '{':
				 stk.push(pattern[position]); break;
			case '(':
				 stk.push(pattern[position]); break;
			}
       ++position;
		}
 return flag;

}
//d,e,f,g,h '\n'
//
void f(char ch){
	if(ch >= 'a' && ch <= 'h')
	{
		cout << ch;
		f(ch+1);
	}
	else
		cout << endl;
}
int f(int n){
	if(n > 0)
		return 1+f(n-1); // 5/4/3/2/1 /2/3/4/5
	else
		return 0;
}
template<typename T>
T s(const vector<T>& v, int m, int n){
	return v[m]+v[n];
}

vector<int> diff(vector<int>& v){

	vector<int> d;
	for(unsigned i = 0; i < v.size()-1; ++i){
			 d.push_back(v[i+1] - v[i]);

	}
	return d;
}
template<typename T>
void f2(T arr[], int n){
	T* p = arr, *q = arr+n/2, temp;

	for(int i = 0; i < n/2; ++i){
		temp = *p;
		*q++ = *p;
		*p++ = temp;
	}
}
template<typename T>
void shiftRight(T arr[], int n){

	T temp;

	for(int i = 0; i < n ; i++){
		temp = arr[n-1];
		arr[n-1] = arr[i];
		arr[i] = temp;
	}


}
int re2(int n){
	if(n <= 1)
	{
		cout << n << " n <= 1" << endl;
		return n;
	}
	else
	{
		cout << n <<" <- n-1 \t"  << endl;
		return  re2(n-1);
	}
}
int re(int n){
	if(n <= 1)
	{
		cout << n << " n <= 1" << endl;
		return n;
	}
	else
	{

		cout<< (re(n-1) + 2 *re(n-2)) << "\t";
	}
}

int main(int argc, char **argv) {

	//f('a');
	/*string sarr[] = {"North","South","East","West"};
    array a(4,4);
    a[0][0] = 4;
    a[1][1] = 5;
    int* as = a[1];
    cout << *as;
   int arr[] = {3,5,7,-9,6};

   f2(sarr, 4);
   for(int i = 0; i < 4; ++i)
       	cout << sarr[i] <<" ";

       cout << endl;


    vector<int>d;
    vector<int> vs;
    d.push_back(6);
    d.push_back(2);
    d.push_back(9);
    d.push_back(5);
    d.push_back(8);
    d.push_back(10);
*/


    cout << re(8) << endl;
	/*string pattern = "((a+b))";
    if(balanced(pattern))
    	cout << pattern << " is balanced " << endl;
    else
    	cout << pattern << " is not balanced " << endl;*/

    /*int size = sizeof(sarr) / sizeof(string);
    vector<string> sv(sarr,sarr+size);
	//cout << 5/2 << endl;
    vs.push_back(5);
    vs = diff(d);
    for(int i = 0; i < vs.size(); ++i)
    	cout << vs[i] <<" ";*/
    int arr[] = { 1,2,3,4,5,6,7,8};
    shiftRight(arr,8);
    for (int i = 0 ; i < 8; i++)
    	cout << arr[i] << endl;
    cout << endl;
    vector<int> i(8);

    inventory inv(25);
    length l(2,1);
    length f(5,1);
    l += f;
    //cout << l << endl << endl;
	//inv.purchase(18);
	//cout << inv.getNumberOnHand() << endl;
	//if(!inv.purchase(21)) // 25 + 21
	//	inv.purchase(10);
	//cout << inv.getNumberOnHand() << endl;;


	/*demoClass* pe = new demoClass();
    pe->setValue(5);
    //cout << pe->getValue();
	vector<int>* p;
	p = new vector<int>[8];
	p->push_back(8);
	list<char> alist;
	alist.push_back('m');   // tematics
	alist.push_back('a');
	alist.push_back('t');
	alist.push_back('h');
	alist.push_back('e');
	alist.push_back('m');
	alist.push_back('a');
	alist.push_back('t');
	alist.push_back('i');
	alist.push_back('c');
	alist.push_back('s');
	list<char>::iterator iter;
	iter = alist.begin();
	iter++;
	alist.erase(iter++);
	iter++;
	alist.erase(iter);
	alist.pop_front();
	for(iter = alist.begin(); iter != alist.end(); ++iter)
		cout << *iter;
  // cout << endl << f(5);
   */
    return 0;
}

