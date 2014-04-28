/*
* Author Brian Rundel
* This class is for the program sell product
*
*
*
*
*/

#ifndef SELL_H_INCLUDED
#define SELL_H_INCLUDED



#endif // SELL_H_INCLUDED
#pragma once
class product
{
public:
      void set_money(double);
      //set the initail amount tendered
      void check();
      //This is to check the current amount of money

      double update_amount();
      //update amount
      product();
      //default constructor
public:
       void print() const;
       //print results
       void print_amount() const;
       void print_left() const;
       double cash;
       double amount;
};
