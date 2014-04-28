#ifndef SAVINGACCOUNT_H_INCLUDED
#define SAVINGACCOUNT_H_INCLUDED

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
 #include "bankAccount.h"
 class savings: public account
 {
 public:
    void setAccount(int, double, double apr = 0);
    // This sets the interest rate and has a default parameter
    // set to 0.
    double retrieveRate() const;
    // Retrieved the interest rate for the banker and or customer
    void withDraw(double);
    // This orver rides the account function in bankingAcount class
    // This will with draw from the account.
    void printAccount() const;
    savings();
 private:
    double Rate;
 };
#endif // SAVINGACCOUNT_H_INCLUDED
