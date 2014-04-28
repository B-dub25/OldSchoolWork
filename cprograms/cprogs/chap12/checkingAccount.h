#ifndef CHECKINGACCOUNT_H_INCLUDED
#define CHECKINGACCOUNT_H_INCLUDED

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

 class checking: public account
 {
 public:
    void setAccount(int acc=0,double bal = 0, double apr = 0);
    void interestRate(double apr = 0);
    // This will calculate the interest rate for the banker
    // and customer.
    void setService(double);
    // This sets the service charge for the bank. If a customer
    // account falls below the minium requirement a get a service
    // charge on there account.
    void setMinium(double);
    // This sets the minuim balance for the checking account
    void miniumCheck();
    // This will check the mimium requirement for the balance
    void withDraw(double);
    int retrieveInter() const;
    // This will convert the interest back to a integer for
    // banker and customer.
    double retrieveMinuim() const;
    // This will retrieve the customers minium balance requirement.
    void printAccount() const;
    // This prints the off checking account.
    checking();
 private:
    double minium;
    double interest;
    double service;
    void serviceCharge();
    // This will minus the service charge from the
    // account if it has fallin below the minium balance
    // requirement

 };
#endif // CHECKINGACCOUNT_H_INCLUDED
