#ifndef PERSONTYPE_H_INCLUDED
#define PERSONTYPE_H_INCLUDED

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

#include <string>
using namespace std;
class person
{
public:
    void setName(string, string);
    //Sets the first and last name
    void get_name(string,string) const;
    //Gets the name of the persons
    string getlName() const;
    //Returns the last name
    string getfName() const;
    //Returns the first name
    void print() const;
    //
    person();
private:
       string fName;
       string lName;
};
#endif // PERSONTYPE_H_INCLUDED
