/*
 * array.h
 *
 *  Created on: Oct 18, 2013
 *      Author: brian
 */

#ifndef ARRAY_H_
#define ARRAY_H_

class array{
public:
	 array(const int& r,const int& c){
		 s = r;
		 d = c;
		 a = new int*[r];
		 for(int i = 0 ; i < c; i++)
			 a[i] = new int[c];
	 }
	  int* operator[]( int i){ return a[i];}
private:
	int s,d;
	int** a;

};

#endif /* ARRAY_H_ */
