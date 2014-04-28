#ifndef BANKACCOUNT_H_INCLUDED
#define BANKACCOUNT_H_INCLUDED

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

class bank
{
public:

    void setAccount(int acc = 0, double bal = 0);
    // Postcondition:
    // This will set the account number and balance if any.
    // This also uses default parameters just incase nothing is
    // given.
    void withDraw(double cash = 0);
    // This will with draw money and subtract it from the account balance.
    void deposit(int acc, double);
    // This will deposit money in the account.
    // It expects the account number along with deposit amount
    int getAccount() const;
    //Retrieves the account number.
    double getBalance() const;
    //gets the Balance of account.
    void printAccount() const;
private:
    int account;
    double balance;
};

#endif // BANKACCOUNT_H_INCLUDED
