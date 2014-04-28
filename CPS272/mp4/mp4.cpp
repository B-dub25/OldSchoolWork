/*
 * mp4.cpp
 *
 *  Created on: Oct 3, 2013
 *      Author: Brian Rundel
 *      CPS 272 MP4
 */

#include <iostream>
#include <fstream>
#include <string>
#include <stack>

using namespace std;

template<typename T>
void print(stack<T>& mystack){

	while(!mystack.empty()){
	      cout << mystack.top();
	       	mystack.pop();
	   }
}
bool balanced(const string& pattern){

	stack<char> stk;
	bool flag = true;
	int position = 1;
	stk.push(pattern[0]);
	while(flag && position < pattern.length()){

			switch(pattern[position]){

			case ')':
			    flag = (stk.top() == '('); stk.pop(); break;
			case '}':
				flag = (stk.top() == '{'); stk.pop();  break;
			case ']':
				flag = (stk.top() == '['); stk.pop(); break;
			case '[':
				 stk.push(pattern[position]); break;
			case '{':
				 stk.push(pattern[position]); break;
			case '(':
				 stk.push(pattern[position]); break;
			}
       ++position;
		}
 return flag;

}
bool isPalindrome(stack<char>& obj, const string& pattern) {

	string::size_type sz = 0;
	while (pattern[sz] != '#') {
		obj.push(pattern[sz]);
		sz++;
	}

	sz++;
	for (string::size_type i = sz; i < pattern.length(); ++i) {

		if (obj.top() != pattern[i])
			return false;
		obj.pop();
	}
	return true;
}
void decToBin(stack<int>& obj, int decimal, int base = 2) {

	if (decimal > 0) {
		obj.push(decimal % base);
		decToBin(obj, decimal / base, base);
	}
	print(obj);
}
void decToHex(stack<char>& obj, int decimal, int base = 16) {


	 while (true) {

     if(decimal % base > 9)
	 {
	 switch (decimal % base)
	 {
	 case 10: obj.push('A'); break;
     case 11: obj.push('B'); break;
     case 12: obj.push('C'); break;
     case 13: obj.push('D'); break;
     case 14: obj.push('E'); break;
     case 15: obj.push('F'); break;
     }
     decimal = decimal / base;
	 }

 	else
 	{
	obj.push(decimal+'0');
	print(obj);
	return;
    }

}
}
void decToOctal(stack<int>& obj, int decimal, int base = 8){

	while(true){

		obj.push(decimal%base);
		decimal = decimal/base;

		if(decimal < 9){
			obj.push(decimal%base);
			print(obj);
		return;
		}
	}
}

void multibaseOutput(int number , int base ) {

	stack<int> mystack;
	stack<char> myhex;

		switch (base)
		{
		case 2:
				 decToBin(mystack, number); break;
		case 8:  decToOctal(mystack,number);break;
		case 16: decToHex(myhex,number);  break;
        }

}


int main() {

	int base = 2, number = 2;
	stack<char> palindrome;
	string pattern , filename;
    ifstream infile;
    bool flag = true;

    cout << "Input string : ";
    getline(cin, pattern);
    while (pattern.length() > 2) {
       if (isPalindrome(palindrome, pattern))
    	   cout << pattern << " matches the pattern " << endl;
       else
       cout << pattern << " does not match the pattern " << endl;
    		cout << "Input string : ";
    		getline(cin, pattern);
      }

    cout << endl<<"Please enter a non negative number and base (2 <= B <= 16 )\n"
    		<< " or 0 0 to terminate ";
    cin >> number >> base;
    while(base != 0  && number != 0){

     cout << number << " base " << base << " is ";
     multibaseOutput(number, base);

     cout << endl<<"Please enter a non negative number and base (2 <= B <= 16 )\n"
         		<< " or 0 0 to terminate ";
     cin >> number >> base;
    }


    cout << "Please enter a file name ";
    cin >> filename;
    infile.open(filename.c_str());
    getline(infile,pattern);

   while(filename.length() > 1){
    while(infile && flag){
    	if(balanced(pattern))
    	{
    		getline(infile,pattern);
    	}
    	else
    	    flag = false;
    }
    if(flag)
    	cout << filename << " is balanced ";
     else
    	cout << filename << " is not balanced ";

    cout << "\nPlease enter a file name ";
    cin >> filename;
    infile.open(filename.c_str());
    getline(infile,pattern);
    flag = false;
   }







return 0;
}

