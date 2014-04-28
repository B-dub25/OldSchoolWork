#ifndef DATETYPE_H_INCLUDED
#define DATETYPE_H_INCLUDED

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

class bDate
{
    public:
           void setDate(int m = 0,int d = 0,int y = 0);
    /*Post condition:
                     m = Month (sets the month)
                     d = Day (sets the day)
                     y = Year (sets the year)
    */
           void print() const;
           //This prints the month,day and year
    bDate();
    private:
            int day;
            int month;
            int year;
};
#endif // DATETYPE_H_INCLUDED
