/*
 * driver.cpp
 *
 *  Created on: Sep 25, 2013
 *      Author: brian
 */
#include "miniList.h"
#include <vector>

int main(int argc, char **argv) {


    miniList *list = new miniList;
    linkIterator it;

    list->push_back(9);
    list->push_back(30);
    list->push_back(17);
    list->push_back(4);
    list->push_back(20);
    list->f();
    list->print();
     /* for(it = list->begin(); it != list->end() && i != 15 ; ++it){
    	  cout << *it << " , ";
    	  i++;
      }*/



}


