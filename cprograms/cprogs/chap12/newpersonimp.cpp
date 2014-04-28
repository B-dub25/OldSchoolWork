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
 #include <string>
 #include "newpersontype.h"

 using namespace std;

 void persontype::setName(string first,string last)
 {
     fName = first;
     lName = last;
 }

 string persontype::getFname() const
 {
     return fName;
 }
 string persontype::getLname() const
 {
     return lName;
 }
 void persontype::print() const
 {
     cout << fName << " " << lName;
 }
 persontype::persontype(string f,string l)
 {
     fName = f;
     lName = l;
 }
