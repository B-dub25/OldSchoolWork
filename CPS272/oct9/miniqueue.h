/*
 * miniqueue.h
 *
 *  Created on: Oct 9, 2013
 *      Author: brian
 */

#ifndef MINIQUEUE_H_
#define MINIQUEUE_H_
#include <list>
using namespace std;

template<typename T>
class miniqueue
{
public:
	miniqueue() {};
	void push(const T& item) { qlist.push_back(item);}
	void pop() 		         { qlist.pop_front(); }
	T& front() 		         {return qlist.front();}
	T& back() 		         {return qlist.back(); }
	bool empty()	   const {return qlist.empty(); }
	int size() 		   const {return qlist.size(); }
private:
	list<T> qlist;
};



#endif /* MINIQUEUE_H_ */
