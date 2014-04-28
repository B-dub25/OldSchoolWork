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

 #include "checkingAccount.h"
 #include <iomanip>
 #include <iostream>
 using namespace std;

 void checking::setAccount(int acc,double bal,double apr)
 {
     account::setAccount(acc,bal);
     interest = apr;

 }
 checking::checking()
 {
     minium = 0.00;
     service = 0.00;
     interest = 0.00;
 }
 void checking::withDraw(double cash)
 {
     account::withDraw(cash);
 }
 void checking::setService(double ser)
 {
     service = ser;
 }
 void checking::interestRate(double apr)
 {
     interest = apr;
 }
 void checking::miniumCheck()
 {
     if(minium > getBalance())
         serviceCharge();
     cout << "Balance:" << account::getBalance()
          << " Minium Required: " << minium << endl;
 }
 void checking::setMinium(double low)
 {
     minium = low;
 }
 double checking::retrieveMinuim() const
 {
     return minium;
 }
 void checking::serviceCharge()
 {
     withDraw(service);
 }
 void checking::printAccount() const
 {
    cout << "Checking ";
    account::printAccount();
    cout << "Minium Balance Required: " << minium << "\n"
         << "Interest Rate: " << interest << "%\n"
         << "Service Charge Fee: " << service << "\n";
 }
