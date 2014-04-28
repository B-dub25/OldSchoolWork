/*
 * driver.cpp
 *
 *  Created on: Mar 9, 2013
 *      Author: brian
 */


#include "votes.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char **argv) {

	votes mybase;
	ifstream infile;
	infile.open("voting.txt");

	infile >> mybase;
	cout << mybase;



}
