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
 #include "extperson.h"
 #include "personimp.cpp"
 #include "addressimp.cpp"
 #include "dateimp.cpp"
 #include <string>
 #include <iomanip>
 #include <cctype>


 using namespace std;
 const string ERROR = "Invalid ";

 void extper::set_info(string per,string first, string last,
                         address mys,bDate my_bir)
 {
    per[0] = toupper(per[0]);
    if(per == "Family" || per == "Friend" || per == "Business")
    perfix = per;
    else
        cout << ERROR << "perfix of person \n";
    person::setName(first,last);

    mystreet = mys;
    my_birth = my_bir;
 }
 string extper::get_lname() const
 {
     return person::getlName();
 }
 void extper::print() const
 {
     cout << perfix <<'\n';
     cout << "Name: ";
     person::print();
     cout << "Birthday: "; my_birth.print(); cout << '\n';
     cout <<  "Address: \n"; mystreet.print(); cout << '\n';
 }

