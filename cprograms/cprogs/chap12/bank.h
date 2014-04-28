#ifndef BANK_H_INCLUDED
#define BANK_H_INCLUDED

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
class account
{
public:
    void setAccount(int acc = 0,double bal = 0.00);
    //Post condition:
    //this will set the account number for the customer
    int getAccount() const;
    //This will retrieve the account number of the customer
    double getBalance() const;
    //This retieves the account balance
    void deposit(double);
    //This will add money to the account
    void withDraw(double);
    //Withdraws money from the account;
    void printAccount() const;
    //Prints the acount infromantion
    account();
private:
    int acc_num;
    double balance;

#endif // BANK_H_INCLUDED
