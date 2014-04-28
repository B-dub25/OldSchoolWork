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
 #include "dateType.h"

 using namespace std;

void bDate::setDate(int m, int d, int y)
{
    if(m >= 1 )
       month = m;
    else
       month = 1;
    if(d >= 1)
         day = d;
    else
        day = 1;
    if(y >= 1900)
       year = y;
    else
        year = 1900;
}
void bDate::print() const
{
    cout << month << '/' << day << '/' << year << ' ';
}
bDate::bDate()
{
    month = 0;
    day = 0;
    year = 0000;
}
