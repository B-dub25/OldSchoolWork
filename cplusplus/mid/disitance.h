/*
 * disitance.h
 *
 *  Created on: Feb 28, 2013
 *      Author: brian
 */

#ifndef DISITANCE_H_
#define DISITANCE_H_

#include <iostream>
using namespace std;

class aClass
{
 public:
   int a;
   int b;
 public:
   aClass() : a(0), b(0) {}
   //void print();
   //void set(int, int);
};

class bClass: private aClass
{
public:
   int z;
public:
   //void print();
   bClass() : z(0), aClass() { }
};


#endif /* DISITANCE_H_ */
