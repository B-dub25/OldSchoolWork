/*
 * base.cpp
 *
 *  Created on: Feb 26, 2013
 *      Author: brian
 */
#include "base.h"
int base::counter = 0;

base::base(){
	names = new string[MAX];
}

base::base(const base& obj){

	if(*this != obj){
		delete [] names;
		for (int r = 0; r < counter; ++r)
			names[r] = obj.names[r];
	}
}

void base::Swap(int n, int i){

	string temp;
	temp = names[n];
	names[n] = names[i];
	names[i] = temp;
}

string base::GetName() const {
	return *names;
}

void base::Getnames(istream& is){

	     int x = 0;
		 while(is && x < MAX){
			   is >> names[x];
			   is.ignore(100,'\n');
			   x++;
		 }
		 counter = x;
}
istream& operator>>(istream& is, base& obj){

	 is >> obj[obj.counter];
	 return is;
}
ostream& operator<<(ostream& os , const base& obj){

	    for (int i = 0; i < obj.counter; ++i)
			os << obj[i] << " ";
	    return os;
}