/*
 * hashTable.h
 *
 *  Created on: Dec 8, 2013
 *      Author: brundel
 */

#ifndef HASHTABLE_H_
#define HASHTABLE_H_


#include "hash.h"
#include <string>
#include <cmath>
using namespace std;

const int TABLE_SIZE = 7;

class HashMap {
private:
      hashing **table;
public:
      HashMap() {
            table = new hashing*[TABLE_SIZE];
            for (int i = 0; i < TABLE_SIZE; i++)
                  table[i] = NULL;
      }

 void put(int ,int value);
 int hashIt(int key);
 void remove(int key);
 int get(int);

      ~HashMap() {
            for (int i = 0; i < TABLE_SIZE; i++)
                  if (table[i] != NULL) {
                        hashing *prevEntry = NULL;
                        hashing *entry = table[i];
                        while (entry != NULL) {
                             prevEntry = entry;
                             entry = entry->getNext();
                             delete prevEntry;
                        }
                  }
            delete[] table;
      }
};
int HashMap::hashIt(int key){

	int hashCode = 0;
    char ch = key;

	for(int i = 1; i < 7 ; ++i){
		  hashCode += ch * pow(i,i+1) * 31
				  ;
          key = key% 10;
          ch = key;

	}
    return abs(hashCode);


}

int HashMap::get(int key) {

	int hash = (hashIt(key) % TABLE_SIZE);

            if (table[hash] == NULL)
                  return -1;
            else {
                  hashing *entry = table[hash];
                  while (entry != NULL && entry->getKey() != key)
                        entry = entry->getNext();
                  if (entry == NULL)
                        return -1;
                  else
                        return entry->getValue();
            }
      }

void HashMap::put(int key ,int value ){

	int hash = (hashIt(key) % TABLE_SIZE);

          if (table[hash] == NULL){
                table[hash] = new hashing(key, value);
          }
          else {
                hashing *entry = table[hash];
                while (entry->getNext() != NULL)
                      entry = entry->getNext();
                if (entry->getKey() == key)
                      entry->setValue(value);
                else
                      entry->setNext(new hashing(key, value));
          }
}


#endif /* HASHTABLE_H_ */