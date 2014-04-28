/*
 * oct23.cpp
 *
 *  Created on: Oct 23, 2013
 *      Author: brian
 */

#include "doubly.h"
#include "tnodelib.h"
#include <vector>
#include <queue>
template<typename T>
void qeu(queue<T>& q){
	vector<T> v;
	int n = q.size(), i;
	for(i = 0; i < n/2; ++i)
	{
		 v.push_back(q.front());
		 q.pop();
	}

	for(i = 0; i < v.size(); ++i){
		     q.push(v[i]);

	}
}

int main(int argc, char **argv) {

    queue<int> q;
    q.push(1);
    q.push(5);
    q.push(8);
    q.push(10);
    q.push(15);
    q.push(22);
    q.push(55);
    qeu(q);

    for(queue<int>::size_type i = 0; i < q.size(); ++i)
     {
    	 cout << q.front() << " : ";
    	         q.pop();
      }



	return 0;
}





