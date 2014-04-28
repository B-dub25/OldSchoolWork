/*
 * base.cpp
 *
 *  Created on: Mar 9, 2013
 *      Author: brian
 */

#include "base.h"
int base::rowCounter = 0;

base::base(){
	names = new string[MAX];
}

base::base(const base& obj){

	if(*this != obj){
		delete [] names;
		for (int r = 0; r < rowCounter; ++r)
			names[r] = obj.names[r];
	}
}

string base::getName() const {
	return (*names);
}


istream& operator>>(istream& is, base& obj){

	 is >> obj[obj.rowCounter];
	 base::rowCounter++;
	 return( is);
}
//ostream& operator<<(ostream& os , const base& obj){
//
//	    for (int i = 0; i < obj.rowCounter; ++i)
//			os << obj[i] << " ";
//	    return( os);
//}
//

