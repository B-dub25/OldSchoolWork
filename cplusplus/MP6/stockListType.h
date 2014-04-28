/*
 * stockListType.h
 *
 *  Created on: Apr 5, 2013
 *      Author: brian
 */

#ifndef STOCKLISTTYPE_H_
#define STOCKLISTTYPE_H_
#include <vector>
#include <iterator>
#include "stockType.h"
#include <fstream>
#include <exception>
template<class T>
class stockListType: public stockType {
public:
	stockListType() {
		vector<stockType> myList;
	}
	stockListType(stockType obj) {
		vector<stockType> myList;
		myList.push_back(obj);
	}
	void getStockInfo();
	void printStockInfo();
	void sort();
private:
	vector<T> myList;
};
template<class T>
void stockListType<T>::getStockInfo() {
	try {

		fstream fin("stocks.txt");
		if(!fin)
			throw exception();
		stockType obj;
		fin >> obj;
		while (fin) {
			myList.push_back(obj);
			fin >> obj;
		}

	} catch (exception& e) {
		cout << "File not found " << endl;

	}

}
template<class T>
void stockListType<T>::printStockInfo() {
	sort();
	vector<stockType>::const_iterator it;
	cout << right << setw(24) << "Today" << right << setw(15) << " "
			<< "Yesterday" << right << setw(9) << " " << "Percent" << endl
			<< left << setw(8) << "SYM" << left << setw(7) << "OPEN" << left
			<< setw(7) << "CLOSE" << left << setw(8) << "HIGH" << left
			<< setw(9) << "LOW" << left << setw(10) << "CLOSE" << left
			<< setw(10) << "SHARES" << left << setw(10) << "G/L" << endl;

	for (it = myList.begin(); it != myList.end(); ++it) {
		cout << *it;
	}

}
template<class T>
void stockListType<T>::sort() {

	unsigned smallest;
	stockType temp;
	for (unsigned row = 0; row < myList.size(); ++row) {
		smallest = row;
		for (unsigned col = 1 + row; col < myList.size(); ++col) {
			if (myList.at(smallest) > myList.at(col))
				smallest = col;
		}
		temp = myList.at(smallest);
		myList.at(smallest) = myList.at(row);
		myList.at(row) = temp;
	}

}
#endif /* STOCKLISTTYPE_H_ */
