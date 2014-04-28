/*
 * book.h
 *
 *  Created on: Feb 15, 2013
 *      Author: brian
 */

#ifndef BOOK_H_
#define BOOK_H_
#include "publication.h"
#include "sales.h"
class book : public publication, public sales{

public:
      book(std::string t="" , double p = 0.0 , int pC = 0)
      : publication(t,p), sales(),pageCount(pC) {}
      void setData(std::string t, double p, int pC)
      { publication::setData(t,p); pageCount = pC;}
	  void displayData() const;
      void readData();
private:
       int pageCount;
};


#endif /* BOOK_H_ */
