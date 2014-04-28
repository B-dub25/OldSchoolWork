/*
 * driver.cpp
 *
 *  Created on: Feb 26, 2013
 *      Author: brian
 */
//#include "votes.h"
#include "disitance.h"
#include <iostream>
#include <fstream>
using namespace std;

void process(char& c) { cout << c; }

int main(int argc, char **argv) {
	int *p;
	int *q;
	int i;

	p = new int[5];
	p[0] = 2;

	for(i=1;i<5;++i)
       p[i] = p[i-1] + i;
	q = p;
	delete [] p;
	for (i = 0; i < 5; i++)
		cout << q[i] << "\t";

}

