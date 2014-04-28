/*
 * driver.cpp
 *
 *  Created on: Apr 5, 2013
 *      Author: brian
 */
#include "stockListType.h"

int main(int argc, char **argv) {
	stockListType<stockType> mylist;

	mylist.getStockInfo();
	mylist.printStockInfo();
}




