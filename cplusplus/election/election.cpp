/*
 * election.cpp
 *
 *  Created on: Mar 20, 2013
 *      Author: brian
 */

#include "election.h"

int election::rowCounter = 0;
int election::columnCount = 0;

election::election() {
	this->names = new string[MAX];
	this->electionVotes = new int*[MAX];
	for (int i = 0; i < MAX; ++i)
		electionVotes[i] = new int[MAX];
}
election::election(const election& obj) {

	this->electionVotes = new int*[MAX];
	names = new string[MAX];
	for (int r = 0; r < rowCounter; ++r)
		names[r] = obj.names[r];
	for (int i = 0; i < MAX; ++i)
		electionVotes[i] = new int[MAX];

	for (int r = 0; r < rowCounter; ++r)
		for (int c = 0; c < 3; ++c)
			this->electionVotes[r][c] = obj.electionVotes[r][c];
}

ostream& operator<<(ostream& os, const election& obj) {
	for (int i = 0; i < obj.rowCounter; ++i) {
		os << obj.getName(i) << " ";
		for (int c = 0; c < 3; ++c) {
			os << obj[i][c] << " ";
		}
		os << endl;
	}

	return (os);
}
istream& operator>>(istream& is, election& obj) {
	string s;
	for (int i = 0; i < 7; ++i) {
		is >> s;
		obj.setName(s, i);
		for (int c = 0; c < 3; ++c) {
			is >> obj[i][c];
		}
		obj.rowCounter++;
	}
	return (is);
}
