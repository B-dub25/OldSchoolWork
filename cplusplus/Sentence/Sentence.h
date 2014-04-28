/*
 * Sentence.h
 *
 *  Created on: Mar 3, 2013
 *      Author: brian
 */

#ifndef SENTENCE_H_
#define SENTENCE_H_

#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

class Sentence {
public:

	  Sentence();
	  void createSentence();
	  virtual void display();
      char* getArt();
      char* getnoun();
      char* getVerb();
      char* getPre();
	  virtual ~Sentence()
      {delete [] article; delete [] noun; delete [] verb; delete [] preposition;}

private:
	char ** article;
	char ** noun;
	char ** verb;
	char ** preposition;
	string mysentence;
};
#endif
