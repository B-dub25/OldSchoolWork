
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

 #include <iostream>
 #include "personType.h"
 #include <string>
 using namespace std;

 void person::setName(string fnam,string lnam)
 {
     fName = fnam;
     lName = lnam;
 }

void person::get_name(string fnam,string lnam) const
 {
     fnam = fName;
     lnam = lName;
 }
 void person::print() const
 {

     cout << fName << " " << lName << "\n";
 }
 string person::getlName() const
 {
     return lName;
 }
person::person()
{
    fName = "";
    lName = "";
}
