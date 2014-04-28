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
 #include "checkingAccount.h"
 #include "bankAccount.h"
 #include "savingAccount.h"
 using namespace std;

 void get_informantion(savings,checking);

 int main()
 {
   savings mysaving;
   checking mycheck;
   get_informantion(mysaving,mycheck);
 }

 void get_informantion(savings mysavings,checking mycheckings)
 {
     int acc_number = 0,    rates = 0;
     double minium_bal = 0, current_bal = 0;
     double service_fee = 0;
     char answer;
     cout << "Enter the account number: "; cin >> acc_number;
     cout << "Deposit amount: ";           cin >> current_bal;
     cout << "Type of account: (S) for savings (C) for checking: ";
     cin >> answer;
     if(toupper(answer) == 'S')
     {
         cout << "Enter interest rate: ";  cin >> rates;
         mysavings.setAccount(acc_number,current_bal,rates);
         mysavings.printAccount();
     }
     else
     {
       cout << "Enter minium balance requirement: "; cin >> minium_bal;
       cin.ignore(10,'\n');
       mycheckings.setMinium(minium_bal);
       cout << "Enter Service Charges: ";            cin >> service_fee;
       mycheckings.setService(service_fee);
       cout << "Enter Interest Rate: ";              cin >> rates;
       mycheckings.setAccount(acc_number,current_bal,rates);
       mycheckings.miniumCheck();
       mycheckings.printAccount();
     }


 }


