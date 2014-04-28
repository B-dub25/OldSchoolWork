/*
 * driver.cpp
 *
 *  Created on: Dec 5, 2013
 *      Author: brundel
 */

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <set>

using namespace std;

template<typename T>
class freq
{
public:

	freq(T v, T cnt = 1) : value(v), count(cnt) {}
    T increment() { return count++ ; }
    T getValue() const { return value; }
    int getCount() const { return count; }
friend bool operator < ( const freq& a, const freq& b){
	return a.value < b.value ;
}
friend bool operator <= ( const freq& a, const freq& b){
	return a.value <= b.value ;
}
private:
		T value;
		T count;
};

int main(){

	map<int,string> m;
	map<int , string>::iterator it;

	string arr[] = { "one","two","three", "four","five"};
	int j;
	for(j=0;j<5;++j)
		m[j] = arr[j];
   m[2] += "o'clock";
   it = m.find(3);
   cout << (*it).second << endl;

   for(it =m.begin(); it != m.end(); ++it)
	   cout << (*it).first << "  "<< (*it).second <<  endl;
}

