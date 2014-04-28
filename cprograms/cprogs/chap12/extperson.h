#ifndef EXTPERSON_H_INCLUDED
#define EXTPERSON_H_INCLUDED

/*
 * Copyright 2012 Brian Rundel <brundel@wccnet.edu>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include "addressType.h"
#include "personType.h"
#include "dateType.h"
#include <string>
using namespace std;

class extper: public person
{
public:
    void set_info(string,string,string,address,bDate);
    //This gets and sets the person type.
    //It expects that the char variable is a perfix for
    //family, business or friend
    char get_perfix()  const;
    //This will return the prefix of the person
    //for searching reasons
    string get_lname() const;
    //This returns the last name for sorting reasons
    void print() const;
    //Prints the information
private:
    address mystreet;
    bDate   my_birth;
    string perfix;
};

#endif // EXTPERSON_H_INCLUDED
