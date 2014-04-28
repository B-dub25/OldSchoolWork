/*
 * driver.cpp
 *
 *  Created on: Nov 19, 2013
 *      Author: brundel
 */

#include "myTree.h"
#include <stdio.h>
#include <cstring>

int main(int argc, char **argv) {

	myTree* tree = new myTree;
	tree->add("-");
	tree->add("+");
	tree->add("6");
	tree->add("3");
	tree->add("/");
	tree->add("7");
	tree->add("*");
	tree->add("12");
	tree->add("5");
	tree->inorderDisplay();
	cout << endl;
	tree->postOrederDisplay();

	return 0;

}


