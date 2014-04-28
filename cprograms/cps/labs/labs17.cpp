/*
Author Brian Rundel
Created on:

*/

#include <iostream>
#include <string>
#include "labs.h"


info::info()
{
    first_name = "NONE";
    last_name = "NONE";
    age = 1000;
}

void info::store_info(string fir,string las,int ag)
{
    first_name = fir;
    last_name = las;
    age = ag;

    if(age < 0)
        cout << "Not even born yet\n";
    if(age >= 130)
        cout << "You're old\n";
}

void info::get_info(string& fir,string& las,int& ag)
{
    fir = first_name;
    las = last_name;
    ag = age;
}

int info::get_age(int& ag)
{
   ag=age;
   return ag;

}
