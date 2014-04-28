/*
 * hash.h
 *
 *  Created on: Dec 8, 2013
 *      Author: brundel
 */

#ifndef HASH_H_
#define HASH_H_
#include <string>
class hashing {
private:
      int key;
      int value;
      hashing *next;
friend class hashMap;
public:

      hashing(int key = 0, int value = 0) {
            this->key = key;
            this->value = value;
            this->next = NULL;
      }

      int getKey() {
            return key;
      }

      int getValue() {
            return value;
      }

      void setValue(int value) {
            this->value = value;
      }

      hashing *getNext() {
            return next;
      }

      void setNext(hashing *next) {
            this->next = next;
      }
};




#endif /* HASH_H_ */
