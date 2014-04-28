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
 #include "BankAccount.h"

 class checking: public bank
 {
 public:
    void setInterest(double apr = 0);
    // This will set interest rate for accounts
    // This uses default parameters of apr = 0;
    void setMinium(double mini = 0);
    // This will set the minium balance requirement
    // for the bank.
    void setServiceCharge(double charge = 0);
    // This will set the service charge.
    void withDraw(double cash = 0);
    // This overrides the method in BankAccount class.
    void MiniumCheck();
    // This checks if the current balance has fallin below
    // the requirement. If it has the function will call
    // serviceCharge.
    void printAccount() const;
    // Overrides the bank type function and prints all
    // need information.
    double getMinium()  const;
    // Returns the minuim balance requirement.
    double getService() const;
    // Returns the Service charge amount
    double getInterest() const;
    checking();
 private:
    void serviceCharge();
    // This is a private function to proform actions on the account
    // It will subtract the service charge from the account.
    double minium;
    double rate;
    double service;
 };
#endif // CHECKINGACCOUNT_H_INCLUDED
