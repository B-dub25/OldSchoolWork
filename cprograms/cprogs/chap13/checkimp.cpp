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
 #include "CheckingAccount.h"

 using namespace std;

 void checking::setMinium(double bal)
 {
     minium = bal;
 }

 void checking::setServiceCharge(double charge)
 {
     service = charge;
 }

 void checking::setInterest(double apr)
 {
     rate = apr;
 }

 void checking::serviceCharge()
 {
     withDraw(service);
 }

 void checking::MiniumCheck()
 {
     if(getBalance() < minium)
        serviceCharge();
 }

 void checking::withDraw(double cash)
 {
     if(getBalance() - cash > minium)
     bank::withDraw(cash);
     else
        cout << "Insufficient Funds\n";
 }

 void checking::printAccount() const
 {
     cout << "Checking ";
     bank::printAccount();
     cout << fixed << showpoint << setprecision(2);
     cout << "Interest Rate: "  << rate << "%\n"
          << "Service Charge: " << service << "\n"
          << "Minium Balace: "  << minium << "\n";
 }
 double checking::getMinium() const
 {
     return minium;
 }
 double checking::getService() const
 {
     return service;
 }

 double checking::getInterest() const
 {
     return rate;
 }

 checking::checking()
 {
     minium = 0.00;
     service = 0.00;
     rate = 0.00;
 }
