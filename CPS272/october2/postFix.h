/*
 * postFix.h
 *
 *  Created on: Oct 2, 2013
 *      Author: brian
 */

#ifndef POSTFIX_H_
#define POSTFIX_H_
#include <string>
#include <stack>
using namespace std;

class postFix{

private:
	string postExpression;
	stack<int> operand;
public:
	postFix() : postExpression(""){};
	void set(string expression);
	string get();
	int evaluate();
	int compute(int lft, int rght, char op);
	bool isOperator(char op);
	void getOperands(int& lft, int& rht);
};

int postFix::compute(int lft, int rht,char op){

	switch (op) {
		case '+': return lft+rht;
		case '/': return lft/rht;
		case '-': return lft-rht;
		case '*': return lft*rht;
		default:
			break;
	}
}
int postFix::evaluate(){

	char ch;
	int left , right;
	for (int i = 0; i < postExpression.length(); ++i){

		ch = postExpression[i];
		if(isdigit(ch))
			operand.push(ch - '0');
		else if(isOperator(ch)){
			getOperands(left, right);
			operand.push(compute(left,right,ch));
		}

	}
	int result = operand.top();
	operand.pop();
	return result;

}
void postFix::set(string post){

	postExpression = post;
}
string postFix::get(){

	return postExpression;
}

bool postFix::isOperator(char op){

	return ( op == '/' || op == '+' || op == '-' || op == '*');
}

void postFix::getOperands(int& lft, int& rht){

	rht = operand.top();
	operand.pop();
	lft = operand.top();
	operand.pop();

}
#endif /* POSTFIX_H_ */
