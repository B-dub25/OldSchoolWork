#ifndef ADDRESSTYPE_H_INCLUDED
#define ADDRESSTYPE_H_INCLUDED

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
#include <string>
class address
{
public:
    void setAddress(std::string,std::string,std::string,int);
    //Sets the street address, city , state and the zip code.
    void print() const;
    address();

private:
    std::string street;
    std::string city;
    std::string state;
    int zip;
};

#endif // ADDRESSTYPE_H_INCLUDED
