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
 #include <iomanip>
 #include "savingAccount.h"

 using namespace std;

  savings::savings()
 {
     Rate = 0.00;
 }

 void savings::setAccount(int acc, double bal,double apr)
 {
     account::setAccount(acc,bal);
     Rate = (apr / 100);
 }

 void savings::withDraw(double cash)
 {
     account::withDraw(cash);
 }

 double savings::retrieveRate() const
 {
     return Rate * 100;
 }
 void savings::printAccount() const
 {
     account::printAccount();
     cout << fixed << showpoint << setprecision(2);
     cout << "Interest Rate: " << Rate << endl;
 }
