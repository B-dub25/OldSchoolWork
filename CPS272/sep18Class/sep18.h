/*
 * sep18.h
 *
 *  Created on: Sep 18, 2013
 *      Author: brian
 */

#ifndef SEP18_H_
#define SEP18_H_
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class WordFreq {

	friend ostream& operator<<(ostream& os, const WordFreq& w) {
		os << w.word << " " << w.freq;
		return os;
	}

	friend bool operator<(const WordFreq& lhs, const WordFreq& rhs) {
		return lhs.word < rhs.word;
	}

	friend bool operator!=(const WordFreq& lhs, const WordFreq& rhs) {
		return lhs.word != rhs.word;
	}

public:

	WordFreq(string w) :
			word(w), freq(1) {
	}

	void increment() {
		freq++;
	}

private:
	string word;
	int freq;
};

#endif /* SEP18_H_ */
