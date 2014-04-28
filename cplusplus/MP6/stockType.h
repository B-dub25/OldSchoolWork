/*
 * stockType.h
 *
 *  Created on: Apr 5, 2013
 *      Author: Brian Rundel
 *      CPS 271
 */

#ifndef STOCKTYPE_H_
#define STOCKTYPE_H_
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class stockType {

	friend istream& operator>>(istream&, stockType&);
	friend ostream& operator<<(ostream&, const stockType&);
public:
	stockType(string n = "", double op = 0, double cl = 0,
			double hi = 0,double lo = 0, double pvp = 0,
			double pgl = 0, int ns = 0) :
			symbol(n), openPrince(op), closePrice(cl),
			highPrice(hi), lowPrice(lo)
           , prevPrice(pvp), percentGainLoss(pgl),
           numberOfShares(ns) {}
	void setStockInfo();
	virtual void printStockInfo();
	void showDifferentPrice();
	void calculatePercentGainLoss();
	void printPercentGainLoss();
	bool operator<(const stockType& obj) {
		return (symbol < obj.symbol);
	}
	bool operator>(const stockType& obj) {
		return (symbol > obj.symbol);
	}
	virtual ~stockType() {  }
private:
	string symbol;
	double openPrince;
	double closePrice;
	double highPrice;
	double lowPrice;
	double prevPrice;
	double percentGainLoss;
	int numberOfShares;
};

#endif /* STOCKTYPE_H_ */
