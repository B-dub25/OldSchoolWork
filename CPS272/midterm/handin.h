/*
 * handin.h
 *
 *  Created on: Oct 21, 2013
 *      Author: brian
 */

#ifndef HANDIN_H_
#define HANDIN_H_

// Question 23
template<typename T>
void shiftRight(T arr[], int n){
	T temp;
	for(int i = 0; i < n ; i++){
		temp = arr[n-1];
		arr[n-1] = arr[i];
		arr[i] = temp;
	}
}
#endif /* HANDIN_H_ */
