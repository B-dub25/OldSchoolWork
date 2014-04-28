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
 #include "BankAccount.h"

 using namespace std;

 void bank::setAccount(int acc, double bal)
 {
     //account number will be randomly generated
     //and passed as a argument.
     account = acc;
     balance = bal;
 }
 void bank::withDraw(double cash)
 {
        if(cash <= balance)
        balance = balance - cash;
        else
            cout << "Insufficient Funds\n";
 }
 void bank::deposit(int acc, double bal)
 {
     if(acc == account)
        balance = balance + bal;
     else
        cout << "Wrong Account Number\n";
 }
 int bank::getAccount() const
 {
     return account;
 }
 double bank::getBalance() const
 {
     return balance;
 }
 void bank::printAccount() const
 {
     cout << fixed << showpoint  << setprecision(2);
     cout << "Account Number: "  << account << "\n"
          << "Current Balance: " << balance << "\n";
 }
