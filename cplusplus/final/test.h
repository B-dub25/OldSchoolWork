/*
 * test.h
 *
 *  Created on: Apr 25, 2013
 *      Author: brian
 */

#ifndef TEST_H_
#define TEST_H_
#include <iostream>
using namespace std;
template<class T>
class test {

public:
//      const test& operator=(const test obj){
//    	  return *this;
//      }

	   bool operator!= ( const test& obj) {return i != obj.i;}
private:
  int i;
};



#endif /* TEST_H_ */