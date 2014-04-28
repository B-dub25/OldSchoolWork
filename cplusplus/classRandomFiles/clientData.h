/*
 * clientData.h
 *
 *  Created on: Apr 4, 2013
 *      Author: brian
 */

#ifndef CLIENTDATA_H_
#define CLIENTDATA_H_

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class ClientData {
public:

	ClientData(int n = 0, string  m = "John Doe", double b = 0.0)
 	 : acctNum(n) , balance(b)
	{
		setName(m);
	}
	void setAcctNum(int n) { acctNum = n; }
	int getAcctNum() { return (acctNum);}
	void setName(string n )
	{

		int len = n.size();
		len = (len < 15)? len: 14;
		n.copy(name,len);
		name[len] = '\0';
	}
	string getName() { return (name);}
	void setDouble(double b) { balance = b;}
	double getBalance() { return (balance);}

private:
	int acctNum;
	char name[15];
	double balance;
};


#endif /* CLIENTDATA_H_ */
