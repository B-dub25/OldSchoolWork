/*
 * driver.cpp
 *
 *  Created on: Apr 25, 2013
 *      Author: brian
 *      Problem number 44
 */
#include "test.h"
#include <fstream>
#include  <vector>
#include  <iterator>
#include <algorithm>

bool pali(vector<int>& t){

	vector<int>::iterator start = t.begin();
	vector<int>::iterator ending = t.end()-1;
	for(int i = 0 ; i < t.size()/2; i++){
          if(*start == *ending)
          {
        	 start++;
             ending--;
          }
          else
        	  return false;
	}
	return true;
}
int main()
{
	int grad[] = {1,2,3,2,1};
	vector<int> vgr(grad, grad+5);
	if(pali(vgr))
		cout << "OK" << endl;
	else
		cout << "NO";
 }
