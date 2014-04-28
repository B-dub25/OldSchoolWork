/*
 * Book.cpp
 *
 *  Created on: Mar 3, 2013
 *      Author: brian
 */
#include "Book.h"

void Book::display(){
	for (int i = 0; i < 10; ++i) {
		mybook[i].display();
	}
}
Book::Book(){
	mybook = new Sentence[10];
	for (int i = 0; i < 10; ++i) {
		mybook[i].createSentence();
	}
}



