/*
 * inventory.h
 *
 *  Created on: Oct 16, 2013
 *      Author: brian
 */

#ifndef INVENTORY_H_
#define INVENTORY_H_
#include <iostream>
class inventory{
public:
	inventory(const int& sLevel): stockLevel(sLevel),numberOnHand(sLevel) {};
	bool purchase(const int& n){

		if(numberOnHand < n)
		{
		    std::cout<< "Insufficient inventory "<< std::endl;
			numberOnHand = stockLevel+n;
		    return false;
		}
		numberOnHand -= n;
		return true;
	}

	int getNumberOnHand() const {return numberOnHand;};
private:
	int stockLevel;
	int numberOnHand;
};

#endif /* INVENTORY_H_ */
