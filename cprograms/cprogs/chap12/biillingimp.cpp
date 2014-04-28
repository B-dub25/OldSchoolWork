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
 #include <iostream>
 #include "billType.h"

 using namespace std;

 void billing::setBill(string id,double phar,
                       double doc_fee,double room_fee)
 {
              ID  = id;
     fee_pharmacy = phar;
     fee_doctor   = doc_fee;
     fee_room     = room_fee;
 }
 string billing::get_id() const
 {
     return ID;
 }
 double billing::get_doc_fee() const
 {
     return fee_doctor;
 }
 double billing::get_phar() const
 {
     return fee_pharmacy;
 }
 double billing::get_room_fee() const
 {
     return fee_room;
 }
 billing::billing()
 {
               ID = " ";
         fee_room = 0.0;
     fee_doctor   = 0.0;
     fee_pharmacy = 0.0;
 }
