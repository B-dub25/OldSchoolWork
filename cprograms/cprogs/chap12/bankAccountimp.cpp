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
 #include "bankAccount.h"

using namespace std;

 void account::setAccount(int acc, double bal)
 {
    acc_num = acc;
    balance = bal;
 }
 int account::getAccount() const
 {
     return acc_num;
 }

 void account::deposit(double money)
 {
     if(balance >= 0.01)
     balance += money;
 }

 double account::getBalance() const
 {
     return balance;
 }

 void account::withDraw(double money)
 {
     if(money > balance)
        cout << "Insufficient funds\n";
     else
        balance = balance - money;
 }
 void account::printAccount() const
 {
     cout << "Account Number: " << acc_num <<"\n"
          << fixed << showpoint << setprecision(2)
          << "Current Balance: " << balance << endl;
 }

 account::account()
 {
     acc_num = 0;
     balance = 0.00;
 }

