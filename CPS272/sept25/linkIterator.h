/*
 * linkIterator.h
 *
 *  Created on: Oct 2, 2013
 *      Author: brian
 */

#ifndef LINKITERATOR_H_
#define LINKITERATOR_H_

#include "Node.h"

class linkIterator{
public:

	  bool operator!=(const linkIterator& rhs) const
	  {
		  return this->current != rhs.current;
	  }

      bool operator==(const linkIterator& rhs) const
	  {
		return this->current  == rhs.current;
	  }
	  int operator*()
	  {
		  return current->data;
	  }

	  linkIterator operator++(){

    	  current = current->nextLink;
    	  return *this;
      }

	  linkIterator() : current(NULL) {};
	  linkIterator(node* obj) : current(obj) {};

private:
	node *current;

};

#endif /* LINKITERATOR_H_ */
