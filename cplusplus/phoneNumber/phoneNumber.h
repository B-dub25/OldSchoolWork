/*
 * phoneNumber.h
 *
 *  Created on: Apr 26, 2013
 *      Author: brian
 */

#ifndef PHONENUMBER_H_
#define PHONENUMBER_H_
#include <string>
#include <iostream>

using namespace std;
class invalidFormat {
public:
	   invalidFormat(char a[]  ,string msg = " ")  { this->msg =a+msg;};
       string what() { return msg;}
private:
	string msg;
};
class phoneNumber {

	friend istream& operator>>(istream&, phoneNumber&);
	friend ostream& operator<<(ostream& , const phoneNumber&);
public:
      bool okay(char[] );

private:
	bool checkLenght(char []);
	bool checkExchange(char[]);
	bool checkArea(char[]);
	bool checkparenthesis(char[]);
	string areaCode;
	string exchange;
	string lineNum;

};
bool phoneNumber::checkExchange(char a[]){
	return(a[6]-'0' > 1);

}
bool phoneNumber::okay(char a[]){
	return(checkparenthesis(a) && checkArea(a)
			&& checkLenght(a) && checkExchange(a));
}
bool phoneNumber::checkLenght(char a[]){
	int i = 0;
	for (i; a[i]!= NULL;)
			++i;
	return (i == 14);
}
bool phoneNumber::checkparenthesis(char a[]){

    return(a[0] == '(' && a[4] == ')' && a[5] == ' ');
}

bool phoneNumber::checkArea(char a[]){
	return(a[1] - '0' >= 1 && a[2]-'0' <= 1);

}
istream& operator>>(istream& is, phoneNumber& obj){
	char phone[15];
	cin.getline(phone,15);
    if(obj.okay(phone))
    {
    	string temp = phone;
    	obj.areaCode = temp.substr(0,4);
    	obj.exchange = temp.substr(4,4);
    	obj.lineNum = temp.substr(8);
    }
    else
    throw invalidFormat(phone ," Invalid format");
    return is;
}
ostream& operator<<(ostream& os, const phoneNumber& obj){
	 os << obj.areaCode << obj.exchange << obj.lineNum << endl;
	 return os;
}
#endif /* PHONENUMBER_H_ */