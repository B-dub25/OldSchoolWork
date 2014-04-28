/*
 * stockType.cpp
 *
 *  Created on: Apr 5, 2013
 *      Author: brian
 */
#include "stockType.h"

istream& operator>>(istream& is, stockType& obj){

	is >> obj.symbol >> obj.openPrince >> obj.closePrice
	   >> obj.highPrice >> obj.lowPrice >> obj.prevPrice
	   >>obj.numberOfShares; obj.calculatePercentGainLoss();
	return (is);
}

ostream& operator<<(ostream& os, const stockType& obj){
    os << fixed << showpoint << setprecision(2);
	os << left << setw(7) << obj.symbol
	   << right<< setw(7) << obj.openPrince
	   << right<< setw(7) << obj.closePrice
	   << right<< setw(7) << obj.highPrice
	   << right<< setw(7) << obj.lowPrice
	   << right<< setw(10) << obj.prevPrice
	   << right<< setw(10) << obj.numberOfShares
	   << right<< setw(7) << obj.percentGainLoss<<"%"<< endl;
	return (os);
}

void stockType::setStockInfo(){
	cin >> symbol >> openPrince >> closePrice
		   >> highPrice >> lowPrice >> prevPrice
		   >> percentGainLoss >> numberOfShares;
}
void stockType::printPercentGainLoss(){
	if(percentGainLoss == 0)
	{
		calculatePercentGainLoss();
	}
	  cout << this->percentGainLoss;
}
void stockType::calculatePercentGainLoss(){

	this->percentGainLoss = ((closePrice - prevPrice) / prevPrice) * 100;
}
void stockType::showDifferentPrice(){

	      cout << right<< setw(7) << openPrince
			   << right<< setw(7) << closePrice
			   << right<< setw(7) << highPrice
			   << right<< setw(7) << lowPrice
			   << right<< setw(7) << prevPrice << endl;
}
void stockType::printStockInfo(){
	  cout << fixed << showpoint << setprecision(2)
	       << left << setw(7) << symbol
		   << right<< setw(7) << openPrince
		   << right<< setw(7) << closePrice
		   << right<< setw(7) << highPrice
		   << right<< setw(7) << lowPrice
		   << right<< setw(10) << prevPrice
		   << right<< setw(10) << numberOfShares
		   << right<< setw(7) << percentGainLoss<<"%"<< endl;
}
