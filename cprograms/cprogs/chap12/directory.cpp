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
 #include <iomanip>
 #include <cctype>
 #include "extperson.h"
 #include "extpersonimp.cpp"

 using namespace std;
 const int MAX = 500;
 int main()
 {
     int x = 0;
     extper myperson[MAX];
     address street;
     bDate dates;
     string f,l,s,st,p,c;
     int zip,dd,mm,yyyy;

     cout << "Prifix\n";
     cin >> p;
     cout << "First name \n"; cin >> f;
     cout << "last name\n"; cin >> l;
     cout << "birthday \n"; cin >> dd >> mm >> yyyy;
     cin.ignore(10,'\n');
     cout << "street address "; getline(cin,s);
     cout << "State\n";
     cin >> st;
     cout << "City\n";
     cin >> c;
     cout << "Zip code\n";
     cin >> zip;
     street.setAddress(s,c,st,zip);
     dates.setDate(dd,mm,yyyy);
     myperson[0].set_info(p,f,l,street,dates);
     myperson[0].print();



     return 0;
 }
