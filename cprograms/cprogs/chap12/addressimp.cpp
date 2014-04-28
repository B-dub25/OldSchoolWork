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
 #include <iostream>
 #include <string>


 using namespace std;

 void address::setAddress(string add_street,string cities,
                          string states,int zip_code)
                          {
                             street = add_street;
                             city = cities;
                             state = states;
                             zip = zip_code;
                          }
 void address::print() const
 {
     cout << "Street: " << street << "\nCity: " << city
          << "\nState: " << state << "\nZip: " << zip;
 }
 address::address()
 {
     street = "";
     city = "";
     state = "";
     zip = 0;
 }
