#ifndef DOCTORTYPE_H_INCLUDED
#define DOCTORTYPE_H_INCLUDED

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
#include "newpersontype.h"
#include <string>

class doctor: public persontype
{
 public:
    void setSpecialty(std::string first,std::string last
                      ,std::string special);
    //Post condition:
    //               This will call the function setName from class newperson
    //               and set the first and last name. This will also set the doctors
    //               specialty in profession.
    std::string getSpecailty() const;
    //This will return the doctors specailty
    void print() const;
    //Prints the doctors information.
    doctor();
private:
    std::string specialty;
};
#endif // DOCTORTYPE_H_INCLUDED
