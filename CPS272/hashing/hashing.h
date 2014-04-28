/*
 * hashing.h
 *
 *  Created on: Dec 6, 2013
 *      Author: brundel
 */

#ifndef HASHING_H_
#define HASHING_H_
#include "miniList.h"
#include <cmath>
template<typename K, typename T>
class hashing {


public:

	hashing<K,T>(int sz){
		list[sz];

		prime = 31;
	}

	int hash(K key){

		int hashCode = 0;
		string temp = key;
		for(int i = 0; i < temp.length(); ++i){
			hashCode += (temp[i] -'0' ) * pow(i,i) * prime;
		}
        return hashCode;
	}

    const node<T>* operator[](K key)const {
    	return list[hash(key)];
    }

    node<T> operator[](K key){
          return list[hash(key)];
    }

    void add(K key, T item){
    	list[hash(key)].push(item);
    }

private:
	miniList<T> list[];
    int prime;
};


#endif /* HASHING_H_ */
