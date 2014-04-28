/*
 * driver.cpp
 *
 *  Created on: Apr 14, 2013
 *      Author: brian
 */
#include "Node.h"
int main(int argc, char **argv) {
	MyList<string>* prt = new MyList<string>;
	prt->push("Brian");
	prt->push("Naomi");
	prt->push("Sophia");
	prt->push_back("Tom");
	prt->display();
	prt->search("Sophia");
}




