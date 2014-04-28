/*
 * publication.h
 *
 *  Created on: Feb 15, 2013
 *      Author: brian
 */

#ifndef PUBLICATION_H_
#define PUBLICATION_H_

#include <string>
using namespace std;

class publication {
public:
       publication(string t= " ", double p = 0.0 )
       : title(t), price(p) { }
       virtual ~publication() {}
       virtual void displayData() const = 0;
       void setData(string t, double p) { title = t; price = p;}
       std::string getTite() const {return title;}
       double getPrice() const {return price;}
       virtual void readData();

private:
    std::string title;
	double price;
};


#endif /* PUBLICATION_H_ */
