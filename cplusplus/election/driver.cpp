/*
 * driver.cpp
 *
 *  Created on: Mar 20, 2013
 *      Author: brian
 */


#include "election.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char **argv) {

	election mybase;
	ifstream infile;
	infile.open("voting.txt");

	infile >> mybase;
        election m(mybase);
	cout << m[1][1];


}
