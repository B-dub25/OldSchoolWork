/*
 * driver.cpp
 *
 *  Created on: Apr 18, 2013
 *      Author: brian
 */
#include "myvector.h"

int main(int argc, char **argv) {

	myvector<int> iQuizes;
	iQuizes.push_back(98);
	iQuizes.push_back(67);
	iQuizes.push_back(99);
	iQuizes.push_back(199);
	iQuizes.push_back(1199);
	for (int i = 0; i < iQuizes.sizes(); ++i) {
		cout << iQuizes[i] << " ";
	}
	iQuizes.pop_back();
	cout << iQuizes.front();
	cout << endl << iQuizes.back();
}




