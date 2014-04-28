#ifndef BILLTYPE_H_INCLUDED
#define BILLTYPE_H_INCLUDED

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

 class billing
 {
 public:
    void setBill(std::string,double phar,
                  double doc_fee,double room_cha);
     //Sets the patients information like patient ID,
     //doctors fee, pharmacy fee  and room fee.
    double get_phar() const;
     //Returns the pharmacy fee.
    double get_doc_fee() const;
     //Returns the doctors fee
    double get_room_fee() const;
     //Returns the room fee
    std::string get_id() const;
     //Returns the patients ID number
     billing();
 private:
    std::string ID;
    double fee_doctor;
    double fee_pharmacy;
    double fee_room;
 };
#endif // BILLTYPE_H_INCLUDED
