/*
 * driver.cpp
 *
 *  Created on: Apr 12, 2013
 *      Author: brian
 */
#include "flight.h"
#include <string>
using namespace std;

int main(int argc, char **argv) {

	flight<string> *reserve = new flight<string>;
	reserve->display();

}

