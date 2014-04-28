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
 #include <iostream>
 #include "doctorType.h"
 #include "newpersonimp.cpp"

 using namespace std;

 //This will set the appropiate information for the doctor type object
 void doctor::setSpecialty(string firname,string lasname,
                           string specail)
{
    persontype::setName(firname,lasname);
    specialty = specail;
}
 string doctor::getSpecailty() const
{
    return specialty;
}
 void doctor::print() const
{
    persontype::print();
    cout << " Specailty: " << specialty << "\n";
}
 doctor::doctor()
{
     specialty = '\0';
}
