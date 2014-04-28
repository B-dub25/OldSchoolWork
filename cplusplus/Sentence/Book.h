/*
 * Book.h
 *
 *  Created on: Mar 3, 2013
 *      Author: brian
 */

#ifndef BOOK_H_
#define BOOK_H_

#include "Sentence.h"

class Book : public Sentence{
public:
	  Book();
	  void display();
	  ~Book() {delete [] mybook; }
private:
	Sentence *mybook;
};

#endif /* BOOK_H_ */
