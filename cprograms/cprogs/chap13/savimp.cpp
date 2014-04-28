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

 #include <iomanip>
 #include <iostream>
 #include "savingsAccount.h"

 using namespace std;

 void saving::setInterestRate(double apr)
 {
     Rate = apr;
 }

 void saving::withDraw(double cash)
 {
     if(getBalance() > cash)
        bank::withDraw(cash);
     else
        cout << "Insufficient Funds\n";
 }

 double saving::getInterest() const
 {
     return Rate;
 }

  void saving::printAccount() const
  {
      cout << "Savings ";
      bank::printAccount();
      cout << "Interest Rate: " << Rate << "%\n";
  }

  saving::saving()
  {
     Rate = 0.00;
  }
