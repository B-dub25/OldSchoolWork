/*
 * election.h
 *
 *  Created on: Mar 20, 2013
 *      Author: brian
 */

#ifndef ELECTION_H_
#define ELECTION_H_

#include <iostream>
#include <string>
using namespace std;
class election {
	friend ostream& operator<<(ostream&, const election&);
	friend istream& operator>>(istream&, election&);
public:
	static int rowCounter;
	static int columnCount;
	static const int MAX = 10;

	virtual bool operator==(const election& obj) {
		return (this == &obj);
	}
	virtual bool operator!=(const election& obj) {
		return (this != &obj);
	}
	virtual bool operator>(const election& obj) {
		return (this > &obj);
	}
	virtual int* operator[](int n) {
		return (electionVotes[n]);
	}
	virtual const int* operator[](int n) const {
		return (electionVotes[n]);
	}
	virtual string what() const throw () {
		return ("");
	}
	string getName(int i) const {
		return (names[i]);
	}
	void setName(string s, int i) {
		names[i] = s;
	}
	virtual ~election() {
		delete[] names;
		delete[] electionVotes;
	}
	election();
	election(const election&);

private:
	string* names;
	int** electionVotes;

};

#endif /* ELECTION_H_ */
