#ifndef SAVINGSACCOUNT_H_INCLUDED
#define SAVINGSACCOUNT_H_INCLUDED

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

 #include "BankAccount.h"
 class saving: public bank
 {
 public:
    void setInterestRate(double apr = 0 );
    //Set the interest rate for the account
    void withDraw(double cash);
    //Override the bank type function
    double getInterest() const;
    void printAccount() const;
    saving();
 private:
    double Rate;
 };
#endif // SAVINGSACCOUNT_H_INCLUDED
