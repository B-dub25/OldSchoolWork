/*
 * freq.h
 *
 *  Created on: Dec 5, 2013
 *      Author: brundel
 */

#ifndef FREQ_H_
#define FREQ_H_


template<typename T>
class freq
{
public:

	freq(T v, int cnt = 1) : value(v), count(cnt) {}
    void increment() { count++ ; }
    T getValue() const { return value; }
    int getCount() const { return count; }
friend bool operator < ( const freq& a, const freq& b){
	return a.value < b.value ;
}
friend bool operator <= ( const freq& a, const freq& b){
	return a.value <= b.value ;
}
private:
		T value;
		int count;
};



#endif /* FREQ_H_ */
