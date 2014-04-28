/*
 * driver.cpp
 *
 *  Created on: Nov 6, 2013
 *      Author: brundel
 */

#include <queue>
#include <iostream>
#include <exception>
using namespace std;

template<typename T>
void cut(queue<T>& q, int n, const T& item);

int main(int argc, char **argv) {

	queue<int> q;
	int index = 0, item = 0;
	for (int i = 1; i < 9; ++i) {
		q.push(i);
	}
	cout << "Please enter an index and a number to insert ";
	cin >> index >> item;

	cut(q, index, item);

	while (!q.empty()) {
		cout << q.front();
		q.pop();
	}

}

template<typename T>
void cut(queue<T>& q, int n, const T& item) {

    queue<T> temp;
    int qSize = q.size();
	if (q.size() + 1 < n)
		throw exception();
	else if (n == q.size() + 1)
		     q.push(item);
	else {
		for (int i = 1; i <= qSize; ++i) {

            if(i == n){
            	temp.push(item);

            }
            temp.push(q.front());
			q.pop();
		}
        qSize = temp.size();
		for (int i = 0; i < qSize ; ++i) {
				q.push(temp.front());
				temp.pop();
		}
	}

}

