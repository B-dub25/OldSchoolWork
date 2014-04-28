/*
 * driver.cpp
 *
 *  Created on: Oct 9, 2013
 *      Author: Brian
 */

#include "mytime.h"
#include <stdlib.h>
#include <ctime>
#include "miniqueue.h"
#include <string>
#include <stack>
void collect(queue<int> q[], vector<int>& v) {

	int i = 0;
	for (int x = 0; x < 10; ++x) {

		while (!q[x].empty()) {
			v[i] = q[x].front();
			q[x].pop();
			++i;
		}
	}

}

void distribute(const vector<int>& v, queue<int> q[], int p) {
	for (unsigned i = 0; i < v.size(); ++i)
		q[v[i] / p % 10].push(v[i]);

}

void radixSort(vector<int>& v, int d) {

	queue<int> digits[10];
	int p = 1;
	for (int i = 1; i <= d; ++i) {
		distribute(v, digits, p);
		collect(digits, v);
		p *= 10;
	}
}

int main() {

	miniqueue<int> gradesQueue;
	priority_queue<string> statesQ;

	gradesQueue.push(12);
	gradesQueue.push(62);
	gradesQueue.push(45);
	gradesQueue.push(93);
	vector<int> myNumbers;
    srand((unsigned)time(0));

    statesQ.push("MI");
    statesQ.push("CA");
    statesQ.push("OH");
    statesQ.push("MA");
    statesQ.push("AL");
    statesQ.push("DE");

    stack<string> revst;

    while(!statesQ.empty())
    {
    	revst.push(statesQ.top());
    	statesQ.pop();
    }
    while(!revst.empty())
        {
        	cout << revst.top() << endl;
        	revst.pop();
        }

    for (int i = 1; i <= 10; ++i)
	     myNumbers.push_back(rand() % 100);

	radixSort(myNumbers,2);

    for (unsigned i = 0; i < myNumbers.size(); ++i)
		cout << myNumbers[i] << " ";
	cout << "size is " << gradesQueue.size() << endl;

	while (!gradesQueue.empty()) {

		cout << gradesQueue.front() << '\t';
		cout << gradesQueue.back() << '\t' << endl;
		gradesQueue.pop();
	}
	cout << endl;
	cout << "size is " << gradesQueue.size();

	priority_queue<mytime> apptQ;
	mytime intveiw;

	cout << "\nEnter time " << endl;
	cin >> intveiw;

	while (mytime(18) <intveiw ) {
		apptQ.push(intveiw);
		cout << "Enter time " << endl;
		cin >> intveiw;
	}
	mytime it;
	while (!apptQ.empty()) {

		it = apptQ.top();
		apptQ.pop();
		cout << it << "\t";
		if (apptQ.empty())
			cout << (mytime(17) - it) << endl;
		else
			cout << (apptQ.top() - it) << endl;
	}

	return 0;

}
