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
 #include "BankAccount.h"
 #include "CheckingAccount.h"
 #include "savingsAccount.h"

 using namespace std;
 void getSaving(saving mysavings);
 void getChecking(checking mychecking);
 bool checkMin(double mini, double& cash);
 int main()
 {
     saving mysave;
     checking mycheck;
     //getSaving(mysave);
     getChecking(mycheck);

 }

 void getSaving(saving mysavings)
 {
    int account;
    double bal,interest;
    cout << "Enter Account Number ";   cin >> account;
    cout << "Enter Interest Rate " ;   cin >> interest;
    cout << "Enter Intail Deposit ";   cin >> bal;
    mysavings.setAccount(account,bal);
    mysavings.setInterestRate(interest);
    cout << "Enter deposit amount ";   cin >> bal;
    mysavings.deposit(account,bal);

 }

 void getChecking(checking mychecking)
 {
     int account;
     double bal, with, interest, minium, service;

     cout << "Enter Account Number: ";        cin >> account;
     cout << "Enter Interest Rate: ";         cin >> interest;
     cout << "Enter Minium Require Balance:"; cin >> minium;
     cout << "Enter Intail Deposit: ";        cin >> bal;
     cout << "Enter Service Charge: ";        cin >> service;
     if(checkMin(minium,bal))                  //Check to make sure the deposit is higher the mimium requirement
     {
         cout << string(100,'\n');             //Clear screen.
         mychecking.setMinium(minium);
         mychecking.setServiceCharge(service);
         mychecking.setInterest(interest);
         mychecking.setAccount(account,bal);
         mychecking.printAccount();
     }
     cout << "Enter withdraw amount. "; cin >> with;
     mychecking.withDraw(with);

     mychecking.printAccount();

 }

 bool checkMin(double mini, double& cash)
 {
     char answer; double more;
     if(mini > cash)
     {
         cout << "Deposit is to low\n"
              << "Deposit more? ";      cin >> answer;
              if(toupper(answer) == 'Y')
              {
                  cin >> more;
                  cash += more;
                  checkMin(mini,cash);
              }
               else
                  return false;
     }
     return true;
 }
