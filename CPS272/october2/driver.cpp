/*
 * driver.cpp
 *
 *  Created on: Oct 2, 2013
 *      Author: brian
 */
#include "myStack.h"
#include "postFix.h"
using namespace std;

int main(int argc, char **argv) {

	postFix exp;
	myStack<int> gradesStack;
	myStack<int> grad;
	string postExpression;
	cout << "enter post fix " << endl;
	getline(cin, postExpression);
	exp.set(postExpression);
	cout << exp.evaluate();

	int grade, i = 0;

	for ( i = 1; i <= 5; ++i) {

		cout << "Enter a grade " << endl ;
		cin >> grade;
		gradesStack.push(grade);
	}

    grad = gradesStack;
    while(!grad.empty()){
        	cout << grad.top() << endl;
        	grad.pop();
        }

}






