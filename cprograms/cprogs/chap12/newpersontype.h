#ifndef NEWPERSONTYPE_H_INCLUDED
#define NEWPERSONTYPE_H_INCLUDED

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

class persontype
{
public:
    void setName(std::string fname,std::string lname);
    //Post condition:
    //               This will set the first and last name of the person
    std::string getFname() const;
    //This will return the first name of the person
    std::string getLname() const;
    //This will return the last name of the person
    void print() const;
    //Prints the persons whole name.
    persontype(std::string fname = "",std::string lname = "");
    //Default condition for the object persontype.
private:
    std::string fName;
    std::string lName;
};
#endif // NEWPERSONTYPE_H_INCLUDED
